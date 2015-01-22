/***************************************************************
 * Name:      NBPage_Sound_ToneGen.cpp
 * Purpose:   Code for Graphical User Interface Frame Note Book Tone Generator Page
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-14
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif  // WX_PRECOMP

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "NBPage_Sound_ToneGen.h"

BEGIN_EVENT_TABLE( MNBPanel_Sound_ToneGen, wxPanel )
    EVT_TEXT( wxID_MNBPanel_Sound_ToneGen_FREQSPINCTRL, MNBPanel_Sound_ToneGen::OnSpinCtrlText )
    EVT_SPINCTRL( wxID_MNBPanel_Sound_ToneGen_FREQSPINCTRL, MNBPanel_Sound_ToneGen::OnSpinCtrlClick )
    EVT_BUTTON( wxID_MNBPanel_Sound_ToneGen_FREQBTN, MNBPanel_Sound_ToneGen::OnFreqBtnClick )
    EVT_TOGGLEBUTTON( wxID_MNBPanel_Sound_ToneGen_PLAYBTN, MNBPanel_Sound_ToneGen::OnPlayBtnClick )
    EVT_COMMAND_SCROLL( wxID_MNBPanel_Sound_ToneGen_VOLSLIDER, MNBPanel_Sound_ToneGen::OnVolSlide )
    EVT_COMMAND_SCROLL( wxID_MNBPanel_Sound_ToneGen_PANSLIDER, MNBPanel_Sound_ToneGen::OnPanSlide )
    EVT_COMMAND_SCROLL( wxID_MNBPanel_Sound_ToneGen_PITCHSLIDER, MNBPanel_Sound_ToneGen::OnPitchSlide )
END_EVENT_TABLE()

MNBPanel_Sound_ToneGen::MNBPanel_Sound_ToneGen( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name ) : wxPanel( parent, id, pos, size, style, name )
{
	TG_MainFGSizer = new wxFlexGridSizer( 7, 1, 0, 0 );
	TG_MainFGSizer->AddGrowableCol( 0 );
	TG_MainFGSizer->AddGrowableCol( 1 );
	TG_MainFGSizer->SetFlexibleDirection( wxBOTH );
	TG_MainFGSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	TG_MainFGSizer->Add( 0, 50, 1, wxEXPAND, 5 );

	FrequencySizer = new wxGridSizer( 0, 6, 0, 0 );
	FrequencySizer->Add( 0, 0, 1, wxEXPAND, 5 );
	FrequencyStaticText = new wxStaticText( this, wxID_MNBPanel_Sound_ToneGen_FREQSATICTEXT, wxT("Frequency in Hz"), wxDefaultPosition, wxDefaultSize, 0 );
	FrequencyStaticText->Wrap( -1 );
	FrequencySizer->Add( FrequencyStaticText, 0, wxALIGN_RIGHT|wxALL, 5 );
	FrequencySpinCtrl = new wxSpinCtrl( this, wxID_MNBPanel_Sound_ToneGen_FREQSPINCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 30000, 440 );
	FrequencySizer->Add( FrequencySpinCtrl, 0, wxALIGN_LEFT|wxALL, 5 );
	FrequencySizer->Add( 0, 0, 1, wxEXPAND, 5 );
	FrequencyButton = new wxButton( this, wxID_MNBPanel_Sound_ToneGen_FREQBTN, wxT("Set"), wxDefaultPosition, wxDefaultSize, 0 );
	FrequencySizer->Add( FrequencyButton, 0, wxALIGN_LEFT|wxALL, 5 );
	FrequencySizer->Add( 0, 0, 1, wxEXPAND, 5 );
	TG_MainFGSizer->Add( FrequencySizer, 1, wxEXPAND, 5 );

	PlayToggleBtn = new wxToggleButton( this, wxID_MNBPanel_Sound_ToneGen_PLAYBTN, wxT("Play"), wxDefaultPosition, wxSize( 300,-1 ), 0 );
	TG_MainFGSizer->Add( PlayToggleBtn, 0, wxALIGN_CENTER|wxALL, 5 );

	VolumeSizer = new wxGridSizer( 0, 3, 0, 0 );
	VolumeStaticText = new wxStaticText( this, wxID_MNBPanel_Sound_ToneGen_VOLSTATICTEXT, wxT("Volume"), wxDefaultPosition, wxDefaultSize, 0 );
	VolumeStaticText->Wrap( -1 );
	VolumeSizer->Add( VolumeStaticText, 0, wxALIGN_CENTER|wxALIGN_LEFT|wxALL, 5 );
	VolumeSlider = new wxSlider( this, wxID_MNBPanel_Sound_ToneGen_VOLSLIDER, 100, 0, 100, wxDefaultPosition, wxSize( 200,-1 ), wxSL_HORIZONTAL );
	VolumeSizer->Add( VolumeSlider, 0, wxALIGN_CENTER|wxALL, 5 );
	VolumeAmountText = new wxStaticText( this, wxID_MNBPanel_Sound_ToneGen_VOLAMOUNTTEXT, wxT("100\%"), wxDefaultPosition, wxDefaultSize, 0 );
	VolumeAmountText->Wrap( -1 );
	VolumeSizer->Add( VolumeAmountText, 0, wxALIGN_CENTER|wxALL, 5 );
	TG_MainFGSizer->Add( VolumeSizer, 1, wxEXPAND, 5 );

	PanSizer = new wxGridSizer( 0, 3, 0, 0 );
	PanStaticText = new wxStaticText( this, wxID_MNBPanel_Sound_ToneGen_PANSTATICTEXT, wxT("Pan"), wxDefaultPosition, wxDefaultSize, 0 );
	PanStaticText->Wrap( -1 );
	PanSizer->Add( PanStaticText, 0, wxALIGN_CENTER|wxALL, 5 );
	PanSlider = new wxSlider( this, wxID_MNBPanel_Sound_ToneGen_PANSLIDER, 0, -100, 100, wxDefaultPosition, wxSize( 200,-1 ), wxSL_HORIZONTAL );
	PanSizer->Add( PanSlider, 0, wxALIGN_CENTER|wxALL, 5 );
	PanAmountText = new wxStaticText( this, wxID_MNBPanel_Sound_ToneGen_PANAMOUNTTEXT, wxT("0.00"), wxDefaultPosition, wxDefaultSize, 0 );
	PanAmountText->Wrap( -1 );
	PanSizer->Add( PanAmountText, 0, wxALIGN_CENTER|wxALL, 5 );
	TG_MainFGSizer->Add( PanSizer, 1, wxEXPAND, 5 );

	PitchSizer = new wxGridSizer( 0, 3, 0, 0 );
	PitchStaticText = new wxStaticText( this, wxID_MNBPanel_Sound_ToneGen_PITCHSTATICTEXT, wxT("Pitch"), wxDefaultPosition, wxDefaultSize, 0 );
	PitchStaticText->Wrap( -1 );
	PitchSizer->Add( PitchStaticText, 0, wxALIGN_CENTER|wxALL, 5 );
	PitchSlider = new wxSlider( this, wxID_MNBPanel_Sound_ToneGen_PITCHSLIDER, 100, -50, 200, wxDefaultPosition, wxSize( 200,-1 ), wxSL_HORIZONTAL );
	PitchSizer->Add( PitchSlider, 0, wxALIGN_CENTER|wxALL, 5 );
	PitchAmountText = new wxStaticText( this, wxID_MNBPanel_Sound_ToneGen_PITCHAMOUNTTEXT, wxT("1.00"), wxDefaultPosition, wxDefaultSize, 0 );
	PitchAmountText->Wrap( -1 );
	PitchSizer->Add( PitchAmountText, 0, wxALIGN_CENTER|wxALL, 5 );
	TG_MainFGSizer->Add( PitchSizer, 1, wxEXPAND, 5 );

	this->SetSizer( TG_MainFGSizer );
	this->Layout();


    // [ device, parameters ]    rate=192000   -normal( "buffer=250,rate=48000" )
    if( !(ToneGeneratorDevice = audiere::OpenDevice( "autodetect" , "autodetect" )) ) { wxMessageBox( wxT("No Sound Device Detected"), wxT("ERROR!"), wxOK|wxICON_HAND, this ); }
    else{ FrequencySet(); }

//    using namespace stk;
    stk::Stk::setSampleRate( 44100.0 );
    stk::Stk::showWarnings( true );
/*
    outparameters.deviceId = dac.getDefaultOutputDevice();
    outparameters.nChannels = 1;
    unsigned int bufferFrames = RT_BUFFER_SIZE;
    options.flags = RTAUDIO_MINIMIZE_LATENCY;
    options.numberOfBuffers = bufferFrames;
    format = ( sizeof(StkFloat) == 8 ) ? RTAUDIO_FLOAT64 : RTAUDIO_FLOAT32;
*/
    try {
        dac = new stk::RtWvOut( 1 );
//        dac.openStream( &outparameters, &inparameters, format, (unsigned int)Stk::sampleRate(), &bufferFrames, &tick, (void *)&sine, &options );
        }
        catch ( RtError &error ) {
//            error.printMessage();
//            goto cleanup;
            wxMessageBox( wxT("RtAudio - no stream"), wxT("ERROR!"), wxOK|wxICON_HAND, this );
        }
    sine.setFrequency(440.0);
}

MNBPanel_Sound_ToneGen::~MNBPanel_Sound_ToneGen()
{
    PageExists = false;
}

void MNBPanel_Sound_ToneGen::OnSpinCtrlText( wxCommandEvent& )
{
}

void MNBPanel_Sound_ToneGen::OnSpinCtrlClick( wxSpinEvent& )
{
}

void MNBPanel_Sound_ToneGen::OnFreqBtnClick( wxCommandEvent& )
{
    PitchReset();
    if( !(ToneGeneratorDevice) ){ return; }
    else{ FrequencySet(); }
}

void MNBPanel_Sound_ToneGen::FrequencySet()
{
    int Frequency = FrequencySpinCtrl->GetValue();
    ToneGeneratorSource = audiere::CreateTone(Frequency);
    ToneGeneratorStream = ToneGeneratorDevice->openStream(ToneGeneratorSource.get());
}

void MNBPanel_Sound_ToneGen::OnPlayBtnClick( wxCommandEvent& )
{
    if( PlayToggleBtn->GetValue() )
    {
        PlayToggleBtn->SetLabel(wxT("Stop"));
        if( !(ToneGeneratorStream) ){ FrequencySet(); }
            for ( int i=0; i<100000; i++ ) {
                try { dac->tick( sine.tick() ); }
                catch ( RtError & ) { delete dac; }
            }
//        dac.startStream();
//        ToneGeneratorStream->play();
    }
    else if( !(PlayToggleBtn->GetValue()) )
    {
        PlayToggleBtn->SetLabel(wxT("Play"));
        if( !(ToneGeneratorStream) ){ return; }
            delete dac;
//        dac.closeStream();
//        ToneGeneratorStream->stop();
    }
}

void MNBPanel_Sound_ToneGen::OnVolSlide( wxScrollEvent& )
{
    int Volume = VolumeSlider->GetValue();
    VolTextSet( Volume );
    if( !(ToneGeneratorStream) ){ return; }
    ToneGeneratorStream->setVolume( Volume / 100.0f );
}

void MNBPanel_Sound_ToneGen::VolTextSet( int volval )
{
    wxString vollabel;
    vollabel.Printf( wxT("%d\%"), volval );
    VolumeAmountText->SetLabel( vollabel );
}

void MNBPanel_Sound_ToneGen::OnPanSlide( wxScrollEvent& )
{
    float Pan = PanSlider->GetValue();
    PanTextSet( Pan );
    if( !(ToneGeneratorStream) ){ return; }
    ToneGeneratorStream->setPan( Pan / 100.0f );
}

void MNBPanel_Sound_ToneGen::PanTextSet( float panval )
{
    wxString panlabel;
    panlabel.Printf( wxT("%1.2f"), panval / 100.0f );
    PanAmountText->SetLabel( panlabel );
}

void MNBPanel_Sound_ToneGen::OnPitchSlide( wxScrollEvent& )
{
    float Pitch = PitchSlider->GetValue();
    PitchTextSet( Pitch );
    if( !(ToneGeneratorStream) ){ return; }
    ToneGeneratorStream->setPitchShift( Pitch / 100.0f );
}

void MNBPanel_Sound_ToneGen::PitchTextSet( float pitchval )
{
    wxString pitchlabel;
    pitchlabel.Printf( wxT("%1.2f"), pitchval / 100.0f );
    PitchAmountText->SetLabel( pitchlabel );
}

void MNBPanel_Sound_ToneGen::PitchReset()
{
    PitchSlider->SetValue( 100 );
    PitchSlider->Refresh();
    PitchTextSet( PitchSlider->GetValue() );
}

RtAudioCallback MNBPanel_Sound_ToneGen::tick( void *outputBuffer, void *inputBuffer, unsigned int nBufferFrames, double streamTime, RtAudioStreamStatus status, void *dataPointer )
{
    using namespace stk;
    stk::SineWave *sine = (SineWave *) dataPointer;
    register StkFloat *samples = (StkFloat *) outputBuffer;

    for ( unsigned int i=0; i<nBufferFrames; i++ ) { *samples++ = sine->tick(); }
    return 0;
}
