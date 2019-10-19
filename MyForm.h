#pragma once
#include "Pila.h"
#include "Cola.h"
#include "cstdlib"
#include <exception>
using namespace std;
using namespace System;

//
void llenar();
void llenar()
{
	Pila NuevaPila1;
	Cola NuevaCola1;
	for (int i = 0; i <= 9; i++)
	{
		NuevaPila1.MeterNumero(i);
		NuevaCola1.MeterNumero(i);
	}
}
//

namespace Proyecto1Gasolinera {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnGenerar;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(41, 20);
			this->textBox1->TabIndex = 0;
			// 
			// btnGenerar
			// 
			this->btnGenerar->Location = System::Drawing::Point(151, 69);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(99, 21);
			this->btnGenerar->TabIndex = 1;
			this->btnGenerar->Text = L"Generar";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &MyForm::BtnGenerar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnGenerar);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void BtnGenerar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //Pila NuevaPila1;
		   //Pila AuxPila1;
		   //Pila AuxPila2;
		   //Cola NuevaCola1;
		   //Cola AuxCola1;
		   //Cola AuxCola2;
		   //bool encontrado = false;
		   llenar();

	};
}

