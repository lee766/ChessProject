#pragma once
#include <iostream>
#include "Bishop.h"
#include "Rook.h"

class Queen : public Rook, public Bishop
{
public:
	Queen(char* type, char color, char currP[3]);
};