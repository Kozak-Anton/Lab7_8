#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	FligthLog data_grid_contents(FILE_NAME, MAX_ENTRIES);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	$safeprojectname$::MyForm form(&data_grid_contents);
	Application::Run(% form);
}