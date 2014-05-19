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
	
	player1sTurn = true;
	
	printBoard();
}

void ConnectFour::takeTurn()
{
	int colToAdd = 0;
	
	cout << endl;
	cout << "Enter Column: ";
	cin >> colToAdd;
	cout << endl;
	
	if (player1sTurn)
	{
		addPieceToColumn(player1, colToAdd);
	}
	else
	{
		addPieceToColumn(player2, colToAdd);
	}
	player1sTurn = !player1sTurn;
	
	printBoard();
}

void ConnectFour::printBoard()
{
	cout << " --------------- " << endl;
	
	for(int r=0;r<6;r++)
	{
		cout << "| ";
		
		for(int c=0;c<7;c++)
		{
			int val = board[5-r][c];
			
			if (val == 0)
			{
				cout << " ";
			}
			else if (val == 1)
			{
				cout << "X";
			}
			else
			{
				cout << "O";
			}
			cout << " ";
		}
		
		cout << "|" << endl;
	}
	
	cout << " --------------- " << endl;
	cout << "  0 1 2 3 4 5 6  " << endl;
	
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
















