#pragma once
#include <iostream>
#include "Piece.h"

class Pawn : public Piece
{
public:
	Pawn(char* type, char color, char currP[3]);
}; 
