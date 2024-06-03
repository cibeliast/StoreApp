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
	/// Summary for UpdateItemForm
	/// </summary>
	public ref class UpdateItemForm : public System::Windows::Forms::Form
	{
	public:
		UpdateItemForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UpdateItemForm(String^ name, String^ stock, String^ price)
		{
			InitializeComponent();
			selectedItem = name;
			selectedStock = stock;
			selectedPrice = price;
			if (selectedItem->Length == 0) {
				lbTitle->Text = "Add Item";
			}
			else {
				lbTitle->Text = "Update Item";
			}

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateItemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTop;
	private: System::Windows::Forms::Panel^ pnlAdd;
	private: System::Windows::Forms::Button^ btnCancel;


	private: System::Windows::Forms::Button^ btnUpdate;



	private: System::Windows::Forms::TextBox^ tbName;






	private: System::Windows::Forms::NumericUpDown^ nudPrice;

	private: System::Windows::Forms::NumericUpDown^ nudStock;

	private: System::Windows::Forms::Label^ lbTitle;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateItemForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->pnlAdd = (gcnew System::Windows::Forms::Panel());
			this->nudPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pnlAdd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudStock))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlTop
			// 
			this->pnlTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->pnlTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTop->Location = System::Drawing::Point(0, 0);
			this->pnlTop->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pnlTop->Name = L"pnlTop";
			this->pnlTop->Size = System::Drawing::Size(488, 38);
			this->pnlTop->TabIndex = 1;
			this->pnlTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateItemForm::pnlTop_MouseDown);
			this->pnlTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateItemForm::pnlTop_MouseMove);
			this->pnlTop->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateItemForm::pnlTop_MouseUp);
			// 
			// pnlAdd
			// 
			this->pnlAdd->BackColor = System::Drawing::Color::Transparent;
			this->pnlAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlAdd.BackgroundImage")));
			this->pnlAdd->Controls->Add(this->nudPrice);
			this->pnlAdd->Controls->Add(this->nudStock);
			this->pnlAdd->Controls->Add(this->btnCancel);
			this->pnlAdd->Controls->Add(this->btnUpdate);
			this->pnlAdd->Controls->Add(this->tbName);
			this->pnlAdd->Location = System::Drawing::Point(28, 120);
			this->pnlAdd->Margin = System::Windows::Forms::Padding(15);
			this->pnlAdd->Name = L"pnlAdd";
			this->pnlAdd->Size = System::Drawing::Size(393, 347);
			this->pnlAdd->TabIndex = 3;
			// 
			// nudPrice
			// 
			this->nudPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudPrice->Location = System::Drawing::Point(50, 163);
			this->nudPrice->Margin = System::Windows::Forms::Padding(15, 8, 15, 15);
			this->nudPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->nudPrice->Name = L"nudPrice";
			this->nudPrice->Size = System::Drawing::Size(277, 33);
			this->nudPrice->TabIndex = 14;
			this->nudPrice->ValueChanged += gcnew System::EventHandler(this, &UpdateItemForm::nudPrice_ValueChanged);
			// 
			// nudStock
			// 
			this->nudStock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudStock->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudStock->Location = System::Drawing::Point(46, 89);
			this->nudStock->Margin = System::Windows::Forms::Padding(15, 8, 15, 15);
			this->nudStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->nudStock->Name = L"nudStock";
			this->nudStock->Size = System::Drawing::Size(281, 33);
			this->nudStock->TabIndex = 13;
			this->nudStock->ValueChanged += gcnew System::EventHandler(this, &UpdateItemForm::nudStock_ValueChanged);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::Transparent;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(241, 227);
			this->btnCancel->Margin = System::Windows::Forms::Padding(30, 15, 30, 8);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(114, 54);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &UpdateItemForm::btnCancel_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::Transparent;
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnUpdate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(47, 232);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(30, 15, 30, 8);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(110, 44);
			this->btnUpdate->TabIndex = 8;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &UpdateItemForm::btnUpdate_Click);
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::Color::White;
			this->tbName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(46, 22);
			this->tbName->Margin = System::Windows::Forms::Padding(15, 8, 15, 15);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(298, 26);
			this->tbName->TabIndex = 4;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &UpdateItemForm::tbName_TextChanged);
			// 
			// lbTitle
			// 
			this->lbTitle->BackColor = System::Drawing::Color::White;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(-1, 61);
			this->lbTitle->Margin = System::Windows::Forms::Padding(30, 8, 30, 8);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(450, 46);
			this->lbTitle->TabIndex = 13;
			this->lbTitle->Text = L"ADD ITEM";
			this->lbTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UpdateItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(488, 491);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pnlAdd);
			this->Controls->Add(this->pnlTop);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"UpdateItemForm";
			this->Text = L"UpdateItemForm";
			this->Load += gcnew System::EventHandler(this, &UpdateItemForm::UpdateItemForm_Load);
			this->pnlAdd->ResumeLayout(false);
			this->pnlAdd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudStock))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool dragging;
	private: Point offset;
	private: String^ selectedItem;
	private: String^ selectedStock;
	private: String^ selectedPrice;
	private: String^ connString = "datasource=127.0.0.1;port=3306;username=root;password=;database=storedb;";
	private: MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);

	private: System::Void updateItem(String^ query) {
		try {
			sqlConn->Open();
			String^ sqlQuery = query;
			MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlComm->ExecuteNonQuery();
			sqlConn->Close();
			MessageBox::Show("Succes", "Update Item Succes", MessageBoxButtons::OK);
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed to Update", MessageBoxButtons::OK);
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
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ stock = nudStock->Text;
		String^ price = nudPrice->Text;

		if (lbTitle->Text == "Update Item") {
			String^ sqlQuery = "UPDATE items SET name='" + name + "', stock='" + stock + "', price='" + price + "' WHERE name='" + selectedItem + "';";
			updateItem(sqlQuery);
		}

		if (lbTitle->Text == "Add Item") {
			try {
				sqlConn->Open();
				String^ sqlQuery = "SELECT name FROM items WHERE name='" + name + "'";
				MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
				MySqlDataReader^ sqlReader = sqlComm->ExecuteReader();
				if (sqlReader->Read()) {
					MessageBox::Show("Item name already exist", "Duplicate Item", MessageBoxButtons::OK);
					sqlConn->Close();
					return;
				}
				else {
					sqlConn->Close();
					String^ sqlQuery = "INSERT INTO items (name, stock, price) VALUES ('" + name + "', '" + stock + "', '" + price + "');";
					updateItem(sqlQuery);
				}
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Failed to Check Name", MessageBoxButtons::OK);
			}
		}
		Close();

	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void UpdateItemForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (lbTitle->Text == "Update Item") {
			tbName->Text = selectedItem;
			nudStock->Text = selectedStock;
			nudPrice->Text = selectedPrice;
		}
		else {
			btnUpdate->Text = "Add";
		}
	}
	private: System::Void tbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void nudStock_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nudPrice_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
