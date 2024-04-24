#include "Driver.cpp"

class DriverManager
{
    private:
    DriverManager(){}
    static DriverManager* driverManagerInstance;
    static mutex mtx;

    unordered_map<string, Driver*>driverMap;

    public:
    static DriverManager* getDriverManager()
    {
        if(driverManagerInstance == NULL)
        {
            mtx.lock();
            if(driverManagerInstance == NULL)
            {
                driverManagerInstance = new DriverManager();
            }
            mtx.unlock();
        }

        return driverManagerInstance;
    }

    void addDriver(string pDriverID, Driver *pDriver)
    {
        driverMap[pDriverID] = pDriver;
    }

    Driver* getDriver(string pDriverID)
    {
        return driverMap[pDriverID];
    }

    unordered_map<string, Driver*> getDriverMap()
    {
        return this->driverMap;
    }
};