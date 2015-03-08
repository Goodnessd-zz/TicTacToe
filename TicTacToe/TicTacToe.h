#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <iostream>

using namespace std;

class tictactoe{
private:
	char board[3][3];
	
public:
	//constructor
	tictactoe()
	{
		board = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	}
	void print()
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
				cout << *(*(ptr + i) + j);
		}
	}
};

#endif;