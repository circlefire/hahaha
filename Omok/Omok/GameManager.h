#pragma once
#include "DrawMap.h"

class GameManager
{
	void SetConsoleSize();
	Position m_CenterPosition;
	int MainMenu();
	DrawMap m_DrawManager;
	Rect m_MapSize;
public:
	void RunGame();
	GameManager();
	~GameManager();
};

