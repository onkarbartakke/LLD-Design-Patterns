#include "TripMetaData"

class PricingStrategy
{
    public:
	virtual double calculatePrice(TripMetaData* pTripMetaData) = 0;
};