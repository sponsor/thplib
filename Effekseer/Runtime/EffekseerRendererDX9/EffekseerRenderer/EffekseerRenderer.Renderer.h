
#ifndef	__EFFEKSEERRENDERER_RENDERER_H__
#define	__EFFEKSEERRENDERER_RENDERER_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "EffekseerRenderer.Base.h"

#include <d3d9.h>
#include <d3dx9.h>

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace EffekseerRenderer
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
/**
	@brief	�`��N���X
*/
class Renderer
{
protected:
	Renderer() {}
	virtual ~Renderer() {}

public:
	/**
		@brief	�f�o�C�X���X�g�������������Ɏ��s����B
	*/
	virtual void OnLostDevice() = 0;

	/**
		@brief	�f�o�C�X�����Z�b�g���ꂽ���Ɏ��s����B
	*/
	virtual void OnResetDevice() = 0;

	/**
		@brief	�C���X�^���X�𐶐�����B
		@param	device	[in]	DirectX�̃f�o�C�X
		@param	squareMaxCount	[in]	�ő�`��X�v���C�g��
		@return	�C���X�^���X
	*/
	static Renderer* Create( LPDIRECT3DDEVICE9 device, int32_t squareMaxCount );

	/**
		@brief	���̃C���X�^���X��j������B
	*/
	virtual void Destory() = 0;

	/**
		@brief	�`����J�n���鎞�Ɏ��s����B
	*/
	virtual bool BeginRendering() = 0;

	/**
		@brief	�`����I�����鎞�Ɏ��s����B
	*/
	virtual bool EndRendering() = 0;

	/**
		@brief	�f�o�C�X���擾����B
	*/
	virtual LPDIRECT3DDEVICE9 GetDevice() = 0;

	/**
		@brief	�ő�`��X�v���C�g�����擾����B
	*/
	virtual int32_t GetSquareMaxCount() const = 0;

	/**
		@brief	���e�s����擾����B
	*/
	virtual const ::Effekseer::Matrix44& GetProjectionMatrix() const = 0;

	/**
		@brief	���e�s���ݒ肷��B
	*/
	virtual void SetProjectionMatrix( const ::Effekseer::Matrix44& mat ) = 0;

	/**
		@brief	�J�����s����擾����B
	*/
	virtual const ::Effekseer::Matrix44& GetCameraMatrix() const = 0;

	/**
		@brief	�J�����s���ݒ肷��B
	*/
	virtual void SetCameraMatrix( const ::Effekseer::Matrix44& mat ) = 0;

	/**
		@brief	�J�����v���W�F�N�V�����s����擾����B
	*/
	virtual ::Effekseer::Matrix44& GetCameraProjectionMatrix() = 0;

	/**
		@brief	�X�v���C�g�����_���[�𐶐�����B
	*/
	virtual ::Effekseer::SpriteRenderer* CreateSpriteRenderer() = 0;

	/**
		@brief	���{�������_���[�𐶐�����B
	*/
	virtual ::Effekseer::RibbonRenderer* CreateRibbonRenderer() = 0;

	/**
		@brief	�����O�����_���[�𐶐�����B
	*/
	virtual ::Effekseer::RingRenderer* CreateRingRenderer() = 0;

	/**
		@brief	�W���̃e�N�X�`���Ǎ��N���X�𐶐�����B
		@note
		DirectX�ł̂ݎ�������Ă���AOpenGL�łł�NULL��Ԃ��B
	*/
	virtual ::Effekseer::TextureLoader* CreateTextureLoader() = 0;
};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERRENDERER_RENDERER_H__