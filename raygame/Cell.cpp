#include "Cell.h"



Cell::Cell(Vector2 _gridPos)
{
	gridPos = _gridPos;
	if (gridPos.x = 0)
		isOuterLeft = true;
	if (gridPos.x = GetScreenWidth()/ratio)
		isOuterRight = true;
	if (gridPos.y = 0)
		isOuterUp = true;
	if (gridPos.y = GetScreenHeight() / ratio)
		isOuterDown = true;
}


Cell::~Cell()
{
}

void Cell::shouldLive(Cell *grid)
{
	int neighborSum = 0;

	for (int i = -1; i < 2; i++) {
		for (int j = -1; j < 2; j++) {
			neighborSum += grid[(int)gridPos.x + i][(int)gridPos.y + j].alive;
		}
	}

	if (!alive && neighborSum == 3) {
		alive = 1;
	} else {
		alive = 0;
	}
}
