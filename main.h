///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __main__
#define __main__

//#include <wx/intl.h>
//#include <wx/string.h>
//#include <wx/bitmap.h>
//#include <wx/image.h>
//#include <wx/icon.h>
//#include <wx/menu.h>
//#include <wx/gdicmn.h>
//#include <wx/font.h>
//#include <wx/colour.h>
//#include <wx/settings.h>
#include <wx/treectrl.h>
//#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/html/htmlwin.h>
#include <wx/notebook.h>
//#include <wx/statusbr.h>
//#include <wx/frame.h>
//#include <wx/stattext.h>
//#include <wx/statline.h>
//#include <wx/button.h>
//#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

//#define wxID_MAINFRAMEBASE 1000
//#define wxID_MAINMENUBAR 1001
//#define wxID_MAINMENUEXIT 1002
//#define wxID_MAINMENUABOUT 1003
#define wxID_MAINTREECTRL 1004
#define wxID_MAINNOTEBOOK 1005
#define wxID_MNBPANEL1 1006
#define wxID_MNBPANEL2 1007
#define wxID_MNBP2HTMLWIN 1008
//#define wxID_MAINSTATUSBAR 1009
//#define wxID_ABOUTDIALOG 1010
//#define wxID_ADSTATICTEXT 1011
//#define wxID_ADSTATICLINE 1012
//#define wxID_ADBUTTONCB 1013
//#define wxID_ADBUTTONFB 1014
//#define wxID_ADBUTTONWX 1015
//#define wxID_ADBUTTONGCC 1016
//#define wxID_ADBUTTONMGW 1017

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame
{
	private:

	protected:
//		wxMenuBar* MainMenuBar;
//		wxMenu* MainMenuFile;
//		wxMenu* MainMenuHelp;
		wxTreeCtrl* MainTreeCtrl;
		wxNotebook* MainNotebook;
		wxPanel* MNBPanel1;
		wxPanel* MNBPanel2;
		wxHtmlWindow* MNBP2HtmlWin;
//		wxStatusBar* MainStatusBar;

		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseFrame( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnExitClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAboutClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrameBase( wxWindow* parent, wxWindowID id = wxID_MAINFRAMEBASE, const wxString& title = _("wxTestHtml5App"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 669,494 ), long style = wxCLOSE_BOX|wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~MainFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialog
///////////////////////////////////////////////////////////////////////////////
class AboutDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* ADStaticText;
		wxStaticLine* AboutDialogStaticline;
		wxButton* ADButtonCB;
		wxButton* ADButtonFB;
		wxButton* ADButtonWX;
		wxButton* ADButtonGCC;
		wxButton* ADButtonMGW;

	public:

		AboutDialog( wxWindow* parent, wxWindowID id = wxID_ABOUTDIALOG, const wxString& title = _("About..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 435,250 ), long style = wxDEFAULT_DIALOG_STYLE|wxNO_BORDER );
		~AboutDialog();

};

#endif //__main__
