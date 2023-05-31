#include "FlightEntrie.h"
using namespace std;


int FligthEntrie::get_format_number(string line, char sep, int& pos) {
	int temp = 0;
	while (pos < line.length() && line[pos] != sep) {
		if (!isdigit(line[pos])) return -1;
		temp = temp * 10 + line[pos] - '0';
		++pos;
	}
	++pos;
	return temp;
}

void FligthEntrie::format_test(bool check_number, bool check_destination, bool check_date, bool check_time){
	FormatError current_error;
	if (check_number) current_error.test_number(number);
	if (check_destination) current_error.test_destination(destination);
	if (check_date) current_error.test_date(date);
	if (check_time) current_error.test_time(time);
	if (current_error) throw current_error;
}

void FligthEntrie::add_to_table(System::Windows::Forms::DataGridView^ dataGridViewLog){
	dataGridViewLog->Rows->Add(gcnew System::String(number.c_str()), gcnew System::String(destination.c_str()),
		gcnew System::String(date.c_str()), gcnew System::String(time.c_str()));
}

void FligthEntrie::make_from_row(System::Windows::Forms::DataGridView^ DataGridViewLog, int pos){
	number = msclr::interop::marshal_as<std::string>(DataGridViewLog->Rows[pos]->Cells[0]->Value->ToString());
	destination = msclr::interop::marshal_as<std::string>(DataGridViewLog->Rows[pos]->Cells[1]->Value->ToString());
	date = msclr::interop::marshal_as<std::string>(DataGridViewLog->Rows[pos]->Cells[2]->Value->ToString());
	time = msclr::interop::marshal_as<std::string>(DataGridViewLog->Rows[pos]->Cells[3]->Value->ToString());
}

std::string FligthEntrie::get_number() const{
	return number;
}

std::string FligthEntrie::get_destination() const{
	return destination;
}

std::string FligthEntrie::get_date() const{
	return date;
}

std::string FligthEntrie::get_time() const{
	return time;
}


std::ostream& operator<<(std::ostream& output, FligthEntrie& entrie) {
	output << entrie.number << "," << entrie.destination << "," << entrie.date << "," << entrie.time << ";" << flush;
	return output;
}

std::istream& operator>>(std::istream& input, FligthEntrie& entrie) {
	getline(input, entrie.number, ',');
	getline(input, entrie.destination, ',');
	getline(input, entrie.date, ',');
	getline(input, entrie.time, ';');
	return input;
}

int FormatError::get_format_number(std::string line, char sep, int& pos){
	int temp = 0;
	while (pos < line.length() && line[pos] != sep) {
		if (!isdigit(line[pos])) return -1;
		temp = temp * 10 + line[pos] - '0';
		++pos;
	}
	++pos;
	return temp;
}

void FormatError::test_number(const string& number){
	if (number.empty()) {
		number_error = true;
		number_details = "No number set";
		return;
	}

	for (const char& ch : number) {
		if (!isdigit(ch)) {
			number_error = true;
			number_details = "Number must consist of digits only";
			return;
		}
	}
}

void FormatError::test_destination(const string& destination){
	if (destination.empty()) {
		destination_error = true;
		destination_details = "No destination set";
		return;
	}
	for (const char& ch : destination) {
		if (!isalpha(ch) && !isspace(ch)) {
			destination_error = true;
			destination_details = "Incorrect destination set";
			return;
		}
	}
}

void FormatError::test_date(const string& date){
	if (date.empty()) {
		date_error = true;
		date_details = "No date set";
		return;
	}

	char sep = '.';
	int i = 0;
	int day, mon, year;
	day = mon = year = -1;
	day = get_format_number(date, sep, i);
	mon = get_format_number(date, sep, i);
	year = get_format_number(date, sep, i);
	
	switch (mon) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (day < 1 || day > 31) {
			date_error = true;
			date_details = "Incorrect day set";
		}
		break;
	case 2:
		if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) {
			if (day < 1 || day > 29) {
				date_error = true;
				date_details = "Incorrect day set";
			};
		}
		else if (day < 1 || day > 28) {
			date_error = true;
			date_details = "Incorrect day set";
		};
		break;
	default:
		if (day < 1 || day > 30) {
			date_error = true;
			date_details = "Incorrect day set";
		};
		break;
	}
	if (mon > 12 || mon < 1) {
		date_error = true;
		date_details = "Incorrect month set";
		return;
	}
	if (year < 2000 || year > 2050) {
		date_error = true;
		date_details = "Incorrect year set";
		return;
	}
	
}

void FormatError::test_time(const string& time){
	if (time.empty()) {
		time_error = true;
		time_details = "No time set";
		return;
	}

	int i = 0;
	char sep = '.';
	int hours, minutes;
	hours = minutes = -1;
	hours = get_format_number(time, sep, i);
	minutes = get_format_number(time, sep, i);
	if (hours < 0 || hours>23 || minutes < 0 || minutes > 59) {
		time_error = true;
		time_details = "Incorrect time set";
		return;
	};
}

FormatError::operator bool() const{
	return number_error || destination_error || date_error || time_error;
}

