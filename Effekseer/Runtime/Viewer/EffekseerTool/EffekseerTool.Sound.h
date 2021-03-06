
#ifndef	__EFFEKSEERTOOL_SOUND_H__
#define	__EFFEKSEERTOOL_SOUND_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "EffekseerSound.h"

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace EffekseerTool
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
class Sound
{
private:
	::EffekseerSound::Sound*	m_sound;

	IXAudio2*				m_xaudio;
	IXAudio2MasteringVoice*	m_masteringVoice;
	float	m_volume;
	bool	m_mute;

public:
	/**
		@brief	コンストラクタ
	*/
	Sound();

	/**
		@brief	デストラクタ
	*/
	~Sound();

	/**
		@brief	初期化を行う。
	*/
	bool Initialize( int32_t voiceCount1ch, int32_t voiceCount2ch );

	/**
		@brief	デバイスを取得する。
	*/
	IXAudio2* GetDevice();
	
	/**
		@brief	ボリューム設定。
	*/
	void SetVolume( float volume );

	/**
		@brief	無音設定。
	*/
	void SetMute( bool mute );
	
	float GetVolume()	{return m_volume;}
	bool GetMute()		{return m_mute;}
	::EffekseerSound::Sound*	GetSound() { return m_sound; };
};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERTOOL_SOUND_H__