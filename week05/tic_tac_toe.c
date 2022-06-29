// Function to check whether has won a game of tic tac toe
// Patrick Chambers (z5264081), 28/6/22

#include <stdio.h>

#define SIZE 5

int did_player_win(char player, char board[SIZE][SIZE]);

    int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'o', 'x', 'o', 'o', 'o'},
        {'X', ' ', ' ', ' ', 'O'},
        };

    char x_wins_board[SIZE][SIZE] = {
        {'X', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', ' ', 'X', ' ', ' '},
        {'O', 'X', 'O', 'X', 'O'},
        {' ', 'X', ' ', ' ', 'X'},
        };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', x_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', x_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Check whether the player has won the game
// Takes a char representing a player and the 2D array representing the board
// Returns 1 if this player has won, returns 0 otherwise
int did_player_win(char player, char board[SIZE][SIZE]) {

    // Check whether a player has gotten a full row
    int player_wins_board = 0;
    
    int row = 0;
    while (row < SIZE) {
        int player_wins_row = 1;
        int col = 0;
        while (col < SIZE) {
            
            if (board[row][col] != player) {
                player_wins_row = 0;
            }
            col++;
        }
        // Check whether player has a full row and therefore won the game
        // If they have, we can return 1 
        if (player_wins_row == 1) {
            return player_wins_row;
        }
        row++;
    }
    

    // TODO: Check whether a player has gotten a full column
    

    // Check whether a player has gotten one of the diagonals
    
    // Check the main diagonal
    int main_diagonal_count = 0;
    int i = 0;
    while (i < SIZE) {
        // On the main diagonal, the row and column indices are the same 
        if (board[i][i] == player) {
            main_diagonal_count += 1;
        }
    
        i++;
    }
    // If player has got the entire main diagonal, they have won
    if (main_diagonal_count == SIZE) {
        return 1;
    }
    
    // TODO: Checthe reverse diagonal


    // If we reach the end of this function without returning 1, then the 
    // player has not won 
    return 0;
}
    
