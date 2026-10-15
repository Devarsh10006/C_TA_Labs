#include "stdio.h"
#include "stdlib.h"
#include "time.h"

char board[9] = {'1','2','3','4','5','6','7','8','9'};

void displayBoard()
{
    printf("\n");
    printf(" %c | %c | %c\n", board[0], board[1], board[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[3], board[4], board[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[6], board[7], board[8]);
    printf("\n");
}

int checkWinner(char mark)
{
    int win[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8},
        {0,3,6}, {1,4,7}, {2,5,8},
        {0,4,8}, {2,4,6}
    };

    int i;

    for (i = 0; i < 8; i++)
    {
        if (board[win[i][0]] == mark &&
            board[win[i][1]] == mark &&
            board[win[i][2]] == mark)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int move, i, filled = 0;

    srand((unsigned int)time(NULL));

    printf("===== TIC-TAC-TOE GAME =====\n");
    printf("Computer: O\n");
    printf("User: X\n");

    displayBoard();

    while (filled < 9)
    {
        /* Computer's turn */
        printf("Computer's turn (O)...\n");

        int available[9];
        int count = 0;

        for (i = 0; i < 9; i++)
        {
            if (board[i] != 'X' && board[i] != 'O')
            {
                available[count] = i;
                count++;
            }
        }

        if (count == 0)
            break;

        int choice = available[rand() % count];
        board[choice] = 'O';
        filled++;

        displayBoard();

        if (checkWinner('O'))
        {
            printf("Computer wins!\n");
            return 0;
        }

        if (filled == 9)
            break;

        /* User's turn */
        while (1)
        {
            printf("Enter your move (1-9): ");

            if (scanf("%d", &move) != 1)
            {
                printf("Invalid input! Enter a number from 1 to 9.\n");

                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF)
                {
                }

                continue;
            }

            if (move < 1 || move > 9)
            {
                printf("Invalid move! Choose a number from 1 to 9.\n");
                continue;
            }

            if (board[move - 1] == 'X' ||
                board[move - 1] == 'O')
            {
                printf("This position is already occupied! Try again.\n");
                continue;
            }

            break;
        }

        board[move - 1] = 'X';
        filled++;

        displayBoard();

        if (checkWinner('X'))
        {
            printf("Congratulations! You win!\n");
            return 0;
        }
    }

    printf("Game Draw!\n");

    return 0;
}