#include "Piece.cpp"

using namespace std;

class Board
{
    private:
    int size;
    vector<vector<Piece*>>board;
    int numOfCurrentOccupiedCells;

    public:
    Board(int size)
    {
        board =  vector<vector<Piece*>>(size , vector<Piece*>(size, NULL));
        numOfCurrentOccupiedCells = 0;
    }

    void printBoard()
    {
        cout<<"\n\n";

        for(int i = 0 ; i < 2*size + 1 ; i++)
        cout<<"*";

        cout<<"\n";

        for(int i = 0 ; i < size ; i++)
        {
            cout<<"*";
            for(int j = 0 ; j < size ; j++)
            {
                if(board[i][j] == NULL)
                cout<<" |";
                else if(board[i][j]->getPieceType() == PieceType::X)
                cout<<"X|";
                else 
                cout<<"O|";
            }

             cout<<"*\n";

            for(int i = 0 ; i < 2*size + 1 ; i++)
            cout<<"*";

            cout<<"\n";
        }

    }

    bool isBoardOccupied()
    {
        if(numOfCurrentOccupiedCells < size*size)
        return false;
        else
        return true;
    }

    
};