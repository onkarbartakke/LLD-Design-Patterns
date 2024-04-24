#pragma once
#include "User.cpp"

class System
{
    private:
    static unordered_map<string, User*>users;

    public:
    static void AddUser(string pUserID, User *pUser)
    {
        users[pUserID] = pUser;
    }

    static User* getUser(string pUserID)
    {
        return users[pUserID];
    }

};