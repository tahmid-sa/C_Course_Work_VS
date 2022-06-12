#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <cstdbool>

int getPlace(bool player1Turn);
void displayBoard(char board[9]);

int getPlace(bool player1Turn) {
	int place = 0;

	if (player1Turn == true) {
		printf("Player 1, enter the place number : ");
		player1Turn = false;
	}
	else {
		printf("Player 2, enter the place number : ");
		player1Turn = true;
	}

	scanf("%d", &place);

	return place;
}


void displayBoard(char board[9]) {
	for (int place = 0; place < 9; place++) {
		printf("%c  ", board[place]);

		if (place == 2 || place == 5 || place == 8) {
			printf("\n");
		}
	}
}

int main() {
	char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	bool playerWins = false, player1Turn = true;

	while (playerWins == false) {
		int place = getPlace(player1Turn);
		char symbol = 'X';

		if (player1Turn == true) {
			symbol = 'X';
		}
		else {
			symbol = 'O';
		}

		if (place == 0) {
			board[0] = symbol;
		}
		else if (place == 1) {
			board[1] = symbol;
		}
		else if (place == 2) {
			board[2] = symbol;
		}
		else if (place == 3) {
			board[3] = symbol;
		}
		else if (place == 4) {
			board[4] = symbol;
		}
		else if (place == 5) {
			board[5] = symbol;
		}
		else if (place == 6) {
			board[6] = symbol;
		}
		else if (place == 7) {
			board[7] = symbol;
		}
		else if (place == 8) {
			board[8] = symbol;
		}

		displayBoard(board);
	}


	return 0;
}