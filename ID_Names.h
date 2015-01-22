/***************************************************************
 * Name:      ID_Names.h
 * Purpose:   Header for ID enums & Names
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef ID_NAMES_H
#define ID_NAMES_H

//namespace {
struct ID_Objects {
        enum wx_ID {
            wxID_MAINFRAMEBASE = 1000,
            wxID_MAINSTATUSBAR,
            wxID_MAINMENUEXIT,
            wxID_MAINMENUABOUT,
            wxID_MAINTREECTRL,
            wxID_MAINNOTEBOOK,
            wxID_MNBPanel_Welcome,
            wxID_MNBPanel_Welcome_HTMLWIN,
            wxID_MNBPanel_Conf_ToneGen,
            wxID_MNBPanel_Conf_ToneGen_HTMLWIN,
            wxID_MNBPanel_HTML_Page,
            wxID_MNBPanel_HTML_Page_HTMLWIN,
            wxID_MNBPanel_HTML_Game,
            wxID_MNBPanel_HTML_Game_HTMLWIN,
            wxID_MNBPanel_Sound_Wave,
            wxID_MNBPanel_Sound_Wave_HTMLWIN,
            wxID_MNBPanel_Sound_ToneGen,
            wxID_MNBPanel_Sound_ToneGen_FREQSATICTEXT,
            wxID_MNBPanel_Sound_ToneGen_FREQSPINCTRL,
            wxID_MNBPanel_Sound_ToneGen_FREQBTN,
            wxID_MNBPanel_Sound_ToneGen_PLAYBTN,
            wxID_MNBPanel_Sound_ToneGen_VOLSTATICTEXT,
            wxID_MNBPanel_Sound_ToneGen_VOLSLIDER,
            wxID_MNBPanel_Sound_ToneGen_VOLAMOUNTTEXT,
            wxID_MNBPanel_Sound_ToneGen_PANSTATICTEXT,
            wxID_MNBPanel_Sound_ToneGen_PANSLIDER,
            wxID_MNBPanel_Sound_ToneGen_PANAMOUNTTEXT,
            wxID_MNBPanel_Sound_ToneGen_PITCHSTATICTEXT,
            wxID_MNBPanel_Sound_ToneGen_PITCHSLIDER,
            wxID_MNBPanel_Sound_ToneGen_PITCHAMOUNTTEXT,
            wxID_ABOUTDIALOG,
            wxID_ADSTATICBOX,
            wxID_ADSTATICTEXT,
            wxID_ADBUTTONCB,
            wxID_ADBUTTONFB,
            wxID_ADBUTTONWX,
            wxID_ADBUTTONGCC,
            wxID_ADBUTTONMGW,
            wxID_ADBUTTONSTK
        } wx_ID;

        enum NBPages {
            NBPage_Welcome = 1,
            NBPage_Conf_ToneGen,
            NBPage_HTML_Page,
            NBPage_HTML_Game,
            NBPage_Sound_ToneGen,
            NBPage_Sound_Wave
        } NBPages;

        enum TreeItems {
            TCID_Welcome = 1,
    //        TCID_Config,
            TCID_Config_Sound_ToneGen,
    //        TCID_Html,
            TCID_Html_Page,
            TCID_Html_Game,
    //        TCID_Sound,
            TCID_Sound_ToneGen,
            TCID_Sound_Wave
        } TreeItems;
} ID_Enums;

#endif // ID_NAMES_H
