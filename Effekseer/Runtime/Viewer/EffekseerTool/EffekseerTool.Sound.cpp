
//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include <XAudio2.h>
#include "EffekseerTool.Sound.h"

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace EffekseerTool
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
Sound::Sound()
	: m_sound	( NULL )
	, m_xaudio	( NULL )
	, m_masteringVoice( NULL )
	, m_mute	( false )
	, m_volume	( 1.0f )
{
}

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
Sound::~Sound()
{
	m_xaudio->StopEngine();

	if( m_sound != NULL )
	{
		m_sound->Destory();
		m_sound = NULL;
	}
	if( m_masteringVoice != NULL )
	{
		m_masteringVoice->DestroyVoice();
		m_masteringVoice = NULL;
	}

	ES_SAFE_RELEASE( m_xaudio );

	CoUninitialize();
}

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
bool Sound::Initialize( int32_t voiceCount1ch, int32_t voiceCount2ch )
{
	HRESULT hr;
	
	hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
	hr = XAudio2Create(&m_xaudio, 0);
	hr = m_xaudio->CreateMasteringVoice(&m_masteringVoice, 2, 44100);

	m_sound = EffekseerSound::Sound::Create(m_xaudio, voiceCount1ch, voiceCount2ch);

	return true;
}

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
IXAudio2* Sound::GetDevice()
{
	return m_xaudio;
}

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
void Sound::SetVolume( float volume )
{
	m_volume = volume;
	m_masteringVoice->SetVolume((m_mute) ? 0.0f : m_volume);
}

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
void Sound::SetMute( bool mute )
{
	m_mute = mute;
	m_masteringVoice->SetVolume((m_mute) ? 0.0f : m_volume);
	m_sound->SetMute(mute);
}

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
