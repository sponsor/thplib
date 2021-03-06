
#ifndef	__EFFEKSEER_MATRIX44_H__
#define	__EFFEKSEER_MATRIX44_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "Effekseer.Base.h"

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace Effekseer { 
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------

/**
	@brief	sρ
	@note
	Eθn<BR>
	Άθn<BR>
	V[x,y,z,1] * M Μ`<BR>
	[0,0][0,1][0,2][0,3]
	[1,0][1,1][1,2][1,3]
	[2,0][2,1][2,2][2,3]
	[3,0][3,1][3,2][3,3]
*/
#pragma pack(push,1)
struct Matrix44
{
private:

public:

	/**
		@brief	RXgN^
	*/
	Matrix44();

	/**
		@brief	sρΜl
	*/
	float	Values[4][4];

	/**
		@brief	PΚsρ»
	*/
	Matrix44& Indentity();

	/**
		@brief	Jsρ»(Eθn)
	*/
	Matrix44& LookAtRH( const Vector3D& eye, const Vector3D& at, const Vector3D& up );

	/**
		@brief	Jsρ»(Άθn)
	*/
	Matrix44& LookAtLH( const Vector3D& eye, const Vector3D& at, const Vector3D& up );

	/**
		@brief	Λesρ»(Eθn)
	*/
	Matrix44& PerspectiveFovRH( float ovY, float aspect, float zn, float zf );

	/**
		@brief	OpenGLpΛesρ»(Eθn)
	*/
	Matrix44& PerspectiveFovRH_OpenGL( float ovY, float aspect, float zn, float zf );

	/**
		@brief	Λesρ»(Άθn)
	*/
	Matrix44& PerspectiveFovLH( float ovY, float aspect, float zn, float zf );

	/**
		@brief	³Λesρ»(Eθn)
	*/
	Matrix44& OrthographicRH( float width, float height, float zn, float zf );

	/**
		@brief	³Λesρ»(Άθn)
	*/
	Matrix44& OrthographicLH( float width, float height, float zn, float zf );

	/**
		@brief	ζZ
	*/
	static Matrix44& Mul( Matrix44& o, const Matrix44& in1, const Matrix44& in2 );
};

#pragma pack(pop)
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
 } 
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEER_MATRIX44_H__
