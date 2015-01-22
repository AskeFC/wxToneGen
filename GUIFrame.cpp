/***************************************************************
 * Name:      GUIFrame.cpp
 * Purpose:   Code for Graphical User Interface Frame
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
#endif //__BORLANDC__

#include "GUIFrame.h"

BEGIN_EVENT_TABLE( GUIFrame, wxFrame )
    EVT_CLOSE( GUIFrame::OnCloseFrame )
    EVT_MENU( wxID_MAINMENUEXIT, GUIFrame::OnMenuExitClick )
    EVT_MENU( wxID_MAINMENUABOUT, GUIFrame::OnMenuAboutClick )
    EVT_TREE_ITEM_RIGHT_CLICK( wxID_MAINTREECTRL, GUIFrame::OnTreeItemRightClick ) // mostly for windows & linux
    EVT_TREE_SEL_CHANGED( wxID_MAINTREECTRL, GUIFrame::OnTreeItemSelect )
END_EVENT_TABLE()

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, wxString title, wxPoint pos, wxSize size, int style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetMinSize( wxSize( 950, 501 ) );

    MainMenuBar = new MenuBar( 0 );
    this->SetMenuBar( MainMenuBar );

	MainSizer = new wxBoxSizer( wxHORIZONTAL );

	MainTreeCtrl = new TreeControl ( this, wxID_MAINTREECTRL, wxDefaultPosition, wxDefaultSize, wxTR_HAS_BUTTONS|wxTR_HIDE_ROOT|wxTR_SINGLE|wxTR_LINES_AT_ROOT, wxDefaultValidator, wxT("MainTreeCtrl") );
	MainSizer->Add( MainTreeCtrl, 0, wxALL, 5 );

	MainNotebook = new NoteBook( this, wxID_MAINNOTEBOOK, wxDefaultPosition, wxDefaultSize, wxAUI_NB_DEFAULT_STYLE|wxAUI_NB_CLOSE_ON_ALL_TABS );
	MainSizer->Add( MainNotebook, 1, wxEXPAND | wxALL, 5 );

	this->SetSizer( MainSizer );
	this->Layout();
	this->Centre( wxBOTH );

	MainStatusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_MAINSTATUSBAR );
}

GUIFrame::~GUIFrame()
{
}

void GUIFrame::OnTreeItemRightClick( wxTreeEvent &event ) // mostly for windows & linux
{ // optimize, maybe use for loop or switch through array
    wxTreeItemId SelItem = event.GetItem();
    if( (wxTreeItemId(MainTreeCtrl->TCID_Welcome)) == SelItem ) { }
    else if( (wxTreeItemId(MainTreeCtrl->TCID_Config)) == SelItem ) { }
    else if( (wxTreeItemId(MainTreeCtrl->TCID_Config_Sound_ToneGen)) == SelItem ) { }
    else if( (wxTreeItemId(MainTreeCtrl->TCID_Html)) == SelItem ) { } // (explain branch in tooltip)
    else if( (wxTreeItemId(MainTreeCtrl->TCID_Html_Page)) == SelItem ) { wxMessageBox( wxT("Context Menu \n Or Nothing \n Or What \t ?"), wxT("Tree Item Right Clicked"), wxOK|wxICON_INFORMATION, this ); }
    else if( (wxTreeItemId(MainTreeCtrl->TCID_Html_Game)) == SelItem ) { wxMessageBox( wxT("Context Menu \n Or Nothing \n Or What \t ?"), wxT("Tree Item Right Clicked"), wxOK|wxICON_INFORMATION, this ); }
    else if( (wxTreeItemId(MainTreeCtrl->TCID_Sound)) == SelItem ) { }
    else if( (wxTreeItemId(MainTreeCtrl->TCID_Sound_ToneGen)) == SelItem ) { }
    else if( (wxTreeItemId(MainTreeCtrl->TCID_Sound_Wave)) == SelItem ) { }
}

void GUIFrame::OnTreeItemSelect( wxTreeEvent &event )
{
//    wxTreeItemId SelItem = event.GetItem();
    int counter;
    switch( event.GetItem() )
    {
        case TCID_Welcome:
            counter = 1;
        break;
        case TCID_Config_Sound_ToneGen:
            counter = 2;
        break;
        case TCID_Html_Page:
            counter = 3;
        break;
        case TCID_Html_Game:
            counter = 4;
        break;
        case TCID_Sound_ToneGen:
            counter = 5;
        break;
        case TCID_Sound_Wave:
            counter = 6;
        break;
        default:
        break;
    }
    if( !MainNotebook->ExistPage( counter ) ) { MainNotebook->CreatePage( counter ); }
    else{
/*        switch( counter )
        {
            case 1: // move cases to notebook class
                MainNotebook->SetSelection( MainNotebook->GetPageIndex( NBPage_Welcome ) );
            break;
            case 2:
                MainNotebook->SetSelection( MainNotebook->GetPageIndex( NBPage_Conf_ToneGen ) );
            break;
            case 3:
                MainNotebook->SetSelection( MainNotebook->GetPageIndex( NBPage_HTML_Page ) );
            break;
            case 4:
                MainNotebook->SetSelection( MainNotebook->GetPageIndex( NBPage_HTML_Game ) );
            break;
            case 5:
                MainNotebook->SetSelection( MainNotebook->GetPageIndex( NBPage_Sound_ToneGen ) );
            break;
            case 6:
                MainNotebook->SetSelection( MainNotebook->GetPageIndex( NBPage_Sound_Wave ) );
            break;
            default:
            break;
        }
*/    }
    MainTreeCtrl->Unselect();
}
