
// connect four!

#include <iostream>
using namespace std;

#include "ConnectFour.h"

int main()
{
	ConnectFour cf;
	cf.addPieceToColumn(1, 1);
	cf.addPieceToColumn(2, 2);
	cf.printBoard();
	
    return 0;
}

