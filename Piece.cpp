#include <iostream>
#include "Piece.h"

Piece::Piece(char* type, char color, char* currP)
{
	strcpy_s(this->_type, 6, type);
	strcpy_s(this->_currP, 3, currP);
	this->_color = color;
}

void Piece::updateCurrP(char* currP)
{

}