#include "Login.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main()
{ //array<String^>^ args
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ElectricityConsumptionPlannerSystem::Login frm;
	Application::Run(% frm);
}