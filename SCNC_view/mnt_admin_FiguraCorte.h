#pragma once
#include "edit_admin_FiguraCorte.h";
#include "new_admin_FiguraCorte.h";


namespace SCNCview {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SCNC_controller;
	using namespace SCNC_model;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for mnt_admin_FiguraCorte
	/// </summary>
	public ref class mnt_admin_FiguraCorte : public System::Windows::Forms::Form
	{
	public:
		mnt_admin_FiguraCorte(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		mnt_admin_FiguraCorte(int cod)
		{
			InitializeComponent();
			this->cod = cod;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mnt_admin_FiguraCorte()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: int cod;
	private: System::Windows::Forms::Button^ button5;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(37, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(527, 76);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de búsqueda:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(272, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Alvaro", L"Luis", L"Nilton" });
			this->comboBox1->Location = System::Drawing::Point(63, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(223, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Código:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Autor:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(423, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mnt_admin_FiguraCorte::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(39, 117);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(524, 209);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Diseño";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Autor";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Material";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha de Creación";
			this->Column5->Name = L"Column5";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 348);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mnt_admin_FiguraCorte::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(177, 348);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mnt_admin_FiguraCorte::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(460, 348);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Confirmar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mnt_admin_FiguraCorte::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(297, 348);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Eliminar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &mnt_admin_FiguraCorte::button5_Click);
			// 
			// mnt_admin_FiguraCorte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(597, 393);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"mnt_admin_FiguraCorte";
			this->Text = L"Seleccionar figura corte";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON CONFIRMAR
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		cod = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		this->Close();		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON BUSCAR
		String^ n_autor = this->comboBox1->Text;
		String^ n_codigo = this->textBox1->Text;

		figuracorteController^ fcController = gcnew figuracorteController();
		List<figuraCorte^>^ ListFiguraCorte = gcnew List<figuraCorte^>();
		List<figuraCorte^>^ ListFiguraCorte2 = gcnew List<figuraCorte^>();

		if ((n_autor == "") && (n_codigo == "")) {
			MessageBox::Show("Ingrese criterios de búsqueda");
		}
		else if ((n_autor != "") && (n_codigo == "")) {
			ListFiguraCorte = fcController->buscarfgxAutor(n_autor);
			mostrarGrilla(ListFiguraCorte);
		}
		else if ((n_autor == "") && (n_codigo != "")) {
			ListFiguraCorte = fcController->buscarfgxID(Convert::ToInt32(n_codigo));
			mostrarGrilla(ListFiguraCorte);
		}
		else if ((n_autor != "") && (n_codigo != "")) {
			ListFiguraCorte = fcController->buscarfgxAutorxID(n_autor, Convert::ToUInt32(n_codigo));
			//Falta arreglar que se junte la busqueda de autor e ID
		}
	}


	private: void mostrarGrilla(List<figuraCorte^>^ listaCortes) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaCortes->Count; i++) {
			figuraCorte^ objFC = listaCortes[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = Convert::ToString(objFC->getID());
			filaGrilla[1] = objFC->getDiseño();
			filaGrilla[2] = objFC->getAutor();
			filaGrilla[3] = objFC->getMaterial();
			filaGrilla[4] = objFC->getFechaCreacion();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}




	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //boton editar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
		int fcIdEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		figuracorteController^ fcController = gcnew figuracorteController();
		figuraCorte^ fcEdit = fcController->buscarfgxID_unitario(fcIdEditar);
		edit_admin_FiguraCorte^ nw_edit_FC = gcnew edit_admin_FiguraCorte(fcEdit);
		nw_edit_FC->Show();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//BOTON NUEVO
	new_admin_FiguraCorte^ nw_NuevaFiguraCorte = gcnew new_admin_FiguraCorte();
	nw_NuevaFiguraCorte->Show();


}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON ELIMINAR
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int IdEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	figuracorteController^ fcController = gcnew figuracorteController();
	fcController->eliminarFC(IdEliminar);
	MessageBox::Show("Se ha eliminado correctamente la figura de corte");
	this->dataGridView1->Rows->Clear();
}
};
	}
