// Novel Game Engine LINKS for C++
// Coding by S.H.(GAMELINKS)

#include "DxLib.h"
#include <string>
#include <array>

//タイトル画面
void GameTitle() {

	int Color = DxLib::GetColor(255, 255, 255);

	std::array<std::string, 4> TitleItem = { "Start", "Load", "Config", "Exit" };

	while (true) {

		for (int i = 0; i < 4; i++)
			DxLib::DrawString(250, 240 - 32 * i, TitleItem[i].c_str(), Color);

		if (DxLib::WaitKey())
			break;
	}
}

int android_main(void) {

	if (DxLib_Init() == -1)	// ＤＸライブラリ初期化処理
	{
		return -1;				// エラーが起きたら直ちに終了
	}

	GameTitle();

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;					// ソフトの終了
}
