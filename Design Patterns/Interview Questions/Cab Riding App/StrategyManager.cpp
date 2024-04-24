#include "common.cpp"

class StrategeManager
{
    private:
    StrategeManager(){}
    static StrategeManager* strategeyManagerInstance;
    static mutex mtx;

    public:
    StrategeManager* getStrategyManagerInstance()
    {
        if(strategeyManagerInstance == NULL)
        {
            mtx.lock();
            if(strategeyManagerInstance == NULL)
            {
                strategeyManagerInstance = new StrategeManager();
            }
            mtx.unlock();
        }

        return strategeyManagerInstance;
    }

    PricingStrategy* determinePricingStrategy(TripMetaData *tripMetaData)
    {
        cout << "Based on location and other factors, setting pricing strategy" << endl;
	    return new DefaultPricingStrategy();
    }

    DriverMatchingStrategy* determineMatchingStrategy(TripMetaData* metaData) {
	cout << "Based on location and other factors, setting matching strategy" << endl;
	return new LeastTimeBasedMatchingStrategy();
};