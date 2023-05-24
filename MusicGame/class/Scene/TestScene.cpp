#include "TestScene.h"
#include<DxLib.h>
#include"SelectScene.h"
#include"../Manager/SceneManager.h"
#include "GameScene.h"


void TestScene::ProcessInput()
{
   
}

std::unique_ptr<BaseScene> TestScene::Update(std::unique_ptr<BaseScene> inScene)
{
    if (CheckHitKey(KEY_INPUT_0))
    {
       
    }

    if (GetDragFileNum())
    {
        TCHAR fileBuffer[MAX_PATH];
        GetDragFilePath(fileBuffer);
        std::string pass(fileBuffer);
    }
    DrawOnScreen();
    return inScene;
}

//std::unique_ptr<BaseScene> TestScene::Update(std::unique_ptr<BaseScene> onwScene, double& time)
//{
//    if (CheckHitKey(KEY_INPUT_0))
//    {
//        return std::make_unique<GameScene>();
//    }
//
//    if (GetDragFileNum())
//    {
//        TCHAR fileBuffer[MAX_PATH];
//        GetDragFilePath(fileBuffer);
//        std::string pass(fileBuffer);
//        return std::make_unique<GameScene>(pass);
//    }
//
//    return onwScene;
//}


