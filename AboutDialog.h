/***************************************************************
 * Name:      AboutDialog.h
 * Purpose:   Header for About Dialog Box
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-14
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <wx/dialog.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/event.h>
#include <wx/string.h>
#include <wx/utils.h>

#include "ID_Names.h"
/*
#define wxID_ABOUTDIALOG 2001
#define wxID_ADSTATICBOX 2002
#define wxID_ADSTATICTEXT 2003
#define wxID_ADBUTTONCB 2004
#define wxID_ADBUTTONFB 2005
#define wxID_ADBUTTONWX 2006
#define wxID_ADBUTTONGCC 2007
#define wxID_ADBUTTONMGW 2008
#define wxID_ADBUTTONSTK 2009
*/
class AboutDialog : public wxDialog
{
	private:
        wxFlexGridSizer* AboutDialogSizer;
        wxStaticBox* ADStaticBox;
		wxStaticText* ADStaticText;
        wxGridSizer* ADSubSizer;
		wxButton* ADButtonCB;
		wxButton* ADButtonFB;
		wxButton* ADButtonWX;
		wxButton* ADButtonGCC;
		wxButton* ADButtonMGW;
		wxButton* ADButtonSTK;

        void OnButCBAct( wxCommandEvent& );
        void OnButFBAct( wxCommandEvent& );
        void OnButWXAct( wxCommandEvent& );
        void OnButGCCAct( wxCommandEvent& );
        void OnButMGWAct( wxCommandEvent& );
        void OnButSTKAct( wxCommandEvent& );

	public:
		AboutDialog( wxWindow* parent, wxWindowID id, wxString title, wxPoint pos, wxSize size, int style );
        ~AboutDialog();
};

#endif // ABOUTDIALOG_H
