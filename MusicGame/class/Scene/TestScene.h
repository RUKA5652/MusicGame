#pragma once
#include "BaseScene.h"


class TestScene :
    public BaseScene
{
public:

	//ユーザー入力すべての処理
	void ProcessInput() override;

	//gameシュミュレーション
	std::unique_ptr<BaseScene> Update(std::unique_ptr<BaseScene> inScene) override;



private:



};
