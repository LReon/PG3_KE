#include <Novice.h>


const char kWindowTitle[] = "LE2D_17_フジワラ_リオ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	

	// ライブラリの終了
	Novice::Finalize();

	return 0;
}