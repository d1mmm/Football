#include "ResultForm.h"
#include "StartingForm.h"
namespace Football2 {
	System::Void ResultForm::timer2_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		label3->Text = t2++ + " %";
		pictureBox2->Height = 271 - t2 / 2;
		if (sis == "13 %" && t2 == 14) {
			timer2->Stop();			
		}
		pictureBox2->Height = 271 - t2;
		if (sis == "29 %" && t2 == 30) {
			timer2->Stop();
		}
		pictureBox2->Height = 271 - t2 * 2;
		if (sis == "43 %" && t2 == 44) {
			timer2->Stop();
		}
		pictureBox2->Height = 271 - t2 * 2.1;
		if (sis == "68 %" && t2 == 69) {
			timer2->Stop();
		}
		pictureBox2->Height = 271 - t2 * 2.2;
		if (sis == "75 %" && t2 == 76) {
			timer2->Stop();
		}
		pictureBox2->Height = 271 - t2 * 2.3;
		if (sis == "86 %" && t2 == 87) {
			timer2->Stop();
		}
		pictureBox2->Height = 271 - t2 * 2.4;
		if (sis == "93 %" && t2 == 94) {
			timer2->Stop();
		}
		pictureBox2->Height = 271 - t2 * 2.5;
		if (sis == "96 %" && t2 == 97) {
			timer2->Stop();
		}
		pictureBox2->Height = 271 - t2 * 2.6;
		if (sis == "98 %" && t2 == 99) {
			timer2->Stop();			
		}
	}
	System::Void ResultForm::ResultForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		StartingForm^ start = gcnew StartingForm();
		if (e->KeyCode == Keys::Escape) {
			start->MdiParent = this->MdiParent;
			start->Show();
			this->Close();
		}
	}
}