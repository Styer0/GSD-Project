#include "LoginForm.h"
#include "RegisterForm.h"
#include "Mainform.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		GSD::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchRegister) {
			GSD::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchLogin) {
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
		GSD::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication Canceled " + user->name, "Program.cpp", MessageBoxButtons::OK);
	}
}