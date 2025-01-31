#include <stdio.h>

// Function to initialize the game board
void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to print the game board
void printBoard(char board[3][3]) {
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}

// Function to check if a player has won
int checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1; // Horizontal win
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1; // Vertical win
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1; // Diagonal win (top-left to bottom-right)
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1; // Diagonal win (top-right to bottom-left)
    }
    return 0;
}

// Function to check if the game is a draw
int checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // The game is not a draw
            }
        }
    }
    return 1; // The game is a draw
}

int main() {
    char board[3][3];
    char currentPlayer = 'X';
    int row, col;

    initializeBoard(board);

    printf("Welcome to Tic Tac Toe!\n");

    while (1) {
        printf("\n");
        printBoard(board);

        // Get player input
        printf("Player %c, enter row (0-2) and column (0-2) separated by a space: ", currentPlayer);
        scanf("%d %d", &row, &col);

        // Check if the input is valid
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Update the board
        board[row][col] = currentPlayer;

        // Check for a win
        if (checkWin(board, currentPlayer)) {
            printf("\nPlayer %c wins!\n", currentPlayer);
            printBoard(board);
            break;
        }

        // Check for a draw
        if (checkDraw(board)) {
            printf("\nThe game is a draw!\n");
            printBoard(board);
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
