#include<bits/stdc++.h>

using namespace std;

class SortStrategy
{
    public:
    virtual void sort(vector<string>&data) = 0;
};

class PriceSortStrategy : public SortStrategy
{
    public:
    void sort(vector<string>&data)
    {
        cout<<"Sorting on base of prices\n";
    }
};

class DurationSortStrategy : public SortStrategy
{
    public:
    void sort(vector<string>&data)
    {
        cout<<"Sorting on base of Duration\n";
    }
};

class AirLineSortStrategy : public SortStrategy
{
    private:
    string preferredAirline;
    public:
    void sort(vector<string>&data)
    {
        cout<<"Sorting on base of prefered Airline "<<preferredAirline<<" \n";
    }

    AirLineSortStrategy(string preferedAirLine_)
    {
        this->preferredAirline = preferedAirLine_;
    }
};

//Context Class
class TravelBookingApp
{
    private:
    SortStrategy *sortStrategy;

    public:
    void setSortStrategy(SortStrategy *sortStrategy_)
    {
        this->sortStrategy = sortStrategy_;
    }

    void sortFlights(vector<string>&flights)
    {
        this->sortStrategy->sort(flights);
    }
};

int main()
{
    TravelBookingApp app;

    vector<string>flights;
    flights.push_back("Flight A (Price: $500, Duration: 2h)");
    flights.push_back("Flight B (Price: $300, Duration: 3h)");
    flights.push_back("Flight C (Price: $400, Duration: 1h)");
    
    app.setSortStrategy(new PriceSortStrategy());
    app.sortFlights(flights);

    app.setSortStrategy(new DurationSortStrategy());
    app.sortFlights(flights);

    app.setSortStrategy(new AirLineSortStrategy("AirLine AIR_INDIA"));
    app.sortFlights(flights);
}