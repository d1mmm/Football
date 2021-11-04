#include "LoadingForm.h"
#include <windows.h>
#include "StartingForm.h"
namespace Football2 {
	System::Void LoadingForm::LoadingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Interval = 500;
		timer1->Enabled = true;
		timer1->Start();
		index = 0;
	}
}