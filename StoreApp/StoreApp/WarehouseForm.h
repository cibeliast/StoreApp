#pragma once
#include "UpdateItemForm.h"
#include "Item.h"
namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Summary for WarehouseForm
	/// </summary>
	public ref class WarehouseForm : public System::Windows::Forms::Form
	{
	public:
		WarehouseForm(void)
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
		~WarehouseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTop;
	protected:
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnLogout;

	private: System::Windows::Forms::TextBox^ tbSearch;

	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::DataGridView^ dgvListItems;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnPrint;

	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnUpdate;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WarehouseForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->dgvListItems = (gcnew System::Windows::Forms::DataGridView());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->pnlTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListItems))->BeginInit();
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
			this->pnlTop->Size = System::Drawing::Size(1200, 38);
			this->pnlTop->TabIndex = 1;
			this->pnlTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &WarehouseForm::pnlTop_MouseDown);
			this->pnlTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &WarehouseForm::pnlTop_MouseMove);
			this->pnlTop->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &WarehouseForm::pnlTop_MouseUp);
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.BackgroundImage")));
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(1148, 0);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(52, 38);
			this->btnExit->TabIndex = 0;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &WarehouseForm::btnExit_Click);
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
			this->btnLogout->Location = System::Drawing::Point(68, 73);
			this->btnLogout->Margin = System::Windows::Forms::Padding(30, 8, 8, 15);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(143, 54);
			this->btnLogout->TabIndex = 14;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &WarehouseForm::btnLogout_Click);
			// 
			// tbSearch
			// 
			this->tbSearch->BackColor = System::Drawing::Color::White;
			this->tbSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(247, 182);
			this->tbSearch->Margin = System::Windows::Forms::Padding(9, 9, 9, 5);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(673, 26);
			this->tbSearch->TabIndex = 16;
			this->tbSearch->TextChanged += gcnew System::EventHandler(this, &WarehouseForm::tbSearch_TextChanged);
			// 
			// btnRefresh
			// 
			this->btnRefresh->BackColor = System::Drawing::Color::White;
			this->btnRefresh->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRefresh.BackgroundImage")));
			this->btnRefresh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnRefresh->FlatAppearance->BorderSize = 0;
			this->btnRefresh->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnRefresh->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRefresh->Location = System::Drawing::Point(947, 168);
			this->btnRefresh->Margin = System::Windows::Forms::Padding(9, 5, 30, 5);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(64, 54);
			this->btnRefresh->TabIndex = 17;
			this->btnRefresh->UseVisualStyleBackColor = false;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &WarehouseForm::btnRefresh_Click);
			// 
			// dgvListItems
			// 
			this->dgvListItems->AllowUserToAddRows = false;
			this->dgvListItems->AllowUserToDeleteRows = false;
			this->dgvListItems->AllowUserToOrderColumns = true;
			this->dgvListItems->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvListItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListItems->Location = System::Drawing::Point(39, 226);
			this->dgvListItems->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgvListItems->Name = L"dgvListItems";
			this->dgvListItems->ReadOnly = true;
			this->dgvListItems->RowHeadersVisible = false;
			this->dgvListItems->RowHeadersWidth = 62;
			this->dgvListItems->Size = System::Drawing::Size(1113, 306);
			this->dgvListItems->TabIndex = 18;
			this->dgvListItems->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &WarehouseForm::dgvListItems_CellMouseClick);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Transparent;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(180, 564);
			this->btnAdd->Margin = System::Windows::Forms::Padding(30, 15, 30, 15);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(114, 54);
			this->btnAdd->TabIndex = 19;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &WarehouseForm::btnAdd_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::Transparent;
			this->btnPrint->FlatAppearance->BorderSize = 0;
			this->btnPrint->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnPrint->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnPrint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(875, 564);
			this->btnPrint->Margin = System::Windows::Forms::Padding(30, 15, 30, 15);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(114, 54);
			this->btnPrint->TabIndex = 20;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &WarehouseForm::btnPrint_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::Transparent;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(647, 564);
			this->btnDelete->Margin = System::Windows::Forms::Padding(30, 15, 30, 15);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(114, 54);
			this->btnDelete->TabIndex = 21;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &WarehouseForm::btnDelete_Click);
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
			this->btnUpdate->Location = System::Drawing::Point(417, 564);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(30, 15, 30, 15);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(114, 54);
			this->btnUpdate->TabIndex = 22;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &WarehouseForm::btnUpdate_Click);
			// 
			// WarehouseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1200, 692);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvListItems);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->pnlTop);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"WarehouseForm";
			this->Text = L"WarehouseForm";
			this->Load += gcnew System::EventHandler(this, &WarehouseForm::WarehouseForm_Load);
			this->pnlTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListItems))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool exitProgram = false;
	public: bool logout = false;
	private: bool dragging;
	private: Point offset;
	private: String^ selectedItem;
	private: String^ selectedStock;
	private: String^ selectedPrice;
	private: String^ connString = "datasource=127.0.0.1;port=3306;username=root;password=;database=storedb;";
	private: MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);

	private: System::Void refreshDataTable(String^ query) {
		try {
			sqlConn->Open();
			String^ sqlQuery = query;
			MySqlDataAdapter^ sqlDataAdapter = gcnew MySqlDataAdapter(sqlQuery, sqlConn);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);
			dgvListItems->DataSource = dataTable;
			sqlConn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed to Load Data", MessageBoxButtons::OK);
		}
	}

	private: System::String^ formatCurrency(int data) {
		String^ formatted = data.ToString();
		int sizeString = formatted->Length;
		if (sizeString > 3 && sizeString < 7) {
			formatted = formatted->Insert(sizeString - 3, ",");
		}
		else if (sizeString > 6 && sizeString < 10) {
			formatted = formatted->Insert(sizeString - 3, ",");
			formatted = formatted->Insert(sizeString - 6, ",");
		}
		return formatted;
	}


	private: System::Void pnlTop_MouseDown(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void pnlTop_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
		if (dragging) {
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}
	private: System::Void pnlTop_MouseUp(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
		dragging = false;
	}

	private: System::Void btnExit_Click(System::Object ^ sender, System::EventArgs ^ e) {
		exitProgram = true;
		Close();
	}
	private: System::Void btnLogout_Click(System::Object ^ sender, System::EventArgs ^ e) {
		logout = true;
		Close();
	}
	private: System::Void WarehouseForm_Load(System::Object ^ sender, System::EventArgs ^ e) {
		refreshDataTable("SELECT name, stock, price FROM items;");
		selectedItem = dgvListItems->Rows[0]->Cells[0]->Value->ToString();
		selectedStock = dgvListItems->Rows[0]->Cells[1]->Value->ToString();
		selectedPrice = dgvListItems->Rows[0]->Cells[2]->Value->ToString();
	}
	private: System::Void dgvListItems_CellMouseClick(System::Object ^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs ^ e) {
		selectedItem = dgvListItems->CurrentRow->Cells[0]->Value->ToString();
		selectedStock = dgvListItems->CurrentRow->Cells[1]->Value->ToString();
		selectedPrice = dgvListItems->CurrentRow->Cells[2]->Value->ToString();
	}

	private: System::Void tbSearch_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
		refreshDataTable("SELECT name, stock, price FROM items WHERE name LIKE '%" + tbSearch->Text + "%';");
	}
	private: System::Void btnAdd_Click(System::Object ^ sender, System::EventArgs ^ e) {
		UpdateItemForm^ updateItemForm = gcnew UpdateItemForm("", "", "");
		updateItemForm->ShowDialog();
	}
	private: System::Void btnUpdate_Click(System::Object ^ sender, System::EventArgs ^ e) {
		UpdateItemForm^ updateItemForm = gcnew UpdateItemForm(selectedItem, selectedStock, selectedPrice);
		updateItemForm->ShowDialog();
	}
	private: System::Void btnDelete_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if ((MessageBox::Show("Are you sure want to delete this item?", "Delete Item", MessageBoxButtons::OKCancel)) == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}

		try {
			sqlConn->Open();
			String^ sqlQuery = "DELETE FROM items WHERE name=@name;";
			MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlComm->Parameters->AddWithValue("@name", selectedItem);
			sqlComm->ExecuteNonQuery();
			sqlConn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Delete Item Failed", MessageBoxButtons::OK);
		}

		refreshDataTable("SELECT name, stock, price FROM items;");
		tbSearch->Clear();
		selectedItem = dgvListItems->Rows[0]->Cells[0]->Value->ToString();
	}
	private: System::Void btnPrint_Click(System::Object ^ sender, System::EventArgs ^ e) {
		refreshDataTable("SELECT name, stock, price FROM items;");
		tbSearch->Clear();
		selectedItem = dgvListItems->Rows[0]->Cells[0]->Value->ToString();
		selectedStock = dgvListItems->Rows[0]->Cells[1]->Value->ToString();
		selectedPrice = dgvListItems->Rows[0]->Cells[2]->Value->ToString();
		// Insert All Items to List Of Item
		List<Item^>^ listPrintedItem = gcnew List<Item^>();
		for (int i = 0; i < dgvListItems->RowCount; i++) {
			String^ name = dgvListItems->Rows[i]->Cells[0]->Value->ToString();
			int stock = Convert::ToInt32(dgvListItems->Rows[i]->Cells[1]->Value);
			int price = Convert::ToInt32(dgvListItems->Rows[i]->Cells[2]->Value);
			Item^ dump = gcnew Item(name, stock, price);
			listPrintedItem->Add(dump);
		}

		// Sort List of Item with Selection Sort
		for (int i = 0; i < listPrintedItem->Count; i++) {
			int min_idx = i;
			for (int j = i + 1; j < listPrintedItem->Count; j++) {
				if (String::Compare(listPrintedItem[min_idx]->name, listPrintedItem[j]->name) == true) {
					min_idx = j;
				}
			}
			if (min_idx != i) {
				Item^ temp = gcnew Item(listPrintedItem[i]->name, listPrintedItem[i]->qty, listPrintedItem[i]->price);
				listPrintedItem[i] = listPrintedItem[min_idx];
				listPrintedItem[min_idx] = temp;
			}
		}

		// Print List of Item
		StreamWriter^ sw = gcnew StreamWriter(DateTime::Now.ToString("ddMMyyyy_hhmmss") + "_Stock.txt");
		sw->WriteLine("+----+------------------------------------------+-------------+---------------+");
		sw->WriteLine("| No |               Nama Barang                |     Stok    |     Harga     |");
		sw->WriteLine("+----+------------------------------------------+-------------+---------------+");
		for (int i = 0; i < dgvListItems->RowCount; i++) {
			sw->WriteLine(String::Format("|{0,-4}| {1,-41}|{2,12} |{3,14} |", i + 1, listPrintedItem[i]->name, listPrintedItem[i]->qty, formatCurrency(listPrintedItem[i]->price)));
		}
		sw->WriteLine("+----+------------------------------------------+-------------+---------------+\n");
		sw->Close();
	}
	private: System::Void btnRefresh_Click(System::Object ^ sender, System::EventArgs ^ e) {
		refreshDataTable("SELECT name, stock, price FROM items;");
		tbSearch->Clear();
		selectedItem = dgvListItems->Rows[0]->Cells[0]->Value->ToString();
		selectedStock = dgvListItems->Rows[0]->Cells[1]->Value->ToString();
		selectedPrice = dgvListItems->Rows[0]->Cells[2]->Value->ToString();
	}
	private: System::Void pbSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lblTitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
	}
