
#ifndef	__EFFEKSEER_MANAGER_H__
#define	__EFFEKSEER_MANAGER_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "Effekseer.Base.h"

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace Effekseer
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------

/**
	@brief エフェクト管理クラス
*/
class Manager
{
protected:
	Manager() {}
    ~Manager() {}

public:
	/**
		@brief マネージャーを生成する。
		@param	instance_max	[in]	最大インスタンス数
		@return	マネージャー
	*/
	static Manager* Create( int instance_max );

	/**
		@brief マネージャーを破棄する。
		@note
		このマネージャーから生成されたエフェクトは全て強制的に破棄される。
	*/
	virtual void Destroy() = 0;

	/**
		@brief	メモリ確保関数を取得する。
	*/
	virtual MallocFunc GetMallocFunc() const = 0;

	/**
		@brief	メモリ確保関数を設定する。
	*/
	virtual void SetMallocFunc( MallocFunc func ) = 0;

	/**
		@brief	メモリ破棄関数を取得する。
	*/
	virtual FreeFunc GetFreeFunc() const = 0;

	/**
		@brief	メモリ破棄関数を設定する。
	*/
	virtual void SetFreeFunc( FreeFunc func ) = 0;

	/**
		@brief	ランダム関数を取得する。
	*/
	virtual RandFunc GetRandFunc() const = 0;

	/**
		@brief	ランダム関数を設定する。
	*/
	virtual void SetRandFunc( RandFunc func ) = 0;

	/**
		@brief	ランダム最大値を取得する。
	*/
	virtual int GetRandMax() const = 0;

	/**
		@brief	ランダム関数を設定する。
	*/
	virtual void SetRandMax( int max_ ) = 0;

	/**
		@brief	座標系を取得する。
		@return	座標系
	*/
	virtual eCoordinateSystem GetCoordinateSystem() const = 0;

	/**
		@brief	座標系を設定する。
		@param	coordinateSystem	[in]	座標系
		@note
		座標系を設定する。
		エフェクトファイルを読み込む前に設定する必要がある。
	*/
	virtual void SetCoordinateSystem( eCoordinateSystem coordinateSystem ) = 0;

	/**
		@brief	スプライト描画機能を取得する。
	*/
	virtual SpriteRenderer* GetSpriteRenderer() = 0;

	/**
		@brief	スプライト描画機能を設定する。
	*/
	virtual void SetSpriteRenderer( SpriteRenderer* renderer ) = 0;

	/**
		@brief	ストライプ描画機能を取得する。
	*/
	virtual RibbonRenderer* GetRibbonRenderer() = 0;

	/**
		@brief	ストライプ描画機能を設定する。
	*/
	virtual void SetRibbonRenderer( RibbonRenderer* renderer ) = 0;

	/**
		@brief	リング描画機能を取得する。
	*/
	virtual RingRenderer* GetRingRenderer() = 0;

	/**
		@brief	リング描画機能を設定する。
	*/
	virtual void SetRingRenderer( RingRenderer* renderer ) = 0;

	/**
		@brief	エフェクト読込クラスを取得する。
	*/
	virtual EffectLoader* GetEffectLoader() = 0;

	/**
		@brief	エフェクト読込クラスを設定する。
	*/
	virtual void SetEffectLoader( EffectLoader* effectLoader ) = 0;

	/**
		@brief	テクスチャ読込クラスを取得する。
	*/
	virtual TextureLoader* GetTextureLoader() = 0;

	/**
		@brief	テクスチャ読込クラスを設定する。
	*/
	virtual void SetTextureLoader( TextureLoader* textureLoader ) = 0;
	
	/**
		@brief	サウンド再生機能を取得する。
	*/
	virtual SoundPlayer* GetSoundPlayer() = 0;

	/**
		@brief	サウンド再生機能を設定する。
	*/
	virtual void SetSoundPlayer( SoundPlayer* soundPlayer ) = 0;
	
	/**
		@brief	サウンド読込クラスを取得する
	*/
	virtual SoundLoader* GetSoundLoader() = 0;
	
	/**
		@brief	サウンド読込クラスを設定する。
	*/
	virtual void SetSoundLoader( SoundLoader* soundLoader ) = 0;

	/**
		@brief	エフェクトを停止する。
		@param	handle	[in]	インスタンスのハンドル
	*/
	virtual void StopEffect( Handle handle ) = 0;

	/**
		@brief	全てのエフェクトを停止する。
	*/
	virtual void StopAllEffects() = 0;

	/**
		@brief	エフェクトのルートだけを停止する。
		@param	handle	[in]	インスタンスのハンドル
	*/
	virtual void StopRoot( Handle handle ) = 0;

	/**
		@brief	エフェクトのルートだけを停止する。
		@param	effect	[in]	エフェクト
	*/
	virtual void StopRoot( Effect* effect ) = 0;

	/**
		@brief	エフェクトのインスタンスが存在しているか取得する。
		@param	handle	[in]	インスタンスのハンドル
		@return	存在してるか?
	*/
	virtual bool Exists( Handle handle ) const = 0;

	/**
		@brief	エフェクトのインスタンスに設定されている行列を取得する。
		@param	handle	[in]	インスタンスのハンドル
		@return	行列
	*/
	virtual Matrix43 GetMatrix( Handle handle ) = 0;

	/**
		@brief	エフェクトのインスタンスに変換行列を設定する。
		@param	handle	[in]	インスタンスのハンドル
		@param	mat		[in]	変換行列
	*/
	virtual void SetMatrix( Handle handle, const Matrix43& mat ) = 0;

	/**
		@brief	エフェクトのインスタンスの位置を取得する。
		@param	handle	[in]	インスタンスのハンドル
		@return	位置
	*/
	virtual Vector3D GetLocation( Handle handle ) = 0;

	/**
		@brief	エフェクトのインスタンスの位置を指定する。
		@param	x	[in]	X座標
		@param	y	[in]	Y座標
		@param	z	[in]	Z座標
	*/
	virtual void SetLocation( Handle handle, float x, float y, float z ) = 0;

	/**
		@brief	エフェクトのインスタンスの位置を指定する。
		@param	location	[in]	位置
	*/
	virtual void SetLocation( Handle handle, const Vector3D& location ) = 0;

	/**
		@brief	エフェクトのインスタンスの位置に加算する。
		@param	location	[in]	加算する値
	*/
	virtual void AddLocation( Handle handle, const Vector3D& location ) = 0;

	/**
		@brief	エフェクトのインスタンスの回転角度を指定する。(ラジアン)
	*/
	virtual void SetRotation( Handle handle, float x, float y, float z ) = 0;

	/**
		@brief	エフェクトのインスタンスの任意軸周りの反時計周りの回転角度を指定する。
		@param	handle	[in]	インスタンスのハンドル
		@param	axis	[in]	軸
		@param	angle	[in]	角度(ラジアン)
	*/
	virtual void SetRotation( Handle handle, const Vector3D& axis, float angle ) = 0;

	/**
		@brief	エフェクトのインスタンスの拡大率を指定する。
		@param	handle	[in]	インスタンスのハンドル
		@param	x		[in]	X方向拡大率
		@param	y		[in]	Y方向拡大率
		@param	z		[in]	Z方向拡大率
	*/
	virtual void SetScale( Handle handle, float x, float y, float z ) = 0;

	/**
		@brief	エフェクトのインスタンスに廃棄時のコールバックを設定する。
		@param	handle	[in]	インスタンスのハンドル
		@param	callback	[in]	コールバック
	*/
	virtual void SetRemovingCallback( Handle handle, EffectInstanceRemovingCallback callback ) = 0;

	/**
		@brief	エフェクトのインスタンスをDraw時に描画するか設定する。
		@param	handle	[in]	インスタンスのハンドル
		@param	shown	[in]	描画するか?
	*/
	virtual void SetShown( Handle handle, bool shown ) = 0;

	/**
		@brief	エフェクトのインスタンスをUpdate時に更新するか設定する。
		@param	handle	[in]	インスタンスのハンドル
		@param	paused	[in]	更新するか?
	*/
	virtual void SetPaused( Handle handle, bool paused ) = 0;

	/**
		@brief	更新処理を行う。
	*/
	virtual void Update() = 0;

	/**
		@brief	描画処理を行う。
	*/
	virtual void Draw() = 0;

	/**
		@brief	再生する。
		@param	effect	[in]	エフェクト
		@param	x	[in]	X座標
		@param	y	[in]	Y座標
		@param	z	[in]	Z座標
		@return	エフェクトのインスタンスのハンドル
	*/
	virtual Handle Play( Effect* effect, float x, float y, float z ) = 0;
};
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEER_MANAGER_H__
