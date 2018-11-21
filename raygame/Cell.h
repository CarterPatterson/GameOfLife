#pragma once
#include "raylib.h"
#include "Globals.h"

class Cell
{
public:
	Cell(Vector2 _gridPos);
	~Cell();

	void shouldLive(Cell *grid);

	const int ratio = RATIO;
	int alive;
	bool isOuterLeft;
	bool isOuterRight;
	bool isOuterUp;
	bool isOuterDown;
	Vector2 gridPos;
	
};

