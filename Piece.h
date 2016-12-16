#pragma once
#include <iostream>

class Piece
{
	public:
		Piece(char* type, char* currP);
		
	protected:
		char* _type;
		char* _currP;
		int onBoard(char* request);
		int validSource(char* request);
		int emptyDest(char* request);
		void move(char* action);
		virtual int checkMove() const = 0;
		void updateCurrP(char* currP);
};
