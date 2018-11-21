/*******************************************************************************************
*
*   raylib [core] example - basic window
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "Cell.h"
#include "Globals.h"
#include <iostream>

int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	
	int RATIO;
	int X_RATIO;
	int Y_RATIO;

	int screenWidth;
	int screenHeight;

	std::cout << "Width: ";
	std::cin >> screenWidth;
	std::cout << "Height: ";
	std::cin >> screenHeight;
	std::cout << "Cell ratio: ";
	std::cin >> RATIO;

	X_RATIO = screenWidth/RATIO;
	Y_RATIO = screenHeight/RATIO;


	Cell *grid = new Cell[X_RATIO];

	for (int i = 0; i < X_RATIO; i++) {
		grid
	}
	
	

	InitWindow(screenWidth, screenHeight, "raylib [core] example - The Game of Life");



	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(RAYWHITE);





		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}