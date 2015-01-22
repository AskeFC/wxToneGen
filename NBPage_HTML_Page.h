/***************************************************************
 * Name:      NBPage_HTML_Page.h
 * Purpose:   Header for Graphical User Interface Frame Note Book HTML Page
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef NBPage_HTML_Page_H
#define NBPage_HTML_Page_H

#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/event.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/bitmap.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/html/htmlwin.h>
/*
#define wxID_MNBPanel_HTML_Page             1600
#define wxID_MNBPanel_HTML_Page_HTMLWIN     1601
*/
#include "ID_Names.h"

class MNBPanel_HTML_Page : public wxPanel
{
    private:
        wxBoxSizer*     MNBPSizer;
		wxHtmlWindow*   MNBPHtmlWin;

    protected:

    public:
        bool PageExists;
        MNBPanel_HTML_Page( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name );
        ~MNBPanel_HTML_Page();
};

#endif // NBPage_HTML_Page_H
