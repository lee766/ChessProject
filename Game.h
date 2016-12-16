#pragma once
#include <iostream>

class Game
{
	public:
		Game(char* board);
		bool chessCheck(); // For the end of the project.
		char* getBoard(); // returns the board.
		string getLastMove(); // returns the last move.
		void playMove(); // sends to the frontend the code between 0 - 8.
		

	private:
		char* lastMove;
		char* _board;
		char _turn;
};
