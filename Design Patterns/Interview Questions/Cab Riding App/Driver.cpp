#include "common.cpp"

class Driver
{
    private:
    string driverID;
    string driverName;
    string driverRating;

    public:
    Driver(string pDriverID, string pDriverName, string pDriverRating)
    {
        this->driverID = pDriverID;
        this->driverName = pDriverName;
        this->driverRating = pDriverRating;
    }

    string getDriverID()
    {
        return this->driverID;
    }

    string getDriverName()
    {
        return this->driverName;
    }

    string getDriverRating()
    {
        return this->driverRating;
    }
};