#pragma once

namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO::Ports;
	using namespace System::Threading;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTop;
	protected:

	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ pnlLogin;






	private: System::Windows::Forms::TextBox^ tbUsername;


	private: System::Windows::Forms::TextBox^ tbPassword;




	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Timer^ tmrLogin;
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pnlLogin = (gcnew System::Windows::Forms::Panel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tmrLogin = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlTop->SuspendLayout();
			this->pnlLogin->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlTop
			// 
			this->pnlTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pnlTop->Controls->Add(this->btnExit);
			this->pnlTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTop->Location = System::Drawing::Point(0, 0);
			this->pnlTop->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pnlTop->Name = L"pnlTop";
			this->pnlTop->Size = System::Drawing::Size(750, 38);
			this->pnlTop->TabIndex = 0;
			this->pnlTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pnlTop_MouseDown);
			this->pnlTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pnlTop_MouseMove);
			this->pnlTop->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pnlTop_MouseUp);
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.BackgroundImage")));
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(698, 0);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(52, 38);
			this->btnExit->TabIndex = 0;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &LoginForm::btnExit_Click);
			// 
			// pnlLogin
			// 
			this->pnlLogin->BackColor = System::Drawing::Color::Transparent;
			this->pnlLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlLogin.BackgroundImage")));
			this->pnlLogin->Controls->Add(this->btnLogin);
			this->pnlLogin->Controls->Add(this->tbPassword);
			this->pnlLogin->Controls->Add(this->tbUsername);
			this->pnlLogin->Location = System::Drawing::Point(18, 82);
			this->pnlLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pnlLogin->Name = L"pnlLogin";
			this->pnlLogin->Size = System::Drawing::Size(338, 308);
			this->pnlLogin->TabIndex = 1;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::Transparent;
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnLogin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(161, 219);
			this->btnLogin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(123, 51);
			this->btnLogin->TabIndex = 8;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::White;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(151, 179);
			this->tbPassword->Margin = System::Windows::Forms::Padding(4, 9, 27, 5);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(172, 26);
			this->tbPassword->TabIndex = 7;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbPassword_TextChanged);
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::White;
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->Location = System::Drawing::Point(154, 113);
			this->tbUsername->Margin = System::Windows::Forms::Padding(4, 9, 27, 5);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(168, 26);
			this->tbUsername->TabIndex = 4;
			// 
			// tmrLogin
			// 
			this->tmrLogin->Enabled = true;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(750, 432);
			this->Controls->Add(this->pnlLogin);
			this->Controls->Add(this->pnlTop);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->pnlTop->ResumeLayout(false);
			this->pnlLogin->ResumeLayout(false);
			this->pnlLogin->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool exitProgram = false;
	public: int switchForm = 0;
	private: bool dragging;
	private: Point offset;
	private: bool stopThread = false;
	private: bool portAvailable = false;
	private: String^ connString = "datasource=127.0.0.1;port=3306;username=root;password=;database=storedb;";
	private: MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);
	private: SerialPort^ serialPort = gcnew SerialPort("COM6", 115200);
	private: delegate System::Void UpdateVariableDelegate(int value);
	private: Thread^ serialReadThread = gcnew Thread(gcnew ThreadStart(this, &LoginForm::ContinuousSerialRead));

	private: System::Void StopThread() {
		stopThread = true;
		if (serialReadThread != nullptr && serialReadThread->IsAlive) {
			serialReadThread->Join();
		}
	}

	private: System::Void UpdateVariable(int value) {
		switchForm = value;
		Close();
	}

	private: System::Void ContinuousSerialRead() {
		while (!stopThread) {
			portAvailable = false;
			array<String^>^ portNames = SerialPort::GetPortNames();
			for each (String ^ portName in portNames) {
				if (portName->Equals("COM6", StringComparison::OrdinalIgnoreCase)) {
					portAvailable = true;
					break;
				}
			}
			if (portAvailable) {
				try {
					serialPort->Open();
					String^ nuid = serialPort->ReadLine()->Trim();
					UpdateVariableDelegate^ updateDelegate = gcnew UpdateVariableDelegate(this, &LoginForm::UpdateVariable);

					sqlConn->Open();
					String^ sqlQuery = "SELECT role FROM users WHERE nuid=@nuid;";
					MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
					sqlComm->Parameters->AddWithValue("@nuid", nuid);

					MySqlDataReader^ sqlReader = sqlComm->ExecuteReader();
					if (sqlReader->Read()) {
						String^ role = sqlReader->GetString(0);
						if (role == "Admin") {
							this->Invoke(updateDelegate, 1);
						}
						else if (role == "Staff Gudang") {
							this->Invoke(updateDelegate, 2);
						}
						else if (role == "Staff Kasir") {
							this->Invoke(updateDelegate, 3);
						}
						sqlConn->Close();
						serialPort->Close();
						StopThread();
					}
					else {
						serialPort->Close();
						sqlConn->Close();
						continue;
					}
				}
				catch (Exception^ e) {
					continue;
				}
			}
			if (stopThread) {
				break;
			}
			Thread::Sleep(100);
		}
	}

	private: System::Void pnlTop_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}

	private: System::Void pnlTop_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}

	private: System::Void pnlTop_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}

	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		exitProgram = true;
		Close();
	}

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = tbUsername->Text;
		String^ password = tbPassword->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please fill username and password", "Username or Password Empty", MessageBoxButtons::OK);
			return;
		}

		try {
			sqlConn->Open();
			String^ sqlQuery = "SELECT username, password, role FROM users WHERE username=@username AND password=@password;";
			MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlComm->Parameters->AddWithValue("@username", username);
			sqlComm->Parameters->AddWithValue("@password", password);

			MySqlDataReader^ sqlReader = sqlComm->ExecuteReader();
			if (sqlReader->Read()) {
				String^ role = sqlReader->GetString(2);
				if (role == "Admin") {
					switchForm = 1;
				}
				else if (role == "Staff Gudang") {
					switchForm = 2;
				}
				else if (role == "Staff Kasir") {
					switchForm = 3;
				}
			}
			else {
				MessageBox::Show("Username or password is incorrect", "Login Failed", MessageBoxButtons::OK);
				sqlConn->Close();
				serialPort->Close();
				return;
			}
			sqlConn->Close();
			serialPort->Close();
			StopThread();
			Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed to Connect", MessageBoxButtons::OK);
		}
	}

	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		serialReadThread->IsBackground = true;
		serialReadThread->Start();
	}
	private: System::Void tbPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
