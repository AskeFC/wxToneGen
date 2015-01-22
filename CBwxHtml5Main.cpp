/***************************************************************
 * Name:      CBwxHtml5Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif  // WX_PRECOMP

#ifdef __BORLANDC__
#pragma hdrstop
#endif // __BORLANDC__

#include "CBwxHtml5Main.h"

enum wxbuildinfoformat { short_f, long_f };
wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);
    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << wxT("-Windows");
#elif defined(__WXMAC__)
        wxbuild << wxT("-Mac");
#elif defined(__UNIX__)
        wxbuild << wxT("-Linux");
#endif  // m$/unix/mac

#if wxUSE_UNICODE
        wxbuild << wxT("-Unicode build");
#else
        wxbuild << wxT("-ANSI build");
#endif // wxUSE_UNICODE
    }
    return wxbuild;
}

CBwxHtml5Frame::CBwxHtml5Frame( wxFrame *MainFrameBase ) : GUIFrame( MainFrameBase )
{
    // use wxTaskBarIcon on mac & msw
#if wxUSE_STATUSBAR
    GreetUser << wxT("Hello ");
    GreetUser << wxGetUserName();
    GreetUser << wxT("!  =o)");
    MainStatusBar->SetStatusText( GreetUser, 0);
    MainStatusBar->SetStatusText( wxbuildinfo( long_f ), 1 );
#endif
}

CBwxHtml5Frame::~CBwxHtml5Frame()
{
}

void CBwxHtml5Frame::OnCloseFrame( wxCloseEvent& )
{
    //  maybe check for unloading (use event)
    Destroy();
}

void CBwxHtml5Frame::OnMenuExitClick( wxCommandEvent& )
{
    // confirmation (use event)
    Destroy();
}

void CBwxHtml5Frame::OnMenuAboutClick( wxCommandEvent& )
{
    // use event
    TestAppAboutDialog = new AboutDialog( this, wxID_ABOUTDIALOG, wxT("About..."), wxDefaultPosition, wxSize( 435,250 ), wxDEFAULT_DIALOG_STYLE|wxNO_BORDER );
    TestAppAboutDialog->ShowModal();
    TestAppAboutDialog->Destroy();
}
