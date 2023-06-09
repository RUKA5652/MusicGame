#pragma once
#include"../LoopTimer.h"
#include <string>
#include "../../Common/osu/LoadData.h"
#include<functional>

class WaitSound;

/// <summary>
/// 譜面の再生時間
/// </summary>
class GameClock
	:public LoopTimer
{
public:

	GameClock(const std::string& audioFile, Beat::LoadDataCPtr data, int& handle);
	~GameClock();
	void UpdateDelta() override;
private:
	int handle_;

	bool playFlag_;

	Beat::UpdateTime leadInTime_;
	//更新関数格納
	std::function<void(void)> func_;

	double beatLength_;

	int meter_;

	WaitSound* waitSound_;

	void MusicUpdate();

	void WaitUpdate();

};

