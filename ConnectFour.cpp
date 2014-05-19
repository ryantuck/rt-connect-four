//
//  ConnectFour.cpp
//  rummy
//
//  Created by Ryan Tuck on 5/18/14.
//  Copyright (c) 2014 Ryan Tuck. All rights reserved.
//

#include "ConnectFour.h"



ConnectFour::ConnectFour()
{
	for(int r=0;r<6;r++)
		for(int c=0;c<7;c++)
			board[r][c] = 0;
	
	printBoard();
}

void ConnectFour::printBoard()
{
	for(int r=0;r<6;r++)
	{
		for(int c=0;c<7;c++)
			cout<< board[5-r][c] << " ";
		
		cout << endl;
	}
	cout << endl;
}

void ConnectFour::addPieceToColumn(int player, int col)
{
	if (canAddToColumn(col))
	{
		board[piecesInColumn(col)][col] = player;
	}
}

bool ConnectFour::canAddToColumn(int col)
{
	bool check = true;
	
	if (piecesInColumn(col) == 6) check = false;
	
	return check;
}

int ConnectFour::piecesInColumn(int col)
{
	int count = 0;
	
	for (int n=0;n<6;n++)
	{
		if (board[n][col] != 0)
		{
			count++;
		}
	}
	
	return count;
}
















