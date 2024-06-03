#include "LoginForm.h"
#include "AdminForm.h"
#include "WarehouseForm.h"
#include "CashierForm.h"
#include "ScanCardForm.h"

using namespace::System;
using namespace::System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	bool statusMain = true;
	while (statusMain) {
		StoreApp::LoginForm loginForm;
		loginForm.StartPosition = FormStartPosition::CenterScreen;
		loginForm.ShowDialog();
		if (loginForm.exitProgram) {
			statusMain = false;
			break;
		}

		if (loginForm.switchForm == 1) {
			while (loginForm.switchForm == 1) {
				StoreApp::AdminForm adminForm;
				loginForm.StartPosition = FormStartPosition::CenterScreen;
				adminForm.ShowDialog();
				if (adminForm.exitProgram) {
					statusMain = false;
					break;
				}
				if (adminForm.logout) {
					break;
				}
				if (adminForm.scanningCard) {
					StoreApp::ScanCardForm scanCardForm;
					scanCardForm.username = adminForm.sendUsername;
					scanCardForm.password = adminForm.sendPassword;
					scanCardForm.role = adminForm.sendRole;
					scanCardForm.ShowDialog();
				}
			}
		}

		if (loginForm.switchForm == 2) {
			StoreApp::WarehouseForm warehouseForm;
			warehouseForm.StartPosition = FormStartPosition::CenterScreen;
			warehouseForm.ShowDialog();

			if (warehouseForm.exitProgram) {
				statusMain = false;
				break;
			}
			if (warehouseForm.logout) {
				continue;
			}
		}

		if (loginForm.switchForm == 3) {
			StoreApp::CashierForm cashierForm;
			cashierForm.StartPosition = FormStartPosition::CenterScreen;
			cashierForm.ShowDialog();
			if (cashierForm.exitProgram) {
				statusMain = false;
				break;
			}
			if (cashierForm.logout) {
				continue;
			}
		}
	}
}