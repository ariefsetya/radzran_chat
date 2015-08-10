//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.SmXhdpiPh.fmx", _PLAT_ANDROID)

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
if(Edit1->Text ==""){
	ShowMessage("Silahkan isi Nama Pengguna");
	return;
}
if(Edit2->Text ==""){
	ShowMessage("Silahkan isi Kata Sandi");
	return;
}
bool ada2 = false;
for(int i=0;i<Edit2->Text.Length();i++){
	if(Edit2->Text.SubString(i,1)==" "){
		ada2 = true;
	}
}
if(ada2 == true){
	ShowMessage("Space not allowed");
	Edit2->SetFocus();
	return;
}
TStringStream * kirim = new TStringStream();
TStringList * lst = new TStringList();
lst->Add("nama="+Edit1->Text);
lst->Add("pass="+Edit2->Text);
TStringStream * terima = new TStringStream();
PMasuk->Post("URL/to/check.php",lst,terima);
String hasil = terima->DataString;
PMasuk->Disconnect();
if(hasil=="masuk"){
	Form2->Label1->Text = "Tulis sesuatu, "+Edit1->Text;
	Form2->Show();
}else if(hasil=="daftar"){
	ShowMessage("Nama Pengguna atau Kata Sandi kamu tidak sesuai");
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
if(Edit1->Text ==""){
	ShowMessage("Silahkan isi Nama Pengguna");
	return;
}
if(Edit2->Text ==""){
	ShowMessage("Silahkan isi Kata Sandi");
	return;
}
bool ada2 = false;
for(int i=0;i<Edit2->Text.Length();i++){
	if(Edit2->Text.SubString(i,1)==" "){
		ada2 = true;
	}
}
if(ada2 == true){
	ShowMessage("Space not allowed");
	Edit2->SetFocus();
	return;
}
TStringStream * kirim = new TStringStream();
TStringList * lst = new TStringList();
lst->Add("nama="+Edit1->Text);
TStringStream * terima = new TStringStream();
TStringStream * terima2 = new TStringStream();
PMasuk->Post("URL/to/check2.php",lst,terima);
String hasil = terima->DataString;
PMasuk->Disconnect();
lst->Add("pass="+Edit2->Text);
if(hasil=="daftar"){
	PMasuk->Post("URL/to/daftar.php",lst,terima2);
	Form2->Label1->Text = "Tulis sesuatu, "+Edit1->Text;
	Form2->Show();
	ShowMessage("Selamat datang, "+Edit1->Text);
}else if(hasil=="masuk"){
	ShowMessage("Nama Pengguna kamu sudah terdaftar, silahkan masuk untuk melanjutkan");
}
}
//---------------------------------------------------------------------------
//Created And Deployed by tutorial.ariefsetya.com
//
//
//Regards,
//Mine Repository
//Arief Setya



