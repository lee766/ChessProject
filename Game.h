#pragma once
#include <iostream>

class Game
{
	public:
		Game(char board[1024]);
		void updateBoard(char newBoard[1024]);
		bool chessCheck();

	private:
		char _board[1024];
		char _turn;
};