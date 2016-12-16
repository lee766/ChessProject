#pragma once
#include <iostream>
#include "Piece.h"

class Knight : public Piece
{
public:
	Knight(char* type, char color, char currP[3]);
};