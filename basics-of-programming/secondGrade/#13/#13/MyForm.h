/*
 Сенс програми:
 
 # Калькулятор —  обчислювальний пристрій для виконання операцій над числами або формулами алгебри.

 # Використання: Введіть бажані числа за допомогою кнопок та ужийте доступні операції для обчислення.
*/

#pragma once
#include <Windows.h>
namespace pr13 {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Сводка для MyForm
/// </summary>
public ref class MyForm : public System::Windows::Forms::Form
{
public:
    MyForm(void)
    {
        InitializeComponent();
        //
        //TODO: добавьте код конструктора
        //
    }
    
protected:
    /// <summary>
    /// Освободить все используемые ресурсы.
    /// </summary>
    ~MyForm()
    {
        if (components)
        {
            delete components;
        }
    }
private: System::Windows::Forms::TextBox^  textBox1;
protected:
private: System::Windows::Forms::Button^  MC;
private: System::Windows::Forms::Button^  MR;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button10;

private: System::Windows::Forms::Button^  Sum;
private: System::Windows::Forms::Button^  Sub;
private: System::Windows::Forms::Button^  Mul;
private: System::Windows::Forms::Button^  Div;
private: System::Windows::Forms::Button^  Negative;
private: System::Windows::Forms::Button^  Decimal;
    
private: System::Windows::Forms::Button^  Equals;
private: System::Windows::Forms::Button^  Clear;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::TextBox^  textBox2;
    
private:
    /// <summary>
    /// Обязательная переменная конструктора.
    /// </summary>
    System::ComponentModel::Container ^components;
    
#pragma region Windows Form Designer generated code
    /// <summary>
    /// Требуемый метод для поддержки конструктора — не изменяйте
    /// содержимое этого метода с помощью редактора кода.
    /// </summary>
    void InitializeComponent(void)
    {
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->MC = (gcnew System::Windows::Forms::Button());
        this->MR = (gcnew System::Windows::Forms::Button());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->button5 = (gcnew System::Windows::Forms::Button());
        this->button6 = (gcnew System::Windows::Forms::Button());
        this->button7 = (gcnew System::Windows::Forms::Button());
        this->button8 = (gcnew System::Windows::Forms::Button());
        this->button9 = (gcnew System::Windows::Forms::Button());
        this->button10 = (gcnew System::Windows::Forms::Button());
        this->Sum = (gcnew System::Windows::Forms::Button());
        this->Sub = (gcnew System::Windows::Forms::Button());
        this->Mul = (gcnew System::Windows::Forms::Button());
        this->Div = (gcnew System::Windows::Forms::Button());
        this->Negative = (gcnew System::Windows::Forms::Button());
        this->Decimal = (gcnew System::Windows::Forms::Button());
        this->Equals = (gcnew System::Windows::Forms::Button());
        this->Clear = (gcnew System::Windows::Forms::Button());
        this->button11 = (gcnew System::Windows::Forms::Button());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->SuspendLayout();
        this->SuspendLayout();
        //
        // textBox1
        //
        this->textBox1->Enabled = false;
        this->textBox1->Location = System::Drawing::Point(2, -2);
        this->textBox1->Multiline = true;
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(397, 50);
        this->textBox1->TabIndex = 0;
        this->textBox1->Text = L"0";
        this->textBox1->Visible = false;
        //
        // textBox2
        //
        this->textBox2->Enabled = false;
        this->textBox2->Location = System::Drawing::Point(2, -3);
        this->textBox2->MaxLength = 123456789;
        this->textBox2->Multiline = true;
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(397, 50);
        this->textBox2->TabIndex = 26;
        this->textBox2->Text = L"0";
        //
        // MC
        //
        this->MC->Location = System::Drawing::Point(405, -2);
        this->MC->Name = L"MC";
        this->MC->Size = System::Drawing::Size(95, 50);
        this->MC->TabIndex = 1;
        this->MC->Text = L"MC";
        this->MC->UseVisualStyleBackColor = true;
        this->MC->Click += gcnew System::EventHandler(this, &MyForm::MC_Click);
        //
        // MR
        //
        this->MR->Location = System::Drawing::Point(506, -2);
        this->MR->Name = L"MR";
        this->MR->Size = System::Drawing::Size(95, 50);
        this->MR->TabIndex = 2;
        this->MR->Text = L"MR";
        this->MR->UseVisualStyleBackColor = true;
        this->MR->Click += gcnew System::EventHandler(this, &MyForm::MR_Click);
        //
        // button1
        //
        this->button1->Location = System::Drawing::Point(2, 53);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(95, 50);
        this->button1->TabIndex = 3;
        this->button1->Text = L"1";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button2
        //
        this->button2->Location = System::Drawing::Point(103, 54);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(95, 50);
        this->button2->TabIndex = 4;
        this->button2->Text = L"2";
        this->button2->UseVisualStyleBackColor = true;
        this->button2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button3
        //
        this->button3->Location = System::Drawing::Point(203, 54);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(95, 50);
        this->button3->TabIndex = 5;
        this->button3->Text = L"3";
        this->button3->UseVisualStyleBackColor = true;
        this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button4
        //
        this->button4->Location = System::Drawing::Point(304, 55);
        this->button4->Name = L"button4";
        this->button4->Size = System::Drawing::Size(95, 50);
        this->button4->TabIndex = 6;
        this->button4->Text = L"4";
        this->button4->UseVisualStyleBackColor = true;
        this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button5
        //
        this->button5->Location = System::Drawing::Point(2, 109);
        this->button5->Name = L"button5";
        this->button5->Size = System::Drawing::Size(95, 50);
        this->button5->TabIndex = 7;
        this->button5->Text = L"5";
        this->button5->UseVisualStyleBackColor = true;
        this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button6
        //
        this->button6->Location = System::Drawing::Point(102, 109);
        this->button6->Name = L"button6";
        this->button6->Size = System::Drawing::Size(95, 50);
        this->button6->TabIndex = 8;
        this->button6->Text = L"6";
        this->button6->UseVisualStyleBackColor = true;
        this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button7
        //
        this->button7->Location = System::Drawing::Point(203, 109);
        this->button7->Name = L"button7";
        this->button7->Size = System::Drawing::Size(95, 50);
        this->button7->TabIndex = 9;
        this->button7->Text = L"7";
        this->button7->UseVisualStyleBackColor = true;
        this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button8
        //
        this->button8->Location = System::Drawing::Point(304, 110);
        this->button8->Name = L"button8";
        this->button8->Size = System::Drawing::Size(95, 50);
        this->button8->TabIndex = 10;
        this->button8->Text = L"8";
        this->button8->UseVisualStyleBackColor = true;
        this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button9
        //
        this->button9->Location = System::Drawing::Point(2, 164);
        this->button9->Name = L"button9";
        this->button9->Size = System::Drawing::Size(95, 50);
        this->button9->TabIndex = 11;
        this->button9->Text = L"9";
        this->button9->UseVisualStyleBackColor = true;
        this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button10
        //
        this->button10->Location = System::Drawing::Point(102, 164);
        this->button10->Name = L"button10";
        this->button10->Size = System::Drawing::Size(95, 50);
        this->button10->TabIndex = 12;
        this->button10->Text = L"0";
        this->button10->UseVisualStyleBackColor = true;
        this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
        //
        // button11
        //
        this->button11->Location = System::Drawing::Point(204, 166);
        this->button11->Name = L"button11";
        this->button11->Size = System::Drawing::Size(95, 50);
        this->button11->TabIndex = 25;
        this->button11->Text = L"<=";
        this->button11->UseVisualStyleBackColor = true;
        this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
        //
        // Sum
        //
        this->Sum->Location = System::Drawing::Point(405, 55);
        this->Sum->Name = L"Sum";
        this->Sum->Size = System::Drawing::Size(94, 49);
        this->Sum->TabIndex = 17;
        this->Sum->Text = L"+";
        this->Sum->UseVisualStyleBackColor = true;
        this->Sum->Click += gcnew System::EventHandler(this, &MyForm::Operators);
        //
        // Sub
        //
        this->Sub->Location = System::Drawing::Point(505, 56);
        this->Sub->Name = L"Sub";
        this->Sub->Size = System::Drawing::Size(94, 49);
        this->Sub->TabIndex = 18;
        this->Sub->Text = L"-";
        this->Sub->UseVisualStyleBackColor = true;
        this->Sub->Click += gcnew System::EventHandler(this, &MyForm::Operators);
        //
        // Mul
        //
        this->Mul->Location = System::Drawing::Point(405, 111);
        this->Mul->Name = L"Mul";
        this->Mul->Size = System::Drawing::Size(94, 49);
        this->Mul->TabIndex = 19;
        this->Mul->Text = L"*";
        this->Mul->UseVisualStyleBackColor = true;
        this->Mul->Click += gcnew System::EventHandler(this, &MyForm::Operators);
        //
        // Div
        //
        this->Div->Location = System::Drawing::Point(505, 111);
        this->Div->Name = L"Div";
        this->Div->Size = System::Drawing::Size(94, 49);
        this->Div->TabIndex = 20;
        this->Div->Text = L"/";
        this->Div->UseVisualStyleBackColor = true;
        this->Div->Click += gcnew System::EventHandler(this, &MyForm::Operators);
        //
        // Negative
        //
        this->Negative->Location = System::Drawing::Point(406, 165);
        this->Negative->Name = L"Negative";
        this->Negative->Size = System::Drawing::Size(94, 49);
        this->Negative->TabIndex = 21;
        this->Negative->Text = L"±";
        this->Negative->UseVisualStyleBackColor = true;
        this->Negative->Click += gcnew System::EventHandler(this, &MyForm::Negative_Click);
        //
        // Decimal
        //
        this->Decimal->Location = System::Drawing::Point(507, 165);
        this->Decimal->Name = L"Decimal";
        this->Decimal->Size = System::Drawing::Size(94, 49);
        this->Decimal->TabIndex = 22;
        this->Decimal->Text = L".";
        this->Decimal->UseVisualStyleBackColor = true;
        this->Decimal->Click += gcnew System::EventHandler(this, &MyForm::Decimal_Click);
        //
        // Equals
        //
        this->Equals->Location = System::Drawing::Point(405, 220);
        this->Equals->Name = L"Equals";
        this->Equals->Size = System::Drawing::Size(196, 50);
        this->Equals->TabIndex = 23;
        this->Equals->Text = L"=";
        this->Equals->UseVisualStyleBackColor = true;
        this->Equals->Click += gcnew System::EventHandler(this, &MyForm::Equals_Click);
        //
        // Clear
        //
        this->Clear->Location = System::Drawing::Point(304, 166);
        this->Clear->Name = L"Clear";
        this->Clear->Size = System::Drawing::Size(95, 50);
        this->Clear->TabIndex = 24;
        this->Clear->Text = L"C";
        this->Clear->UseVisualStyleBackColor = true;
        this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
        //
        // MyForm
        //
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(626, 293);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->button11);
        this->Controls->Add(this->Clear);
        this->Controls->Add(this->Equals);
        this->Controls->Add(this->Decimal);
        this->Controls->Add(this->Negative);
        this->Controls->Add(this->Div);
        this->Controls->Add(this->Mul);
        this->Controls->Add(this->Sub);
        this->Controls->Add(this->Sum);
        this->Controls->Add(this->button10);
        this->Controls->Add(this->button9);
        this->Controls->Add(this->button8);
        this->Controls->Add(this->button7);
        this->Controls->Add(this->button6);
        this->Controls->Add(this->button5);
        this->Controls->Add(this->button4);
        this->Controls->Add(this->button3);
        this->Controls->Add(this->button2);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->MR);
        this->Controls->Add(this->MC);
        this->Controls->Add(this->textBox1);
        this->Name = L"MyForm";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"MyForm";
        this->ResumeLayout(false);
        this->PerformLayout();
    }
    
#pragma endregion
    double first, second, res , m;
    System::String^ Operator;
private: System::Void EnterNumber(System::Object^  sender, System::EventArgs^  e) {
    Button^ Number = safe_cast<Button^>(sender);
    if (textBox1->Text == "0") {
        textBox1->Text = Number->Text;
        textBox2->Text = Number->Text;
    }
    else {
        textBox1->Text += Number->Text;
        textBox2->Text += Number->Text;
    }
}
private: System::Void Operators(System::Object^  sender, System::EventArgs^  e) {
    Button^ numOperator = safe_cast<Button^>(sender);
    first = Double::Parse(textBox1->Text);
    textBox2->Text+=numOperator->Text;
    textBox1->Clear();
    Operator = numOperator->Text;
}
    
private: System::Void Decimal_Click(System::Object^  sender, System::EventArgs^  e) {
    if (!textBox1->Text->Contains(".")) {
        textBox1->Text += ",";
        textBox2->Text += ".";
    }
}
private: System::Void Equals_Click(System::Object^  sender, System::EventArgs^  e) {
    second = Double::Parse(textBox1->Text);
    if (Operator == "+") {
        res = first + second;
        textBox1->Text = Convert::ToString(res);
        if (res < 0) {
            textBox2->Text = Convert::ToString(res*(-1))+"N";
        }
        else {
            textBox2->Text = Convert::ToString(res);
        }
    }
    if (Operator == "-") {
        res = first - second;
        textBox1->Text = Convert::ToString(res);
        if (res < 0) {
            textBox2->Text = Convert::ToString(res*(-1)) + "N";
        }
        else {
            textBox2->Text = Convert::ToString(res);
        }
    }
    if (Operator == "*") {
        res = first * second;
        textBox1->Text = Convert::ToString(res);
        if (res < 0) {
            textBox2->Text = Convert::ToString(res*(-1)) + "N";
        }
        else {
            textBox2->Text = Convert::ToString(res);
        }
    }
    if (Operator == "/") {
        res = first / second;
        textBox1->Text = Convert::ToString(res);
        if (res < 0) {
            textBox2->Text = Convert::ToString(res*(-1)) + "N";
        }
        else {
            textBox2->Text = Convert::ToString(res);
        }
    }
}
private: System::Void Clear_Click(System::Object^  sender, System::EventArgs^  e) {
    textBox1->Text = "0";
    textBox2->Text="0";
}
private: System::Void Negative_Click(System::Object^  sender, System::EventArgs^  e) {
    if (textBox1->Text->Contains("-")) {
        textBox1->Text = textBox1->Text->Remove(0, 1);
        textBox2->Text = textBox2->Text->Remove(textBox2->Text->Length - 1, 1);
    }
    else {
        textBox1->Text = "-" + textBox1->Text;
        textBox2->Text += "N";
        
    }
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
    if (textBox1->Text->Length == 1) {
        textBox1->Text = "0";
        textBox2->Text = "0";
    }
    if (textBox1->Text->Length > 1) {
        textBox1->Text=textBox1->Text->Remove(textBox1->Text->Length - 1,1);
        textBox2->Text=textBox2->Text->Remove(textBox2->Text->Length - 1,1);
    }
}
private: System::Void MR_Click(System::Object^  sender, System::EventArgs^  e) {
    if (m != NULL) {
        textBox1->Text += m;
        textBox2->Text += m;
        m = NULL;
    }
    else {
        m = Double::Parse(textBox1->Text);
        textBox1->Text = "0";
        textBox2->Text = "0";
    }
}
private: System::Void MC_Click(System::Object^  sender, System::EventArgs^  e) {
    m = NULL;
}
};
}
