#include "FlightLog.h"
using namespace std;

void FligthLog::load_from_file(System::Windows::Forms::DataGridView^ DataGridViewLog) const{
	ifstream file(file_name);
	FligthEntrie current;
	while (file >> current) {
		current.add_to_table(DataGridViewLog);
	}
	file.close();
}

void FligthLog::load_to_file(System::Windows::Forms::DataGridView^ DataGridViewLog) const{
	ofstream file(file_name);
	FligthEntrie current;
	for (int i = 0; i < DataGridViewLog->RowCount; ++i) {
		
	}
	file.close();
}
