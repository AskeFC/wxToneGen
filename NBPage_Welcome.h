/***************************************************************
 * Name:      NBPage_Welcome.h
 * Purpose:   Header for Graphical User Interface Frame Note Book Page Welcome
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef NBPage_Welcome_H
#define NBPage_Welcome_H

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
#define wxID_MNBPanel_Welcome           1400
#define wxID_MNBPanel_Welcome_HTMLWIN   1401
*/
#include "ID_Names.h"

class MNBPanel_Welcome : public wxPanel
{
    private:
        wxBoxSizer*     MNBPSizer;
		wxHtmlWindow*   MNBPHtmlWin;

    protected:

    public:
        bool PageExists;
        MNBPanel_Welcome( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name );
        ~MNBPanel_Welcome();
};

#endif // NBPage_Welcome_H
