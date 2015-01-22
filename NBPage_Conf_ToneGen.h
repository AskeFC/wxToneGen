/***************************************************************
 * Name:      NBPage_Conf_ToneGen.h
 * Purpose:   Header for Tone Generator Configuration Note Book Page
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef NBPage_Conf_ToneGen_H
#define NBPage_Conf_ToneGen_H

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
#define wxID_MNBPanel_Conf_ToneGen            1500
#define wxID_MNBPanel_Conf_ToneGen_HTMLWIN    1501
*/
#include "ID_Names.h"

class MNBPanel_Conf_ToneGen : public wxPanel
{
    private:
        wxBoxSizer*     MNBPSizer;
		wxHtmlWindow*   MNBPHtmlWin;

    protected:

    public:
        bool PageExists;
        MNBPanel_Conf_ToneGen( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name );
        ~MNBPanel_Conf_ToneGen();
};

#endif // NBPage_Conf_ToneGen_H
