#include<iostream>
using namespace std;


bool isWin(char game[3][3]) {

	bool win = false;

	if (game[0][0] == game[0][1] && game[0][1] == game[0][2] && (game[0][0] == 'X' || game[0][0] == 'O')) win = true;

	if (game[1][0] == game[1][1] && game[1][1] == game[1][2] && (game[1][0] == 'X' || game[1][0] == 'O')) win = true;

	if (game[2][0] == game[2][1] && game[2][1] == game[2][2] && (game[2][0] == 'X' || game[2][0] == 'O')) win = true;

	// column

	if (game[0][0] == game[1][0] && game[1][0] == game[2][0] && (game[0][0] == 'X' || game[0][0] == 'O')) win = true;

	if (game[0][1] == game[1][1] && game[1][1] == game[2][1] && (game[0][1] == 'X' || game[0][1] == 'O')) win = true;

	if (game[0][2] == game[1][2] && game[1][2] == game[2][2] && (game[0][2] == 'X' || game[0][2] == 'O')) win = true;

	// diagonal

	if (game[0][0] == game[1][1] && game[1][1] == game[2][2] && (game[0][0] == 'X' || game[0][0] == 'O')) win = true;

	if (game[0][2] == game[1][1] && game[1][1] == game[s2][0] && (game[0][2] == 'X' || game[0][2] == 'O')) win = true;//return true

	return win;//return false

}



int main() {

	int i, j;

	char game[3][3] = { ' ' }; // Tic-tac-toe
	for (int x = 0; x < 3; x++)
		for (int y = 0; y < 3; y++)
			game[x][y] = ' ';

	//char player1 = 'X';

	//char player2 = 'O';

	bool turn = true; // false for player 1's turn, true for player 2's turn. Player 1 first.

	cout << "X = Player 1" << endl << "O = Player 2" << endl;
	int n = 0;

	while(n<9){

		turn = !turn;  // use the not-operator to change true to false or false to true.

		if (turn == false)

		    cout << "Player 1: ";

		else

			cout << "Player 2: ";

		cout << "Which cell to mark? i:[0..2], j:[0..2]: ";

		cin >> i >> j;
		if (i > 2 || i < 0)
		{
			cout << "input error" << endl;
			break;
		}
		if (j > 2 || j < 0)
		{
			cout << "input error" << endl;
			break;
		}

		if (turn == false&&game[i][j]==' ')

			game[i][j] = 'X';

		else if(turn == true && game[i][j] == ' ')

			game[i][j] = 'O';
		else
		{
			cout << "occupy" << endl;
			break;
		}

		if (isWin(game)) {

			cout << "Win!" << endl;

			break; // need to terminate the problem

		}
		
		if (n==8) // all celles with i=0 to 2 have been inputted above but no winner yet
			cout << "Tie!" << endl;
		n++;


	}

	


	// show the game to console

	cout << game[0][0] << " " << game[0][1] << " " << game[0][2] << endl;

	cout << game[1][0] << " " << game[1][1] << " " << game[1][2] << endl;

	cout << game[2][0] << " " << game[2][1] << " " << game[2][2] << endl;

	return 0;

}
