#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) 
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  FormDemo::MainForm form;
  Application::Run(%form);
}