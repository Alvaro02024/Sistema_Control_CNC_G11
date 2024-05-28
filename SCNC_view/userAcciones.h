#pragma once
#include "mnt_user_FiguraCorte.h"
#include "ss_user_FiguraCorte.h"

namespace SCNCview {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for userAcciones
	/// </summary>
	public ref class userAcciones : public System::Windows::Forms::Form
	{
	public:
		userAcciones(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		userAcciones(int FC_ID)
		{
			InitializeComponent();
			this->FC_ID = FC_ID;
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~userAcciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: int FC_ID;
	private: int num_FG;
	private: System::Windows::Forms::Button^ button4;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(40, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(328, 89);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Bienvenido:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(40, 139);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(328, 248);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Seleccione una acción:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(76, 140);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 37);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Imprimir figura de corte";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &userAcciones::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(73, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 37);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Cerrar sesión";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &userAcciones::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(73, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 37);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Figuras de corte disponibles";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &userAcciones::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(73, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Mi historial";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// userAcciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 412);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"userAcciones";
			this->Text = L"Usuario";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		mnt_user_FiguraCorte^ nw_MantFC = gcnew mnt_user_FiguraCorte();
		nw_MantFC->ShowDialog();

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ss_user_FiguraCorte^ nw_SSFC = gcnew ss_user_FiguraCorte(FC_ID);
		nw_SSFC->ShowDialog();
	}
};
}
