/*
Tic - Tac - Toe Game
Write a program that allows two players to play a game of tic - tac - toe.Use a twodimensional
char array with three rows and three columns as the game board.Each
element of the array should be initialized with an asterisk(*).The program should run
a loop that
• Displays the contents of the board array
• Allows player 1 to select a location on the board for an X.The program should ask
the user to enter the row and column number.

Do this problem by creating a class called with tictactoe by using the 2D character array as private 
data and other operations as member functions. Use a print member function for this class such that it prints 
the board after each move. You don’t have to get fancy with the display but show it such that it looks 
to a tic-tac-toe game board. Just use dashes, bars, cross and zero to print the tic-tac-toe.
Also, provide the feature of playing another game unless the player wants to exit.
*/

#include <iostream>
#include "TicTacToe.h"

int main()
{
	tictactoe game;
	game.print();
}
