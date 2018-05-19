
#ifndef	__EFFEKSEERRSOUND_SOUND_PLAYER_H__
#define	__EFFEKSEERRSOUND_SOUND_PLAYER_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "Effekseer.h"
#include "../EffekseerSound.h"

//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
namespace EffekseerSound
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------

class SoundImplemented;

class SoundPlayer
	: public ::Effekseer::SoundPlayer
{
private:
	SoundImplemented*	m_sound;

public:
	SoundPlayer( SoundImplemented* sound );

	virtual ~SoundPlayer();

public:
	::Effekseer::SoundHandle Play( ::Effekseer::SoundTag tag, 
		const ::Effekseer::SoundPlayer::InstanceParameter& parameter );
	
	void Stop( ::Effekseer::SoundHandle handle, ::Effekseer::SoundTag tag );

	void Pause( ::Effekseer::SoundHandle handle, ::Effekseer::SoundTag tag, bool pause );

	void StopTag( ::Effekseer::SoundTag tag );

	void PauseTag( ::Effekseer::SoundTag tag, bool pause );

	void StopAll();
};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERRSOUND_SOUND_PLAYER_H__