#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("C++ GUI: More Upgrades Possible"); // \t \n doesn't work here
	mainFrame->SetClientSize(800, 600); //set to whatever you like... going to see it I can automatically have it maximized
	mainFrame->Center();
	mainFrame->Show();
	return true;
}
