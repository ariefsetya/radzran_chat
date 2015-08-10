//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.SmXhdpiPh.fmx", _PLAT_ANDROID)

TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
TStringStream * kirim = new TStringStream();
TStringStream * terima = new TStringStream();
Form1->PChat->Post("URL/to/isi.php",kirim,terima);
Memo1->Text = "";
Memo1->Lines->Add(terima->DataString);
Form1->PChat->Disconnect();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
if(Edit1->Text == ""){
	ShowMessage("Silahkan isi pesan kamu");
	return;
}
TStringList * lst = new TStringList();
lst->Add("nama="+Form1->Edit1->Text);
lst->Add("isi="+Edit1->Text);
TStringStream * kirim = new TStringStream();
TStringStream * terima = new TStringStream();

Form1->PMasuk->Post("URL/to/post.php",lst,terima);
Edit1->Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button2Click(TObject *Sender)
{
Memo1->Text = "";
Form1->Edit1->Text = "";
Form1->Edit2->Text = "";
Edit1->Text = "";
Form2->Close();
}
//---------------------------------------------------------------------------

