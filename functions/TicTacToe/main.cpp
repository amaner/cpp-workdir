#include <iostream>
#include <string>
using namespace std;

/* constant declarations */
// rows and columns on the board
const int ROWS = 3;
const int COLS = 3;

/* prototypes for game functions */
// run the game
void runGame();
// initialize the game board
void initGameBoard(string gameBoard[ROWS][COLS]);
// print out the current board status
void printCurrentBoard(string gameBoard[ROWS][COLS]);
// get user move
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]);
// check to see if a cell is already filled
bool cellIsOccupied(int row, int col, string gameBoard[ROWS][COLS]);
// get the winner
string getWinner(string gameBoard[ROWS][COLS]);
// check to see if board is full
bool boardIsFull(string gameBoard[ROWS][COLS]);

int main()
{

    runGame();

    return 0;
}
// run the game
void runGame()
{
    // string to hold winner - can be a space, 'X', 'O', or 'C' (a tie)
    string winner = " ";
    // create the game board - a 2D string array
    string gameBoard[ROWS][COLS];
    // initialize the game board to just spaces
    initGameBoard(gameBoard);
    // print empty game board
    printCurrentBoard(gameBoard);
    // let X start the game
    bool xTurn = true;
    // let's get this party started
    while (winner == " ")
    {
        // let's play
        getUserInput(xTurn, gameBoard);
        printCurrentBoard(gameBoard);
        winner = getWinner(gameBoard);
        xTurn = !xTurn;
    }
    // if we got out of the loop, the winner is either
    // X, O, or C (the tied situation)
    if (winner == "C")
    {
        cout << "Bummer, the game is tied." << endl;
    }
    else if (winner == "X")
    {
        cout << "Congratulations, player X, you win!" << endl;
    }
    else 
    {
        // since we're out of the loop, winner is O
        cout << "Congratulations, player O, you win!" << endl;
    }

}
// initialize the game board
void initGameBoard(string gameBoard[ROWS][COLS])
{
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            gameBoard[i][j] = " ";
        }
    }
}
// print the current board status
void printCurrentBoard(string gameBoard[ROWS][COLS])
{
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            cout << gameBoard[i][j];
            if (j != 2)
            {
                cout << "|";
            }
            else
            {
                cout << endl;
            }
        }
        if (i != 2)
        {
            cout << "-----" << endl;
        }
        else
        {
            cout << endl;
        }
    }
}
// check to see if the board is currently full
bool boardIsFull(string gameBoard[ROWS][COLS])
{
    // assume it is full
    bool isFull = true;
    // loop through the board elements
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            if (gameBoard[i][j] == " ")
            {
                // as soon as an empty slot is encountered,
                // set isFull to false and return false
                // cout << "empty slot encountered" << endl;
                isFull = false;
                return isFull;
            }
        }
    }
    // if we've made it this far, no empty slots were encountered
    // and the board is full
    return isFull;
}
// check to see if a spot is occupied
bool cellIsOccupied(int row, int col, string gameBoard[ROWS][COLS])
{
    bool isOccupied;
    if (gameBoard[row][col] == " ")
    {
        isOccupied = false;
    }
    else
    {
        isOccupied = true;
    }
    return isOccupied;
}
// get the user's input
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS])
{
    bool occupied = true;
    string player = " ";
    int rowIndex, colIndex;
    while (occupied)
    {
        if (xTurn) // it's x turn
        {
            player = "X";
        }
        else // it's o turn
        {
            player = "O";
        }
        cout << "Player " << player << ", enter the row number (0, 1, or 2): " << endl;
        cin >> rowIndex;
        cout << "Player " << player << ", now enter the column index (0, 1, or 2): " << endl;
        cin >> colIndex;
        if (!cellIsOccupied(rowIndex,colIndex,gameBoard))
        {
            // cell is free so we can accept the input
            // currently no error-handling for out of bounds input
            occupied = false;
        }
    }
    // fill the requested slot
    if (xTurn)
    {
        gameBoard[rowIndex][colIndex] = "X";
    }
    else
    {
        gameBoard[rowIndex][colIndex] = "O";
    }
}
// get winner - if there is one
// output can be " " (game is not over), "C" (game over but tied),
// "X" (X wins), or "O" (O wins)
string getWinner(string gameBoard[ROWS][COLS])
{
    string status = " "; // start by assuming game is not over and therefore no winner
    // check for a row win
    string row0 = gameBoard[0][0] + gameBoard[0][1] + gameBoard[0][2];
    string row1 = gameBoard[1][0] + gameBoard[1][1] + gameBoard[1][2];
    string row2 = gameBoard[2][0] + gameBoard[2][1] + gameBoard[2][2];
    if (row0 == "XXX" || row1 == "XXX" || row2 == "XXX")
    {
        status = "X";
        return status;
    }
    if (row0 == "OOO" || row1 == "OOO" || row2 == "OOO")
    {
        status = "O";
        return status;
    }
    // if no row win, check for a col win
    string col0 = gameBoard[0][0] + gameBoard[1][0] + gameBoard[2][0];
    string col1 = gameBoard[0][1] + gameBoard[1][1] + gameBoard[2][1];
    string col2 = gameBoard[0][2] + gameBoard[1][2] + gameBoard[2][2];
    if (col0 == "XXX" || col1 == "XXX" || col2 == "XXX")
    {
        status = "X";
        return status;
    }
    if (col0 == "OOO" || col1 == "OOO" || col2 == "OOO")
    {
        status = "O";
        return status;
    }
    // if no row or col win, check for a diag win
    string mainDiag = gameBoard[0][0] + gameBoard[1][1] + gameBoard[2][2];
    string revDiag = gameBoard[0][2] + gameBoard[1][1] + gameBoard[2][0];
    if (mainDiag == "XXX" || revDiag == "XXX")
    {
        status = "X";
        return status;
    }
    if (mainDiag == "OOO" || revDiag == "OOO")
    {
        status = "O";
        return status;
    }
    // if we've reached this point, either the game is over and tied
    // or we still have no winner and game left to play
    if (boardIsFull(gameBoard))
    {
        status = "C";
    }
    // at this point, either status is "C" or it is " "
    return status;
}