#pragma once
#include"../Timer.h"

/// <summary>
/// 1小節のリズムを刻む
/// </summary>
class WaitSound
{
public:
	/// <param name="beatLength">拍の継続時間</param>
	/// <param name="waitSoundCount">小節の拍数</param>
	WaitSound(double beatLength,int waitSoundCount);
	~WaitSound();

	void WaitPlaySound(DeletaTimeConst& time);

private:
	//待機時間
	DeletaTime waitTime_;
	//拍の継続時間
	double beatLength_;
	//小節の拍数
	int waitSoundCount_;
	//リズムの音
	int waitSoundHandle_;
	//読み込み
	void LoadFile();
#ifdef _SAVEJSON
	//書き込み
	void SaveFile();
#endif // _SAVEJSON


};

