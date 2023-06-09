#pragma once
#include <map>
#include <vector>
#include"../../HitObj.h"

namespace Beat
{
	enum class SkinSoundType
	{
		Normal,
		Whistle ,
		Finish,
		Clap ,
		Welcome,
		Seeya,
		//20コンボ以上で途切れた
		ComboBreak,
	};

	using SkinSound	= int;
	using SoundData = std::vector<SkinSound>;

	using SkinSoundMap = std::map<SkinSoundType, SoundData>;

};
