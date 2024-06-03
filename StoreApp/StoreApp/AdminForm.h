#pragma once

namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTop;
	protected:
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ pnlAdd;
	private: System::Windows::Forms::Button^ btnAdd;


	private: System::Windows::Forms::TextBox^ tbPassword;



	private: System::Windows::Forms::TextBox^ tbUsername;





	private: System::Windows::Forms::RadioButton^ rbGudang;
	private: System::Windows::Forms::Label^ lbRole;
	private: System::Windows::Forms::RadioButton^ rbKasir;
	private: System::Windows::Forms::DataGridView^ dgvUsers;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Panel^ pnlList;
	private: System::Windows::Forms::Button^ btnLogout;
	private: System::Windows::Forms::CheckBox^ cbUseCard;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pnlAdd = (gcnew System::Windows::Forms::Panel());
			this->cbUseCard = (gcnew System::Windows::Forms::CheckBox());
			this->lbRole = (gcnew System::Windows::Forms::Label());
			this->rbKasir = (gcnew System::Windows::Forms::RadioButton());
			this->rbGudang = (gcnew System::Windows::Forms::RadioButton());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->dgvUsers = (gcnew System::Windows::Forms::DataGridView());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->pnlList = (gcnew System::Windows::Forms::Panel());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->pnlTop->SuspendLayout();
			this->pnlAdd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsers))->BeginInit();
			this->pnlList->SuspendLayout();
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
			this->pnlTop->Size = System::Drawing::Size(975, 38);
			this->pnlTop->TabIndex = 1;
			this->pnlTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::pnlTop_MouseDown);
			this->pnlTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::pnlTop_MouseMove);
			this->pnlTop->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::pnlTop_MouseUp);
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.BackgroundImage")));
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(923, 0);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(52, 38);
			this->btnExit->TabIndex = 0;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &AdminForm::btnExit_Click);
			// 
			// pnlAdd
			// 
			this->pnlAdd->BackColor = System::Drawing::Color::Transparent;
			this->pnlAdd->Controls->Add(this->cbUseCard);
			this->pnlAdd->Controls->Add(this->lbRole);
			this->pnlAdd->Controls->Add(this->rbKasir);
			this->pnlAdd->Controls->Add(this->rbGudang);
			this->pnlAdd->Controls->Add(this->btnAdd);
			this->pnlAdd->Controls->Add(this->tbPassword);
			this->pnlAdd->Controls->Add(this->tbUsername);
			this->pnlAdd->Location = System::Drawing::Point(85, 120);
			this->pnlAdd->Margin = System::Windows::Forms::Padding(22, 23, 30, 23);
			this->pnlAdd->Name = L"pnlAdd";
			this->pnlAdd->Size = System::Drawing::Size(375, 408);
			this->pnlAdd->TabIndex = 2;
			// 
			// cbUseCard
			// 
			this->cbUseCard->AutoSize = true;
			this->cbUseCard->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbUseCard->Location = System::Drawing::Point(83, 255);
			this->cbUseCard->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cbUseCard->Name = L"cbUseCard";
			this->cbUseCard->Size = System::Drawing::Size(145, 32);
			this->cbUseCard->TabIndex = 12;
			this->cbUseCard->Text = L"Add ID Card";
			this->cbUseCard->UseVisualStyleBackColor = true;
			this->cbUseCard->CheckedChanged += gcnew System::EventHandler(this, &AdminForm::cbUseCard_CheckedChanged);
			// 
			// lbRole
			// 
			this->lbRole->AutoSize = true;
			this->lbRole->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRole->Location = System::Drawing::Point(78, 194);
			this->lbRole->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbRole->Name = L"lbRole";
			this->lbRole->Size = System::Drawing::Size(50, 28);
			this->lbRole->TabIndex = 11;
			this->lbRole->Text = L"Role";
			// 
			// rbKasir
			// 
			this->rbKasir->AutoSize = true;
			this->rbKasir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbKasir->Location = System::Drawing::Point(234, 231);
			this->rbKasir->Margin = System::Windows::Forms::Padding(4, 9, 4, 5);
			this->rbKasir->Name = L"rbKasir";
			this->rbKasir->Size = System::Drawing::Size(123, 32);
			this->rbKasir->TabIndex = 10;
			this->rbKasir->TabStop = true;
			this->rbKasir->Text = L"Staff Kasir";
			this->rbKasir->UseVisualStyleBackColor = true;
			this->rbKasir->CheckedChanged += gcnew System::EventHandler(this, &AdminForm::rbKasir_CheckedChanged);
			// 
			// rbGudang
			// 
			this->rbGudang->AutoSize = true;
			this->rbGudang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbGudang->Location = System::Drawing::Point(83, 228);
			this->rbGudang->Margin = System::Windows::Forms::Padding(4, 9, 4, 5);
			this->rbGudang->Name = L"rbGudang";
			this->rbGudang->Size = System::Drawing::Size(151, 32);
			this->rbGudang->TabIndex = 9;
			this->rbGudang->TabStop = true;
			this->rbGudang->Text = L"Staff Gudang";
			this->rbGudang->UseVisualStyleBackColor = true;
			this->rbGudang->CheckedChanged += gcnew System::EventHandler(this, &AdminForm::rbGudang_CheckedChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(156, 298);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 31, 4, 31);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(114, 54);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AdminForm::btnAdd_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::White;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(116, 147);
			this->tbPassword->Margin = System::Windows::Forms::Padding(4, 9, 27, 5);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(214, 26);
			this->tbPassword->TabIndex = 7;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &AdminForm::tbPassword_TextChanged);
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::White;
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->Location = System::Drawing::Point(171, 84);
			this->tbUsername->Margin = System::Windows::Forms::Padding(4, 9, 27, 5);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(159, 26);
			this->tbUsername->TabIndex = 4;
			this->tbUsername->TextChanged += gcnew System::EventHandler(this, &AdminForm::tbUsername_TextChanged);
			// 
			// dgvUsers
			// 
			this->dgvUsers->AllowUserToAddRows = false;
			this->dgvUsers->AllowUserToDeleteRows = false;
			this->dgvUsers->AllowUserToOrderColumns = true;
			this->dgvUsers->AllowUserToResizeColumns = false;
			this->dgvUsers->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvUsers->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsers->Location = System::Drawing::Point(0, 27);
			this->dgvUsers->Margin = System::Windows::Forms::Padding(22, 23, 30, 23);
			this->dgvUsers->Name = L"dgvUsers";
			this->dgvUsers->ReadOnly = true;
			this->dgvUsers->RowHeadersVisible = false;
			this->dgvUsers->RowHeadersWidth = 62;
			this->dgvUsers->Size = System::Drawing::Size(468, 242);
			this->dgvUsers->TabIndex = 3;
			this->dgvUsers->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &AdminForm::dgvUsers_CellMouseClick);
			// 
			// btnDelete
			// 
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(177, 298);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4, 31, 4, 31);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(114, 54);
			this->btnDelete->TabIndex = 12;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &AdminForm::btnDelete_Click);
			// 
			// pnlList
			// 
			this->pnlList->BackColor = System::Drawing::Color::Transparent;
			this->pnlList->Controls->Add(this->dgvUsers);
			this->pnlList->Controls->Add(this->btnDelete);
			this->pnlList->Location = System::Drawing::Point(464, 120);
			this->pnlList->Margin = System::Windows::Forms::Padding(22, 23, 30, 23);
			this->pnlList->Name = L"pnlList";
			this->pnlList->Size = System::Drawing::Size(468, 408);
			this->pnlList->TabIndex = 12;
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::Color::Transparent;
			this->btnLogout->FlatAppearance->BorderSize = 0;
			this->btnLogout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnLogout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(79, 56);
			this->btnLogout->Margin = System::Windows::Forms::Padding(8);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(114, 54);
			this->btnLogout->TabIndex = 13;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &AdminForm::btnLogout_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(975, 563);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->pnlList);
			this->Controls->Add(this->pnlAdd);
			this->Controls->Add(this->pnlTop);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->pnlTop->ResumeLayout(false);
			this->pnlAdd->ResumeLayout(false);
			this->pnlAdd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsers))->EndInit();
			this->pnlList->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool exitProgram = false;
	public: bool logout = false;
	public: bool scanningCard = false;
	public: String^ sendUsername;
	public: String^ sendPassword;
	public: String^ sendRole;
	private: bool dragging;
	private: Point offset;
	private: String^ connString = "datasource=127.0.0.1;port=3306;username=root;password=;database=storedb;";
	private: MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);
	private: String^ role;
	private: String^ selectedUsername;

	private: System::Void refreshDataTable() {
		try {
			sqlConn->Open();
			String^ sqlQuery = "SELECT username, password, role FROM users;";
			MySqlDataAdapter^ sqlDataAdapter = gcnew MySqlDataAdapter(sqlQuery, sqlConn);
			DataTable^ dataTable = gcnew DataTable();

			sqlDataAdapter->Fill(dataTable);
			dgvUsers->DataSource = dataTable;
			sqlConn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed to Connect", MessageBoxButtons::OK);
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

	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		logout = true;
		Close();
	}
	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
		refreshDataTable();
		selectedUsername = dgvUsers->Rows[0]->Cells[0]->Value->ToString();

	}
	private: System::Void rbGudang_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		role = "Staff Gudang";
	}
	private: System::Void rbKasir_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		role = "Staff Kasir";
	}
	private: System::Void dgvUsers_CellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		selectedUsername = dgvUsers->CurrentRow->Cells[0]->Value->ToString();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = tbUsername->Text;
		String^ password = tbPassword->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please fill the data", "Username or Password Empty", MessageBoxButtons::OK);
			return;
		}

		if (cbUseCard->Checked) {
			sendUsername = username;
			sendPassword = password;
			sendRole = role;
			scanningCard = true;
			Close();
			return;
		}

		for (int i = 0; i < dgvUsers->RowCount; i++) {
			if (username == dgvUsers->Rows[i]->Cells[0]->Value->ToString()) {
				MessageBox::Show("Username already exist", "Username Taken", MessageBoxButtons::OK);
				return;
			}
		}

		try {
			sqlConn->Open();
			String^ sqlQuery = "INSERT INTO users (username, password, role) VALUES (@username, @password, @role);";
			MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlComm->Parameters->AddWithValue("@username", username);
			sqlComm->Parameters->AddWithValue("@password", password);
			sqlComm->Parameters->AddWithValue("@role", role);
			sqlComm->ExecuteNonQuery();
			sqlConn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed to Add", MessageBoxButtons::OK);
		}

		refreshDataTable();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (selectedUsername == "admin") {
			MessageBox::Show("Cannot delete user Admin", "Operation Prohibited", MessageBoxButtons::OK);
			return;
		}

		if ((MessageBox::Show("Are you sure want to delete this user?", "Delete User", MessageBoxButtons::OKCancel)) == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}

		try {
			sqlConn->Open();
			String^ sqlQuery = "DELETE FROM users WHERE username=@username;";
			MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlComm->Parameters->AddWithValue("@username", selectedUsername);
			sqlComm->ExecuteNonQuery();
			sqlConn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed to Delete", MessageBoxButtons::OK);
		}

		refreshDataTable();
	}
	private: System::Void cbUseCard_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void tbUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
