#include "TripMetaData"

class DriverMatchingStrategy
{
    public:
    virtual Driver* matchDriver(TripMetaData* tripMetaData) = 0;
};