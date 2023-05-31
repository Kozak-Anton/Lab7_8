#pragma once
#include <string>
#include <exception>
#include <stdexcept>
#include <fstream>
#include <msclr\marshal_cppstd.h>

class FligthEntrie {
	std::string number;
	std::string destination;
	std::string date;
	std::string time;
	int get_format_number(std::string, char, int&);
public:
	friend class FormatError;
	FligthEntrie(std::string new_number="", std::string new_destination="", std::string new_date="", std::string new_time="") :
		number(new_number), destination(new_destination), date(new_date), time(new_time) {};
	void format_test(bool check_number = 1, bool check_destination = 1, bool check_date = 1, bool check_time = 1);
	void add_to_table(System::Windows::Forms::DataGridView^);
	void make_from_row(System::Windows::Forms::DataGridView^, int);
	std::string get_number() const;
	std::string get_destination() const;
	std::string get_date() const;
	std::string get_time() const;
	friend std::ostream& operator<<(std::ostream&, FligthEntrie&);
	friend std::istream& operator>>(std::istream&, FligthEntrie&);
};

class FormatError {
	int get_format_number(std::string, char, int&);
public:
	bool number_error;
	bool destination_error;
	bool date_error;
	bool time_error;
	std::string number_details;
	std::string destination_details;
	std::string date_details;
	std::string time_details;
	FormatError() : number_error(0), destination_error(0), date_error(0), time_error(0) {};
	void test_number(const std::string&);
	void test_destination(const std::string&);
	void test_date(const std::string&);
	void test_time(const std::string&);
	operator bool() const;
};