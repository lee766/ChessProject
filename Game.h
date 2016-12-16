#pragma once
#include <iostream>

class Game
{
	public:
		Game(string board);
		bool chessCheck(); // For the end of the project.
		string getBoard(); // returns the board.
		string getLastMove(); // returns the last move.
		void playMove(); // sends to the frontend the code between 0 - 8.
		void switchTurn();
		
	private:
		string lastMove;
		string _board;
		char _turn;
};
