#pragma once
#include "BaseScene.h"


class TestScene :
    public BaseScene
{
public:

	//���[�U�[���͂��ׂĂ̏���
	void ProcessInput() override;

	//game�V���~�����[�V����
	std::unique_ptr<BaseScene> Update(std::unique_ptr<BaseScene> inScene) override;



private:



};
