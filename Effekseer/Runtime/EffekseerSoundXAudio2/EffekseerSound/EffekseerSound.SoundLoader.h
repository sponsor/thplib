
#ifndef	__EFFEKSEERSOUND_SOUND_LOADER_H__
#define	__EFFEKSEERSOUND_SOUND_LOADER_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "Effekseer.h"

//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
namespace EffekseerSound
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------

class SoundLoader
	: public ::Effekseer::SoundLoader
{
public:
	SoundLoader();

	virtual ~SoundLoader();

public:
	void* Load( const EFK_CHAR* path );

	void Unload( void* data );
};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERSOUND_SOUND_LOADER_H__