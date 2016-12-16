#pragma once
#include <iostream>

class Piece
{
	public:
		Piece(char* type, char color, char* currP);
		virtual void move(char* action) = 0;

	protected:
		char* _type;
		char _color;
		char* _currP;
		virtual int checkMove() const = 0;
		void updateCurrP(char* currP);
};