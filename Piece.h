#pragma once
#include <iostream>

class Piece
{
	public:
		Piece(char* type, char color, char currP[3]);
		virtual int checkMove() const = 0;
		virtual void move(char* action);

	protected:
		char* _type;
		char _color;
		char _currP[3];
};
