#include<bits/stdc++.h>

using namespace std;

enum PieceType { X, O};

class Piece
{
    private:
    PieceType pieceType;

    public:
    Piece(PieceType pieceType_)
    {
        this->pieceType = pieceType_;
    }

    void setPieceType(PieceType pieceType_)
    {
        this->pieceType = pieceType_;
    }

    PieceType getPieceType()
    {
        return this->pieceType;
    }
};


class PieceX : public Piece
{
    public:
    PieceX() : Piece(PieceType::X){}
    
};

class PieceO : public Piece
{
    public:
    PieceO() : Piece(PieceType::O){}
};



