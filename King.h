#pragma once
#include <iostream>
#include "Piece.h"

class King : public Piece
{
	public:
		King(char* type, char color, char currP[3]);
};