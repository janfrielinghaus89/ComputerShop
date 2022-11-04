
#include "Login.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		ComputerShop::Login loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			// show Register form
			ComputerShop::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {

		MessageBox::Show("Der User " + user->nickname + " (" + user->name + ") wurde erfolgreich angelegt/eingeloggt.", "Program.cpp", MessageBoxButtons::OK);
		ComputerShop::MainForm mainForm(user);
		Application::Run(% mainForm);


		

	}
	else {
		MessageBox::Show("Der Loginvorgang wurde abgebrochen", "Programm.cpp", MessageBoxButtons::OK);
	}
}