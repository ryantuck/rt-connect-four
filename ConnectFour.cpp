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
