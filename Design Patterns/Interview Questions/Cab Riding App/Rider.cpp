#include "common.cpp"

using namespace std;

class Rider
{
    private:
    string riderID;
    string riderName;
    string riderRating;

    public:

    Rider(string pRiderID, string pRiderName, string pRiderRating)
    {
        this->riderID = pRiderID;
        this->riderName = pRiderName;
        this->riderRating = pRiderRating;
    }

    string getRiderRating()
    {
        return this->riderRating;
    }

    string getRiderID()
    {
        return this->riderID;
    }

    string getRiderName()
    {
        return this->riderName;
    }

};