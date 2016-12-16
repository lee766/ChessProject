#pragma once
#include <iostream>
#include "Piece.h"

class Bishop : public Piece
{
public:
	Bishop(char* type, char color, char currP[3]);
};