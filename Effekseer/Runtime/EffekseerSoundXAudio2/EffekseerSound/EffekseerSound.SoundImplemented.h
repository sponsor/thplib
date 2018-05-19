
#ifndef	__EFFEKSEERRSOUND_SOUND_IMPLEMENTED_H__
#define	__EFFEKSEERRSOUND_SOUND_IMPLEMENTED_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include <XAudio2.h>
#include <X3DAudio.h>
#include "../EffekseerSound.h"

//----------------------------------------------------------------------------------
// Lib
//----------------------------------------------------------------------------------
#pragma comment(lib, "X3DAudio.lib" )

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace EffekseerSound
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------

class SoundVoice;
class SoundVoiceContainer;

class SoundImplemented : public Sound
{
	IXAudio2*				m_xaudio2;
	X3DAUDIO_HANDLE			m_x3daudio;
	X3DAUDIO_LISTENER		m_listener;

	SoundVoiceContainer*	m_voiceContainer[2];
	bool					m_mute;

public:
	SoundImplemented();
	virtual ~SoundImplemented();

	void Destory();

	bool Initialize( IXAudio2* xaudio2, int32_t num1chVoices, int32_t num2chVoices );
	
	void SetListener( const ::Effekseer::Vector3D& pos, 
		const ::Effekseer::Vector3D& at, const ::Effekseer::Vector3D& up );
	
	::Effekseer::SoundPlayer* CreateSoundPlayer();

	::Effekseer::SoundLoader* CreateSoundLoader();
	
	void StopAllVoices();

	void SetMute( bool mute );

	bool GetMute()			{return m_mute;}

	IXAudio2* GetDevice()	{return m_xaudio2;}

	SoundVoice* GetVoice(int32_t channel);
	
	void StopTagVoices( ::Effekseer::SoundTag tag );

	void PauseTagVoices( ::Effekseer::SoundTag tag, bool pause );

	void Calculate3DSound(const ::Effekseer::Vector3D& position, 
		float distance, int32_t input, int32_t output, float matrix[]);
};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERRSOUND_SOUND_IMPLEMENTED_H__