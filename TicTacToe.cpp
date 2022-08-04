#include <iostream>
using namespace std;

// Note for Grading: The row and column numbers begin at 0 and end at 2

void print_state(string game_state[3][3], int rows, int cols)
{
    for (int i = 0; i < 3; i++)
    {
        cout << game_state[i][0] << " | " << game_state[i][1] << " | " << game_state[i][2] << endl;
        cout << "---------" << endl;
    }
}

void take_turn(string game_state[3][3], int rows, int cols, string XO)
{
    cout << "Please take your turn. Enter row # first (0, 1, 2), then column #(0, 1, 2):  " << endl;
    cin >> rows >> cols;
    while (!(rows < 3 && cols < 3) || game_state[rows][cols] != " ")
    {
        cout << "Invalid Move, please try again: " << endl;
        cin >> rows >> cols;
    }
    game_state[rows][cols] = XO;
}

bool if_win(string game_state[3][3], int rows, int cols, string XO)
{
    for (int i = 0; i < 3; i++)
    {
        if (game_state[i][0] != " " && game_state[i][0] == game_state[i][1] && game_state[i][1] == game_state[i][2])
        {
            return true;
        }
        if (game_state[0][i] != " " && game_state[0][i] == game_state[1][i] && game_state[1][i] == game_state[2][i])
        {
            return true;
        }
    }
    if (game_state[0][0] != " " && game_state[0][0] == game_state[1][1] && game_state[1][1] == game_state[2][2])
    {
        return true;
    }
    else if (game_state[0][2] != " " && game_state[0][2] == game_state[1][1] && game_state[1][1] == game_state[2][0])
    {
        return true;
    }
    return false;
}

int main()
{
    int rows;
    int cols;
    string XO;
    string game_state[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            game_state[i][j] = " ";
        }
    }
    cout << "Welcome to Tic Tac Toe!" << endl;
    print_state(game_state, rows, cols);

    bool b = true;
    bool q = true;
    int i=1; 
    while (q && i<10)
    {
        i++;
        if (b)
        {
            take_turn(game_state, rows, cols, "X");
        }
        else
        {
            take_turn(game_state, rows, cols, "O");
        }
        print_state(game_state, rows, cols);

        if (if_win(game_state, rows, cols, "X") && b)
        {
            cout << "We Have a Winner!!! Congratulations Player 1!" << endl;
            print_state(game_state, rows, cols);
            q = !q;
        }
        else if(if_win(game_state, rows, cols, "O") && !b)
        {
            cout << "We Have a Winner!!! Congratulations Player 2!" << endl;
            print_state(game_state, rows, cols);
            q = !q;
        }
        b = !b;
    }
    if(i>=10)
    {
        cout << "It's a Tie!!!" << endl;
        q=!q; 
    }
    return 0;
}

