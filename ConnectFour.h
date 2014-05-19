//
//  ConnectFour.h
//  rummy
//
//  Created by Ryan Tuck on 5/18/14.
//  Copyright (c) 2014 Ryan Tuck. All rights reserved.
//

#ifndef __rummy__ConnectFour__
#define __rummy__ConnectFour__

#include <iostream>
using namespace std;

class ConnectFour
{
public:
	ConnectFour();
	void printBoard();
	
	//member variables
	int board[6][7];
	bool player1sTurn;
	
	int player1 = 1;
	int player2 = 2;
	
	void addPieceToColumn(int player, int col);
	
	bool canAddToColumn(int col);
	int piecesInColumn(int col);
	
	void takeTurn();
	
};



#endif /* defined(__rummy__ConnectFour__) */
