/***************************************************************
 * Name:      CBwxHtml5Main.h
 * Purpose:   Header for Application Frame
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef CBWXHTML5MAIN_H
#define CBWXHTML5MAIN_H

#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <wx/utils.h>

#include "ID_Names.h"

#include "CBwxHtml5App.h"
#include "GUIFrame.h"

class CBwxHtml5Frame: public GUIFrame
{
    private:
		virtual void OnCloseFrame( wxCloseEvent& );
		virtual void OnMenuExitClick( wxCommandEvent& );
		virtual void OnMenuAboutClick( wxCommandEvent& );

    protected:
		AboutDialog* TestAppAboutDialog;
        wxString GreetUser;

    public:
        CBwxHtml5Frame(wxFrame *MainFrameBase);
        ~CBwxHtml5Frame();
};

#endif // CBWXHTML5MAIN_H
