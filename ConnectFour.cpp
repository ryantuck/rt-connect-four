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
	for(int n=0; n<6; n++)
		for(int m = 0; m < 7; m++)
			board[n][m] = 0;
	
	printBoard();
}

void ConnectFour::printBoard()
{
	for(int n=0; n<6; n++)
	{
		cout << endl;
		for(int m = 0; m < 7; m++)
			cout<< board[n][m];
	}
	cout << endl;
}