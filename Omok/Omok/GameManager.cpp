#include "GameManager.h"

GameManager::GameManager() {
	m_MapSize.left = 0;
	m_MapSize.right = WIDTH;
	m_MapSize.top = 0;
	m_MapSize.bottom = HEIGHT;
	//특수문자는 2칸을 차지하기 때문에 특수문자를 이용해서 그리는 바둑판의 실제 너비는 원래 너비의 2배
	//그렇기 때문에 맵 상에서 센터위치는 너비와 같다.
	m_CenterPosition.x = m_MapSize.right;
	//y는 세로 길이를 반으로 나눈 위치
	m_CenterPosition.y = m_MapSize.bottom * 0.5; // 곱하기가 나누기보다 빠름.
	
	SetConsoleSize();
}
GameManager::~GameManager() {

}
void GameManager::RunGame() {
	m_DrawManager.GridDraw(0, 0, m_MapSize.right, m_MapSize.bottom);
	MainMenu();
}
void GameManager::SetConsoleSize() {
	char buf[256];
	int Width = m_MapSize.right * 2 + 1; // 여유공간 +1
	int Height = m_MapSize.bottom + 6;
	sprintf_s(buf, "mode con: lines=%d cols=%d", Height, Width);
	system(buf);
}
int GameManager::MainMenu() {
	int iSelect;
	m_DrawManager.DrawMidText("★ 오 목 ★", m_CenterPosition.x, m_CenterPosition.y * 0.5f);
	m_DrawManager.DrawMidText("1. 게임 시작", m_CenterPosition.x, m_CenterPosition.y * 0.7f);
	m_DrawManager.DrawMidText("2. 옵션 설정", m_CenterPosition.x, m_CenterPosition.y * 0.9f);
	m_DrawManager.DrawMidText("3. 게임 종료", m_CenterPosition.x, m_CenterPosition.y * 1.1f);
	m_DrawManager.BoxDraw(m_CenterPosition.x * 0.5f, m_CenterPosition.y * 1.3f, 10, 3);
	m_DrawManager.gotoxy(m_CenterPosition.x, m_CenterPosition.y * 1.4f);
	cin >> iSelect;
	return iSelect;
}