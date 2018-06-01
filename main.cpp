﻿// Novel Game Engine LINKS for C++
// Coding by S.H.(GAMELINKS)

#include "DxLib.h"

int android_main(void) {

	if (DxLib_Init() == -1)	// ＤＸライブラリ初期化処理
	{
		return -1;				// エラーが起きたら直ちに終了
	}


	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;					// ソフトの終了
}
