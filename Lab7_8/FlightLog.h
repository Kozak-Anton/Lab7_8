#pragma once
#include "FlightEntrie.h"

class FligthLog {
	const std::string file_name;
	const int max_entries;
public:
	FligthLog(std::string new_file_name, int new_max_entries = 100) : file_name(new_file_name), max_entries(new_max_entries) {};
	void load_from_file(System::Windows::Forms::DataGridView^) const;
	void load_to_file(System::Windows::Forms::DataGridView^) const;
};