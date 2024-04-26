#include<iostream>
#include<vector>


using namespace std;

class Meeting;
typedef vector<Meeting> Calender;

class Room
{
    private:
    string name;
    Calender calender;

    public:
    Room(string pName)
    {
        this->name = pName;
    }

    string getName()
    {
        return this->name;
    }

    bool book(int start, int end)
    {
        for(Meeting meeting : calender)
        {
            //to be implemented
            if(meeting.getStart() < end && start < meeting.getEnd())
                return false;
        }

        Meeting meeting(start, end, *this);
        calender.push_back(meeting);
        return true;
    }
};

class Meeting
{
    private:
    int start, end;
    Room room;

    public:
    Meeting(int pStart, int pEnd, Room pRoom): room(pRoom)
    {
        this->start = pStart;
        this->end = pEnd;
    }

    int getStart()
    {
        return this->start;
    }

    int getEnd()
    {
        return this->end;
    }
};



class Scheduler
{
    private:
    vector<Room>rooms;

    public:
    Scheduler(vector<Room>pRooms)
    {
        this->rooms = pRooms;
    }

    string book(int start, int end)
    {
        for(Room &room : rooms)
        {
            bool flag = room.book(start,end);

            if(flag)
                return room.getName();
        }

        return "No Room Available";
    }

    
};

int main()
{
    cout<<"Hello World\n";
}