/***************************************************************
 * Name:      NBPage_Sound_Wave.h
 * Purpose:   Header for Graphical User Interface Frame Note Book Square Wave Page
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef NBPage_Sound_Wave_H
#define NBPage_Sound_Wave_H

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
#define wxID_MNBPanel_Sound_Wave         1800
#define wxID_MNBPanel_Sound_Wave_HTMLWIN 1801
*/
#include "ID_Names.h"

class MNBPanel_Sound_Wave : public wxPanel
{
    private:
        wxBoxSizer*     MNBPSizer;
		wxHtmlWindow*   MNBPHtmlWin;

    protected:

    public:
        bool PageExists;
        MNBPanel_Sound_Wave( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name );
        ~MNBPanel_Sound_Wave();
};

#endif // NBPage_Sound_Wave_H
