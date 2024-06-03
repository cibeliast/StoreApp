#pragma once


namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::IO::Ports;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ScanCardForm
	/// </summary>
	public ref class ScanCardForm : public System::Windows::Forms::Form
	{
	public:
		ScanCardForm(void)
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
		~ScanCardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTop;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::PictureBox^ pbScan;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ScanCardForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pbScan = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbScan))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlTop
			// 
			this->pnlTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pnlTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTop->Location = System::Drawing::Point(0, 0);
			this->pnlTop->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pnlTop->Name = L"pnlTop";
			this->pnlTop->Size = System::Drawing::Size(450, 38);
			this->pnlTop->TabIndex = 2;
			// 
			// btnCancel
			// 
			this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(165, 386);
			this->btnCancel->Margin = System::Windows::Forms::Padding(30, 15, 30, 8);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(114, 54);
			this->btnCancel->TabIndex = 13;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ScanCardForm::btnCancel_Click);
			// 
			// lbTitle
			// 
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(0, 51);
			this->lbTitle->Margin = System::Windows::Forms::Padding(30, 8, 30, 8);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(450, 46);
			this->lbTitle->TabIndex = 14;
			this->lbTitle->Text = L"Scan ID Card";
			this->lbTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pbScan
			// 
			this->pbScan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbScan.Image")));
			this->pbScan->Location = System::Drawing::Point(18, 123);
			this->pbScan->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pbScan->Name = L"pbScan";
			this->pbScan->Size = System::Drawing::Size(414, 235);
			this->pbScan->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbScan->TabIndex = 15;
			this->pbScan->TabStop = false;
			// 
			// ScanCardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 462);
			this->Controls->Add(this->pbScan);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->pnlTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"ScanCardForm";
			this->Text = L"ScanCardForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ScanCardForm::ScanCardForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ScanCardForm::ScanCardForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbScan))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: String^ username;
	public: String^ password;
	public: String^ role;
	private: bool stopThread = false;
	private: bool portAvailable = false;
	private: String^ connString = "datasource=127.0.0.1;port=3306;username=root;password=;database=storedb;";
	private: MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);
	private: SerialPort^ serialPort = gcnew SerialPort("COM6", 115200);
	private: Thread^ serialReadThreadV2 = gcnew Thread(gcnew ThreadStart(this, &ScanCardForm::ContinuousSerialRead));
	private: delegate System::Void CloseFormDelegate();

	private: System::Void CloseForm() {
		if (this->InvokeRequired) {
			this->Invoke(gcnew CloseFormDelegate(this, &ScanCardForm::CloseForm));
		}
		else {
			this->Close();
		}
	}

	private: System::Void StopThread() {
		stopThread = true;
		if (serialReadThreadV2 != nullptr && serialReadThreadV2->IsAlive) {
			serialReadThreadV2->Join();
		}
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
					CloseFormDelegate^ closeFormDelegate = gcnew CloseFormDelegate(this, &ScanCardForm::CloseForm);
					serialPort->Open();
					String^ nuid = serialPort->ReadLine()->Trim();

					sqlConn->Open();
					String^ sqlQuery = "SELECT nuid FROM users WHERE nuid=@nuid;";
					MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
					sqlComm->Parameters->AddWithValue("@nuid", nuid);

					MySqlDataReader^ sqlReader = sqlComm->ExecuteReader();
					if (sqlReader->Read()) {
						MessageBox::Show("This ID card alreaady registered", "Duplicate ID Card", MessageBoxButtons::OK);
						sqlConn->Close();
						serialPort->Close();
					}
					else {
						sqlConn->Close();
						sqlConn->Open();
						sqlQuery = "INSERT INTO users (username, password, role, nuid) VALUES (@username, @password, @role, @nuid);";
						sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
						sqlComm->Parameters->AddWithValue("@username", username);
						sqlComm->Parameters->AddWithValue("@password", password);
						sqlComm->Parameters->AddWithValue("@role", role);
						sqlComm->Parameters->AddWithValue("@nuid", nuid);
						sqlComm->ExecuteNonQuery();
						sqlConn->Close();
						MessageBox::Show("Add user succes", "Succes", MessageBoxButtons::OK);
						serialPort->Close();
						this->Invoke(closeFormDelegate);
						StopThread();
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

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		StopThread();
		Close();
	}
	private: System::Void ScanCardForm_Load(System::Object^ sender, System::EventArgs^ e) {
		serialReadThreadV2->IsBackground = true;
		serialReadThreadV2->Start();
	}
	private: System::Void ScanCardForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		StopThread();
	}
};
}
