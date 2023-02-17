#pragma once
#include "DrawMap.h"

class GameManager
{
	DrawMap m_DrawManager;
	Rect m_MapSize;
public:
	void RunGame();
	GameManager();
	~GameManager();
};

