#include "Assignment03.h"
#include <stdio.h>
#include <string.h>

const char* RPSResult(const char* player1Input, const char* player2Input) {  // Fixed parameter type
    if (player1Input == NULL || player2Input == NULL)
        return "Invalid";

    //declare an array of valid moves to compare later
    const char* validMoves[] = { "Rock", "Paper", "Scissors" };
    //states for valid inputs
    int player1Valid = 0;
    int player2Valid = 0;

    //loop through valid moves and compare inputs
    for (int i = 0; i < 3; i++) {
        if (strcmp(player1Input, validMoves[i]) == 0) {
            player1Valid = 1;
        }
        if (strcmp(player2Input, validMoves[i]) == 0) {
            player2Valid = 1;
        }
    }

    // check validity
    if (!player1Valid || !player2Valid)
        return "Invalid";

    //check draw state
    if (strcmp(player1Input, player2Input) == 0)
        return "Draw";

    // Check winning conditions for Player 1
    if ((strcmp(player1Input, "Rock") == 0 && strcmp(player2Input, "Scissors") == 0) ||
        (strcmp(player1Input, "Paper") == 0 && strcmp(player2Input, "Rock") == 0) ||
        (strcmp(player1Input, "Scissors") == 0 && strcmp(player2Input, "Paper") == 0)) {
        return "Player1";
    }

    // If it's not a draw and Player 1 didn't win, Player 2 must have won
    return "Player2";
}