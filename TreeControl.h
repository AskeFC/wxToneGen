/***************************************************************
 * Name:      TreeControl.h
 * Purpose:   Header for Graphical User Interface Frame Tree Control
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef TREECONTROL_H
#define TREECONTROL_H

#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/treectrl.h>
#include <wx/event.h>
#include <wx/sizer.h>
#include <wx/validate.h>

#include "ID_Names.h"

//#define wxID_MAINTREECTRL 1200

class TreeControl : public wxTreeCtrl
{
    friend class GUIFrame;
    private:

    protected:
		wxTreeItemId TCID_Welcome;
		wxTreeItemId TCID_Config;
		wxTreeItemId TCID_Config_Sound_ToneGen;
		wxTreeItemId TCID_Html;
		wxTreeItemId TCID_Html_Page;
		wxTreeItemId TCID_Html_Game;
		wxTreeItemId TCID_Sound;
		wxTreeItemId TCID_Sound_ToneGen;
		wxTreeItemId TCID_Sound_Wave;

    public:
        TreeControl (wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, const wxValidator& validator, wxString name );
        ~TreeControl();
};

#endif // TREECONTROL_H
