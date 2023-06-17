#pragma once
#include "estudiante.h";

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew estudiante();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=Javier5832#%; database=estudiante;"; 
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString); 
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage4;


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_id_mod;
	private: System::Windows::Forms::Button^ btn_modificar;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_placa_mod;
	private: System::Windows::Forms::TextBox^ txt_anio_mod;
	private: estudiante^ data;
	private: System::Windows::Forms::TextBox^ txt_serie_mod;
	private: System::Windows::Forms::TextBox^ txt_marca_mod;
	private: System::Windows::Forms::TextBox^ txt_nombre_mod;
	private: System::Windows::Forms::DataGridView^ data_grid2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label_eliminar;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_id_el;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::DataGridView^ data_grid3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_efisica;

	private: System::Windows::Forms::TextBox^ txt_mate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txt_genero;

	private: System::Windows::Forms::TextBox^ txt_edad;

	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btn_mod;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label;


	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txt_efisica_mod;

	private: System::Windows::Forms::TextBox^ txt_mate_mod;

	private: System::Windows::Forms::TextBox^ txt_genero_mod;

	private: System::Windows::Forms::TextBox^ txt_edad_mod;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txt_sociales;
	private: System::Windows::Forms::TextBox^ txt_fisicaf;
private: System::Windows::Forms::TextBox^ txt_fisicaf_mod;
private: System::Windows::Forms::TextBox^ txt_sociales_mod;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label19;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txt_sociales = (gcnew System::Windows::Forms::TextBox());
			this->txt_fisicaf = (gcnew System::Windows::Forms::TextBox());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_efisica = (gcnew System::Windows::Forms::TextBox());
			this->txt_mate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_genero = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->txt_fisicaf_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_sociales_mod = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_mod = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_efisica_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_mate_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_genero_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad_mod = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_id_mod = (gcnew System::Windows::Forms::TextBox());
			this->btn_modificar = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_placa_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_anio_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_serie_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_marca_mod = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre_mod = (gcnew System::Windows::Forms::TextBox());
			this->data_grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label_eliminar = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_id_el = (gcnew System::Windows::Forms::TextBox());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->data_grid3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(266, -100);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(555, 56);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Vehiculos Mamalones";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(-146, -29);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1811, 822);
			this->tabControl1->TabIndex = 7;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Controls->Add(this->tabControl2);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage4->Location = System::Drawing::Point(4, 26);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1803, 792);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Agregar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(549, 34);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(700, 56);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Registro de Estudiantes ICI";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage1);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl2->Location = System::Drawing::Point(169, 84);
			this->tabControl2->Margin = System::Windows::Forms::Padding(4);
			this->tabControl2->Multiline = true;
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1356, 661);
			this->tabControl2->TabIndex = 7;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage1->Controls->Add(this->label24);
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->txt_sociales);
			this->tabPage1->Controls->Add(this->txt_fisicaf);
			this->tabPage1->Controls->Add(this->data_grid);
			this->tabPage1->Controls->Add(this->btn_guardar);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->txt_efisica);
			this->tabPage1->Controls->Add(this->txt_mate);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->txt_genero);
			this->tabPage1->Controls->Add(this->txt_edad);
			this->tabPage1->Controls->Add(this->txt_nombre);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1348, 631);
			this->tabPage1->TabIndex = 3;
			this->tabPage1->Text = L"Agregar";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(973, 399);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(199, 23);
			this->label24->TabIndex = 15;
			this->label24->Text = L"Fisica Fundamental";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(973, 336);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(177, 23);
			this->label23->TabIndex = 14;
			this->label23->Text = L"Ciencias Sociales";
			// 
			// txt_sociales
			// 
			this->txt_sociales->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_sociales->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_sociales->ForeColor = System::Drawing::Color::White;
			this->txt_sociales->Location = System::Drawing::Point(977, 363);
			this->txt_sociales->Margin = System::Windows::Forms::Padding(4);
			this->txt_sociales->Name = L"txt_sociales";
			this->txt_sociales->Size = System::Drawing::Size(311, 32);
			this->txt_sociales->TabIndex = 13;
			// 
			// txt_fisicaf
			// 
			this->txt_fisicaf->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_fisicaf->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_fisicaf->ForeColor = System::Drawing::Color::White;
			this->txt_fisicaf->Location = System::Drawing::Point(976, 426);
			this->txt_fisicaf->Margin = System::Windows::Forms::Padding(4);
			this->txt_fisicaf->Name = L"txt_fisicaf";
			this->txt_fisicaf->Size = System::Drawing::Size(311, 32);
			this->txt_fisicaf->TabIndex = 12;
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid->Location = System::Drawing::Point(41, 36);
			this->data_grid->Margin = System::Windows::Forms::Padding(4);
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->RowHeadersWidth = 51;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(896, 537);
			this->data_grid->TabIndex = 11;
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->btn_guardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_guardar->FlatAppearance->BorderColor = System::Drawing::Color::LimeGreen;
			this->btn_guardar->FlatAppearance->BorderSize = 0;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar->ForeColor = System::Drawing::Color::White;
			this->btn_guardar->Location = System::Drawing::Point(1004, 482);
			this->btn_guardar->Margin = System::Windows::Forms::Padding(4);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(252, 48);
			this->btn_guardar->TabIndex = 10;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Form1::btn_guardar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(972, 273);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(172, 23);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Educacion Fisica";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(972, 210);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 23);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Matematica";
			// 
			// txt_efisica
			// 
			this->txt_efisica->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_efisica->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_efisica->ForeColor = System::Drawing::Color::White;
			this->txt_efisica->Location = System::Drawing::Point(977, 300);
			this->txt_efisica->Margin = System::Windows::Forms::Padding(4);
			this->txt_efisica->Name = L"txt_efisica";
			this->txt_efisica->Size = System::Drawing::Size(311, 32);
			this->txt_efisica->TabIndex = 7;
			// 
			// txt_mate
			// 
			this->txt_mate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_mate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_mate->ForeColor = System::Drawing::Color::White;
			this->txt_mate->Location = System::Drawing::Point(976, 237);
			this->txt_mate->Margin = System::Windows::Forms::Padding(4);
			this->txt_mate->Name = L"txt_mate";
			this->txt_mate->Size = System::Drawing::Size(311, 32);
			this->txt_mate->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(972, 147);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Genero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(972, 84);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Edad";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(973, 21);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(90, 23);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Nombre";
			// 
			// txt_genero
			// 
			this->txt_genero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_genero->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_genero->ForeColor = System::Drawing::Color::White;
			this->txt_genero->Location = System::Drawing::Point(977, 174);
			this->txt_genero->Margin = System::Windows::Forms::Padding(4);
			this->txt_genero->Name = L"txt_genero";
			this->txt_genero->Size = System::Drawing::Size(311, 32);
			this->txt_genero->TabIndex = 2;
			// 
			// txt_edad
			// 
			this->txt_edad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_edad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_edad->ForeColor = System::Drawing::Color::White;
			this->txt_edad->Location = System::Drawing::Point(977, 111);
			this->txt_edad->Margin = System::Windows::Forms::Padding(4);
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(311, 32);
			this->txt_edad->TabIndex = 1;
			// 
			// txt_nombre
			// 
			this->txt_nombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_nombre->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_nombre->ForeColor = System::Drawing::Color::White;
			this->txt_nombre->Location = System::Drawing::Point(976, 48);
			this->txt_nombre->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(311, 32);
			this->txt_nombre->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage5->Controls->Add(this->txt_fisicaf_mod);
			this->tabPage5->Controls->Add(this->txt_sociales_mod);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label15);
			this->tabPage5->Controls->Add(this->textBox1);
			this->tabPage5->Controls->Add(this->btn_mod);
			this->tabPage5->Controls->Add(this->label16);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Controls->Add(this->label);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->txt_efisica_mod);
			this->tabPage5->Controls->Add(this->txt_mate_mod);
			this->tabPage5->Controls->Add(this->txt_genero_mod);
			this->tabPage5->Controls->Add(this->txt_edad_mod);
			this->tabPage5->Controls->Add(this->textBox6);
			this->tabPage5->Controls->Add(this->dataGridView1);
			this->tabPage5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage5->Location = System::Drawing::Point(4, 26);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4);
			this->tabPage5->Size = System::Drawing::Size(1348, 631);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Modificar";
			// 
			// txt_fisicaf_mod
			// 
			this->txt_fisicaf_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_fisicaf_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_fisicaf_mod->ForeColor = System::Drawing::Color::White;
			this->txt_fisicaf_mod->Location = System::Drawing::Point(977, 472);
			this->txt_fisicaf_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_fisicaf_mod->Name = L"txt_fisicaf_mod";
			this->txt_fisicaf_mod->Size = System::Drawing::Size(311, 32);
			this->txt_fisicaf_mod->TabIndex = 17;
			// 
			// txt_sociales_mod
			// 
			this->txt_sociales_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_sociales_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_sociales_mod->ForeColor = System::Drawing::Color::White;
			this->txt_sociales_mod->Location = System::Drawing::Point(977, 409);
			this->txt_sociales_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_sociales_mod->Name = L"txt_sociales_mod";
			this->txt_sociales_mod->Size = System::Drawing::Size(311, 32);
			this->txt_sociales_mod->TabIndex = 16;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(973, 382);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(177, 23);
			this->label25->TabIndex = 15;
			this->label25->Text = L"Ciencias Sociales";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(975, 445);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(199, 23);
			this->label19->TabIndex = 14;
			this->label19->Text = L"Fisica Fundamental";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(973, 4);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 23);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Id";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(977, 31);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 32);
			this->textBox1->TabIndex = 12;
			// 
			// btn_mod
			// 
			this->btn_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->btn_mod->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_mod->FlatAppearance->BorderSize = 0;
			this->btn_mod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mod->ForeColor = System::Drawing::Color::White;
			this->btn_mod->Location = System::Drawing::Point(1013, 548);
			this->btn_mod->Margin = System::Windows::Forms::Padding(4);
			this->btn_mod->Name = L"btn_mod";
			this->btn_mod->Size = System::Drawing::Size(252, 48);
			this->btn_mod->TabIndex = 11;
			this->btn_mod->Text = L"Modificar";
			this->btn_mod->UseVisualStyleBackColor = false;
			this->btn_mod->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(973, 319);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(186, 23);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Eduacacion Fisica";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(975, 256);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(139, 23);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Matematicas";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(973, 193);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(84, 23);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Genero";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->ForeColor = System::Drawing::Color::White;
			this->label->Location = System::Drawing::Point(973, 130);
			this->label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(63, 23);
			this->label->TabIndex = 7;
			this->label->Text = L"Edad";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(973, 67);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 23);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Nombre";
			// 
			// txt_efisica_mod
			// 
			this->txt_efisica_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_efisica_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_efisica_mod->ForeColor = System::Drawing::Color::White;
			this->txt_efisica_mod->Location = System::Drawing::Point(977, 346);
			this->txt_efisica_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_efisica_mod->Name = L"txt_efisica_mod";
			this->txt_efisica_mod->Size = System::Drawing::Size(311, 32);
			this->txt_efisica_mod->TabIndex = 5;
			// 
			// txt_mate_mod
			// 
			this->txt_mate_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_mate_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_mate_mod->ForeColor = System::Drawing::Color::White;
			this->txt_mate_mod->Location = System::Drawing::Point(977, 283);
			this->txt_mate_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_mate_mod->Name = L"txt_mate_mod";
			this->txt_mate_mod->Size = System::Drawing::Size(311, 32);
			this->txt_mate_mod->TabIndex = 4;
			// 
			// txt_genero_mod
			// 
			this->txt_genero_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_genero_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_genero_mod->ForeColor = System::Drawing::Color::White;
			this->txt_genero_mod->Location = System::Drawing::Point(977, 220);
			this->txt_genero_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_genero_mod->Name = L"txt_genero_mod";
			this->txt_genero_mod->Size = System::Drawing::Size(311, 32);
			this->txt_genero_mod->TabIndex = 3;
			// 
			// txt_edad_mod
			// 
			this->txt_edad_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_edad_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_edad_mod->ForeColor = System::Drawing::Color::SkyBlue;
			this->txt_edad_mod->Location = System::Drawing::Point(977, 157);
			this->txt_edad_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_edad_mod->Name = L"txt_edad_mod";
			this->txt_edad_mod->Size = System::Drawing::Size(311, 32);
			this->txt_edad_mod->TabIndex = 2;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(977, 94);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(311, 32);
			this->textBox6->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Location = System::Drawing::Point(41, 36);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(896, 537);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage6->Controls->Add(this->label21);
			this->tabPage6->Controls->Add(this->label22);
			this->tabPage6->Controls->Add(this->textBox7);
			this->tabPage6->Controls->Add(this->button2);
			this->tabPage6->Controls->Add(this->dataGridView2);
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage6->Location = System::Drawing::Point(4, 26);
			this->tabPage6->Margin = System::Windows::Forms::Padding(4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1348, 631);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"Borrar";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(968, 185);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(256, 23);
			this->label21->TabIndex = 5;
			this->label21->Text = L"Se eliminará el vehiculo: ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(968, 219);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(29, 23);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Id";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Enabled = false;
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(973, 249);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(57, 32);
			this->textBox7->TabIndex = 3;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1013, 318);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(252, 48);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->Location = System::Drawing::Point(41, 36);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(896, 537);
			this->dataGridView2->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->txt_id_mod);
			this->tabPage2->Controls->Add(this->btn_modificar);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->txt_placa_mod);
			this->tabPage2->Controls->Add(this->txt_anio_mod);
			this->tabPage2->Controls->Add(this->txt_serie_mod);
			this->tabPage2->Controls->Add(this->txt_marca_mod);
			this->tabPage2->Controls->Add(this->txt_nombre_mod);
			this->tabPage2->Controls->Add(this->data_grid2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1803, 792);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Modificar";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(973, 36);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 23);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Id";
			// 
			// txt_id_mod
			// 
			this->txt_id_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_id_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_id_mod->Enabled = false;
			this->txt_id_mod->ForeColor = System::Drawing::Color::White;
			this->txt_id_mod->Location = System::Drawing::Point(979, 64);
			this->txt_id_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_mod->Name = L"txt_id_mod";
			this->txt_id_mod->Size = System::Drawing::Size(311, 32);
			this->txt_id_mod->TabIndex = 12;
			// 
			// btn_modificar
			// 
			this->btn_modificar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->btn_modificar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_modificar->FlatAppearance->BorderSize = 0;
			this->btn_modificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modificar->ForeColor = System::Drawing::Color::White;
			this->btn_modificar->Location = System::Drawing::Point(999, 524);
			this->btn_modificar->Margin = System::Windows::Forms::Padding(4);
			this->btn_modificar->Name = L"btn_modificar";
			this->btn_modificar->Size = System::Drawing::Size(252, 48);
			this->btn_modificar->TabIndex = 11;
			this->btn_modificar->Text = L"Modificar";
			this->btn_modificar->UseVisualStyleBackColor = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(973, 421);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 23);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Placa";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(973, 343);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 23);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Año";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(973, 263);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 23);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Serie";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(973, 185);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Marca";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(973, 111);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nombre";
			// 
			// txt_placa_mod
			// 
			this->txt_placa_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_placa_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_placa_mod->ForeColor = System::Drawing::Color::White;
			this->txt_placa_mod->Location = System::Drawing::Point(979, 449);
			this->txt_placa_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_placa_mod->Name = L"txt_placa_mod";
			this->txt_placa_mod->Size = System::Drawing::Size(311, 32);
			this->txt_placa_mod->TabIndex = 5;
			// 
			// txt_anio_mod
			// 
			this->txt_anio_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_anio_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_anio_mod->ForeColor = System::Drawing::Color::White;
			this->txt_anio_mod->Location = System::Drawing::Point(979, 372);
			this->txt_anio_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_anio_mod->Name = L"txt_anio_mod";
			this->txt_anio_mod->Size = System::Drawing::Size(311, 32);
			this->txt_anio_mod->TabIndex = 4;
			// 
			// txt_serie_mod
			// 
			this->txt_serie_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_serie_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_serie_mod->ForeColor = System::Drawing::Color::White;
			this->txt_serie_mod->Location = System::Drawing::Point(979, 292);
			this->txt_serie_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_serie_mod->Name = L"txt_serie_mod";
			this->txt_serie_mod->Size = System::Drawing::Size(311, 32);
			this->txt_serie_mod->TabIndex = 3;
			// 
			// txt_marca_mod
			// 
			this->txt_marca_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_marca_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_marca_mod->ForeColor = System::Drawing::Color::White;
			this->txt_marca_mod->Location = System::Drawing::Point(979, 213);
			this->txt_marca_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_marca_mod->Name = L"txt_marca_mod";
			this->txt_marca_mod->Size = System::Drawing::Size(311, 32);
			this->txt_marca_mod->TabIndex = 2;
			// 
			// txt_nombre_mod
			// 
			this->txt_nombre_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_nombre_mod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_nombre_mod->ForeColor = System::Drawing::Color::White;
			this->txt_nombre_mod->Location = System::Drawing::Point(979, 139);
			this->txt_nombre_mod->Margin = System::Windows::Forms::Padding(4);
			this->txt_nombre_mod->Name = L"txt_nombre_mod";
			this->txt_nombre_mod->Size = System::Drawing::Size(311, 32);
			this->txt_nombre_mod->TabIndex = 1;
			// 
			// data_grid2
			// 
			this->data_grid2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->data_grid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->data_grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid2->DefaultCellStyle = dataGridViewCellStyle8;
			this->data_grid2->Location = System::Drawing::Point(41, 36);
			this->data_grid2->Margin = System::Windows::Forms::Padding(4);
			this->data_grid2->Name = L"data_grid2";
			this->data_grid2->ReadOnly = true;
			this->data_grid2->RowHeadersVisible = false;
			this->data_grid2->RowHeadersWidth = 51;
			this->data_grid2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid2->Size = System::Drawing::Size(896, 537);
			this->data_grid2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->tabPage3->Controls->Add(this->label_eliminar);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->txt_id_el);
			this->tabPage3->Controls->Add(this->btn_eliminar);
			this->tabPage3->Controls->Add(this->data_grid3);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage3->Location = System::Drawing::Point(4, 26);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1803, 792);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Borrar";
			// 
			// label_eliminar
			// 
			this->label_eliminar->AutoSize = true;
			this->label_eliminar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_eliminar->ForeColor = System::Drawing::Color::White;
			this->label_eliminar->Location = System::Drawing::Point(968, 185);
			this->label_eliminar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_eliminar->Name = L"label_eliminar";
			this->label_eliminar->Size = System::Drawing::Size(256, 23);
			this->label_eliminar->TabIndex = 5;
			this->label_eliminar->Text = L"Se eliminará el vehiculo: ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(968, 219);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 23);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Id";
			// 
			// txt_id_el
			// 
			this->txt_id_el->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->txt_id_el->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_id_el->Enabled = false;
			this->txt_id_el->ForeColor = System::Drawing::Color::White;
			this->txt_id_el->Location = System::Drawing::Point(973, 249);
			this->txt_id_el->Margin = System::Windows::Forms::Padding(4);
			this->txt_id_el->Name = L"txt_id_el";
			this->txt_id_el->Size = System::Drawing::Size(57, 32);
			this->txt_id_el->TabIndex = 3;
			this->txt_id_el->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->btn_eliminar->FlatAppearance->BorderSize = 0;
			this->btn_eliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar->ForeColor = System::Drawing::Color::White;
			this->btn_eliminar->Location = System::Drawing::Point(1013, 318);
			this->btn_eliminar->Margin = System::Windows::Forms::Padding(4);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(252, 48);
			this->btn_eliminar->TabIndex = 2;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			// 
			// data_grid3
			// 
			this->data_grid3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->data_grid3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->data_grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::MidnightBlue;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::DeepSkyBlue;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid3->DefaultCellStyle = dataGridViewCellStyle10;
			this->data_grid3->Location = System::Drawing::Point(41, 36);
			this->data_grid3->Margin = System::Windows::Forms::Padding(4);
			this->data_grid3->Name = L"data_grid3";
			this->data_grid3->ReadOnly = true;
			this->data_grid3->RowHeadersVisible = false;
			this->data_grid3->RowHeadersWidth = 51;
			this->data_grid3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid3->Size = System::Drawing::Size(896, 537);
			this->data_grid3->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1399, 771);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion(); //abrimos la conexión para llenar la tabla
	this->data->Insertar(this->txt_nombre->Text, this->txt_edad->Text, this->txt_genero->Text, this->txt_mate->Text, this->txt_efisica->Text, this->txt_sociales->Text, this->txt_fisicaf->Text); 
	this->data->CerrarConexion(); 
	this->consulta();
	this->txt_nombre->Clear(); //se limpian los textbox 
	this->txt_edad->Clear();
	this->txt_genero->Clear();
	this->txt_mate->Clear();
	this->txt_efisica->Clear();
	this->txt_sociales->Clear();
	this->txt_fisicaf->Clear();

}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	this->consulta();
}
public: void consulta();
{
	this->data->AbrirConexion(); 
	this->data_grid->DataSource = this->data->getData();
	this->data_grid2->DataSource = this->data->getData();
	this->data_grid3->DataSource = this->data->getData();
	this->data->CerrarConexion(); 
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_mod_Click(System::Object^ sender, System::EventArgs^ e) {
	data->AbrirConexion();
	data->Modificar(this->textBox6->Text, this->txt_edad_mod->Text, this->txt_genero_mod->Text, this->txt_mate_mod->Text, this->txt_efisica_mod->Text, this->textBox1->Text, this->txt_sociales_mod->Text, this->txt_fisicaf_mod->Text); 
	data->CerrarConexion();
	this->Consulta();
	this->textBox6_mod->Clear(); //se limpian los textbox 
	this->txt_edad_mod->Clear();
	this->txt_genero_mod->Clear();
	this->txt_mate_mod->Clear();
	this->txt_efisica_mod->Clear();
	this->txt_textBox1->Clear();
	this->txt_sociales_mod->Clear();
	this->txt_fisicaf_mod->Clear();
	MessageBox::Show("Modificación realizada correctamente!");
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = Convert::ToString(data_grid3->SelectedRows[0]->Cells[0]->Value); //seleccionamos los valores de la fila completa
	data->AbrirConexion();
	data->Eliminar(id);
	data->CerrarConexion();
	this->Consulta(); 
}
private: System::Void data_grid3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ nombre = Convert::ToString(data_grid3->SelectedRows[0]->Cells[1]->Value);
	String^ id = Convert::ToString(data_grid3->SelectedRows[0]->Cells[0]->Value);
	this->label_eliminar->Text = "Se eliminará el estudiante: " + nombre;
	this->txt_id_el->Text = id;
}
};
}
