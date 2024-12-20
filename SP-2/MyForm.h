#pragma once

#include "Helper.h"
#include <msclr/marshal_cppstd.h>
#include <fstream>

using namespace msclr::interop;

namespace SP2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label8;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vardas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(165, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Pavardė";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(321, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Balai";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(575, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Egzaminas";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 25);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(324, 25);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(248, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(578, 25);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 20);
			this->textBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(578, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 25);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Įrašyti įvestį";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(324, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(248, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Įvestį atskirkite tarpais: 8 9 10 7 6 9 ...";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				L"Tomas Tomaitis | Balai: 5 7 8 4 2 | Egzaminas: 8 | Vidurkis: 7",
					L"Ona Onutė | Balai: 6 10 5 7 4 | Egzaminas: 9 | Mediana: 6"
			});
			this->listBox1->Location = System::Drawing::Point(12, 106);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(560, 160);
			this->listBox1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Įvesti studentai:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(578, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 25);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Ištrinti pažymėtą";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(578, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 25);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Ištrinti visus";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(578, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 25);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Kopijuoti pažymėtą";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(636, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(636, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 269);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Išsaugoti studentai:";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(12, 285);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(560, 160);
			this->listBox2->TabIndex = 18;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(578, 241);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 25);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Kopijuoti visus";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(578, 327);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 25);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Įkelti failą";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(578, 358);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 25);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Išsaugoti failą";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(578, 389);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 25);
			this->button8->TabIndex = 22;
			this->button8->Text = L"Ištrinti pažymėtą";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(578, 420);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(120, 25);
			this->button9->TabIndex = 23;
			this->button9->Text = L"Ištrinti visus";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(12, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(306, 25);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Spauskite TAB, peršokimui į kitą langelį";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 462);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Vilniaus Verslo Kolegija";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Įrašyti įvestį - mygtukas
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Tikrinu ar ne tuščia ir galiausiai pridedu prie sąrašo
		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "") {
			System::String^ ivestis = textBox1->Text + " " + textBox2->Text + " | Balai: " + textBox3->Text + " | Egzaminas: " + textBox4->Text;

			// Tikrinu kas buvo pasirinkta
			if (radioButton1->Checked == true) {
				// Paimu kintamuosius
				System::String^ textBox3Input = textBox3->Text;
				System::String^ textBox4Input = textBox4->Text;

				// Konvertuoju juos į std::string, kad galėčiau išsiųsti į .cpp failą
				std::string textBox3InputSTDstring = marshal_as<std::string>(textBox3Input);
				std::string textBox4InputSTDstring = marshal_as<std::string>(textBox4Input);

				// Kviečiu funkciją iš helper.h
				double average = calculateAverage(textBox3InputSTDstring, textBox4InputSTDstring);

				// Gautą atsakymą vėl konvertuoju, šį kartą į System::String^
				System::String^ averageSYSTEMstring = System::Convert::ToString(average);

				// Pridedu prie išvedimo
				System::String^ vidurkis = " | Vidurkis: " + averageSYSTEMstring;
				ivestis += vidurkis;
			}
			else if (radioButton2->Checked == true) {
				System::String^ textBox3Input = textBox3->Text;
				System::String^ textBox4Input = textBox4->Text;

				std::string textBox3InputSTDstring = marshal_as<std::string>(textBox3Input);
				std::string textBox4InputSTDstring = marshal_as<std::string>(textBox4Input);

				double median = calculateMedian(textBox3InputSTDstring, textBox4InputSTDstring);

				System::String^ medianSYSTEMstring = System::Convert::ToString(median);

				System::String^ mediana = " | Mediana: " + medianSYSTEMstring;
				ivestis += mediana;
			}
			// Pridedu prie listBox1
			listBox1->Items->Add(ivestis);
		}
		else {
			MessageBox::Show("Užplidykite visus langus...", "Klaida");
		}

		// Išvalymas
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
	}
		// Ištrinti viena iš pirmo listbox  - mygtukas
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex != -1) {
		listBox1->Items->RemoveAt(listBox1->SelectedIndex);
	}
}
	   // Ištrinti visus iš pirmo listbox  - mygtukas
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
}
	   // Kopijuoti pažymėtą iš pirmo listbox - mygtukas
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex != -1) {
		listBox2->Items->Add(listBox1->SelectedItem);
	}
}
	   // Kopijuoti visus iš pirmo listbox - mygtukas
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Items->Count != 0) {
		for each (System::Object ^ item in listBox1->Items) {
			listBox2->Items->Add(item);
		}
	}
}
	   // Įkelti failą iš antro listbox - mygtukas
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ atidarymoObjektas = gcnew OpenFileDialog();

	atidarymoObjektas->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
	atidarymoObjektas->Title = "Įkelti studentų turimą studentų sąrašą";
	atidarymoObjektas->DefaultExt = "txt";

	MessageBox::Show("Tekstiniame faile studentai turi būti atskirose eilutėse.", "Perspėjimas");

	if (atidarymoObjektas->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			System::String^ failoVieta = atidarymoObjektas->FileName;

			listBox2->Items->Clear();

			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(failoVieta);
			while (!reader->EndOfStream) {
				System::String^ line = reader->ReadLine();
				listBox2->Items->Add(line);
			}
			reader->Close();
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Įvyko klaida atidarant arba nuskaitant failą: " + ex->Message, "Klaida");
		}
	}
}
	   // Išsaugoti failą iš antro listbox - mygtukas
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saugojimoObjektas = gcnew SaveFileDialog();

	saugojimoObjektas->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
	saugojimoObjektas->Title = "Studentų sąrašo išsaugojimas";
	saugojimoObjektas->DefaultExt = "txt";

	if (saugojimoObjektas->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			System::String^ issaugojimoVieta = saugojimoObjektas->FileName;
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(issaugojimoVieta);

			for each (System::Object ^ item in listBox2->Items) {
				writer->WriteLine(item->ToString());
			}
			writer->Close();
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Įvyko klaida išsaugant arba nuskaitant failą: " + ex->Message, "Klaida");
		}
	}
}
	   // Ištrinti pažymėtą iš antro listbox - mygtukas
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox2->SelectedIndex != -1) {
		listBox2->Items->RemoveAt(listBox2->SelectedIndex);
	}
}
	   // Ištrinti visus iš antro listbox - mygtukas
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();
};
};
}