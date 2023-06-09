#pragma once
#include"../../../Base/GameObjBase.h"
#include<memory>
#include"../../LoadData.h"
#include"LaneDivision.h"
#include"LaneLength.h"

class SideSpaceDivision;
namespace Beat
{
	struct LoadData;
};

/// <summary>
/// レーンに関する処理をまとめるクラス
/// </summary>
class Lane:
	public ObjBase
{
public:
	struct Initialization
	{
		LaneDivisionPtr division;
		LaneLengthPtr length;
	};
	Lane(Initialization& data);



private:
};

