#include "Rider.cpp"

using namespace std;


class RiderManager
{
    private:
    RiderManager(){}
    static RiderManager* riderManagerInstance;
    static mutex mtx;
    unordered_map<string, Rider*>ridersMap;

    public:
    static RiderManager* getRiderManager()
    {
        if(riderManagerInstance == NULL)
        {
            mtx.lock();
            if(riderManagerInstance == NULL)
            {
                riderManagerInstance = new RiderManager();
            }
            mtx.unlock();
        }

        return riderManagerInstance;
    }

    void addRider(string pRiderID,  Rider *pRider)
    {
        ridersMap[pRiderID] = pRider;
    }

    Rider* getRider(string pRiderID)
    {
        return ridersMap[pRiderID];
    }

    unordered_map<string, Rider*> getRiderMap()
    {
        return this->ridersMap;
    }
};