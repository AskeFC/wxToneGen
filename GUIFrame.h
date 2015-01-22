/***************************************************************
 * Name:      GUIFrame.h
 * Purpose:   Header for Graphical User Interface Frame
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef GUIFRAME_H
#define GUIFRAME_H

#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/event.h>
#include <wx/menu.h>
#include <wx/sizer.h>
#include <wx/treectrl.h>
#include <wx/aui/auibook.h>
#include <wx/statusbr.h>

#include "ID_Names.h"
#include "MenuBar.h"
#include "TreeControl.h"
#include "NoteBook.h"

//#define wxID_MAINFRAMEBASE 1000
//#define wxID_MAINSTATUSBAR 1001

class GUIFrame : public wxFrame
{
    friend class TreeControl;
    friend class NoteBook;

    private:
        DECLARE_EVENT_TABLE()
        virtual void OnCloseFrame       ( wxCloseEvent& event )     { event.Skip(); }
        virtual void OnMenuExitClick    ( wxCommandEvent& event )   { event.Skip(); }
        virtual void OnMenuAboutClick   ( wxCommandEvent& event )   { event.Skip(); }

        void OnTreeItemRightClick   ( wxTreeEvent& event );
        void OnTreeItemSelect       ( wxTreeEvent& event );

    protected:
        MenuBar*     MainMenuBar;
        wxBoxSizer*  MainSizer;
		TreeControl* MainTreeCtrl;
		NoteBook*    MainNotebook;
        wxStatusBar* MainStatusBar;

    public:
        GUIFrame( wxWindow* parent, wxWindowID id = wxID_MAINFRAMEBASE, wxString title = wxT("Multi Tool -TEST"), wxPoint pos = wxDefaultPosition, wxSize size = wxDefaultSize, int style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
        ~GUIFrame();
};

#endif // GUIFRAME_H
