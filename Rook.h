#pragma once
#include <iostream>
#include "Piece.h"

class Rook : public Piece
{
	public:
		Rook(char* type, char color, char currP[3]);
};