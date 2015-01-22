/***************************************************************
 * Name:      NBPage_Sound_ToneGen.h
 * Purpose:   Header for Graphical User Interface Frame Note Book Tone Generator Page
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef NBPage_Sound_ToneGen_H
#define NBPage_Sound_ToneGen_H

#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/event.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/bitmap.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/spinctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/tglbtn.h>
#include <wx/slider.h>
#include <wx/panel.h>

#include <Stk.h>
#include <SineWave.h>
#include <RtWvOut.h>
#include <RtAudio.h>
#include <Messager.h>
#include <LentPitShift.h>
#include <RtWvIn.h>

#include <audiere.h>
/*
#define wxID_MNBPanel_Sound_ToneGen                   1900
#define wxID_MNBPanel_Sound_ToneGen_FREQSATICTEXT     1901
#define wxID_MNBPanel_Sound_ToneGen_FREQSPINCTRL      1902
#define wxID_MNBPanel_Sound_ToneGen_FREQBTN           1903
#define wxID_MNBPanel_Sound_ToneGen_PLAYBTN           1904
#define wxID_MNBPanel_Sound_ToneGen_VOLSTATICTEXT     1905
#define wxID_MNBPanel_Sound_ToneGen_VOLSLIDER         1906
#define wxID_MNBPanel_Sound_ToneGen_VOLAMOUNTTEXT     1907
#define wxID_MNBPanel_Sound_ToneGen_PANSTATICTEXT     1908
#define wxID_MNBPanel_Sound_ToneGen_PANSLIDER         1909
#define wxID_MNBPanel_Sound_ToneGen_PANAMOUNTTEXT     1910
#define wxID_MNBPanel_Sound_ToneGen_PITCHSTATICTEXT   1911
#define wxID_MNBPanel_Sound_ToneGen_PITCHSLIDER       1912
#define wxID_MNBPanel_Sound_ToneGen_PITCHAMOUNTTEXT   1913
*/
#include "ID_Names.h"

class MNBPanel_Sound_ToneGen : public wxPanel
{
    private:
        void PitchReset();
        void FrequencySet();
        void PitchTextSet( float pitchval );
        void PanTextSet( float panval );
        void VolTextSet( int volval );
        DECLARE_EVENT_TABLE()
        void OnSpinCtrlText     ( wxCommandEvent& );
        void OnSpinCtrlClick    ( wxSpinEvent& );
        void OnFreqBtnClick     ( wxCommandEvent& );
        void OnPlayBtnClick     ( wxCommandEvent& );
        void OnVolSlide         ( wxScrollEvent& );
        void OnPanSlide         ( wxScrollEvent& );
        void OnPitchSlide       ( wxScrollEvent& );

    protected:
        wxFlexGridSizer* TG_MainFGSizer;

        wxGridSizer*     FrequencySizer;
		wxStaticText*    FrequencyStaticText;
		wxSpinCtrl*      FrequencySpinCtrl;
		wxButton*        FrequencyButton;

		wxToggleButton*  PlayToggleBtn;

        wxGridSizer*     VolumeSizer;
		wxStaticText*    VolumeStaticText;
		wxSlider*        VolumeSlider;
		wxStaticText*    VolumeAmountText;

        wxGridSizer*     PanSizer;
		wxStaticText*    PanStaticText;
		wxSlider*        PanSlider;
		wxStaticText*    PanAmountText;

        wxGridSizer*     PitchSizer;
		wxStaticText*    PitchStaticText;
		wxSlider*        PitchSlider;
		wxStaticText*    PitchAmountText;

        audiere::AudioDevicePtr  ToneGeneratorDevice;
        audiere::SampleSourcePtr ToneGeneratorSource;
        audiere::OutputStreamPtr ToneGeneratorStream;

        stk::SineWave sine;
/*
        RtAudio dac;
        RtAudio::StreamParameters outparameters;
        RtAudio::StreamParameters inparameters;
        RtAudio::StreamOptions options;
        RtAudioFormat format;
*/
//        int nFrames = 100000;
        stk::RtWvOut *dac;

    public:
        RtAudioCallback tick( void *outputBuffer, void *inputBuffer, unsigned int nBufferFrames, double streamTime, RtAudioStreamStatus status, void *dataPointer );
        bool PageExists;
        MNBPanel_Sound_ToneGen( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name );
        ~MNBPanel_Sound_ToneGen();
};

#endif // NBPage_Sound_ToneGen_H
