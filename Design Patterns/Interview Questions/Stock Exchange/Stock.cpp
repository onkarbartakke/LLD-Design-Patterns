#pragma once
#include "common.hpp"

class Stock
{
    private:
    EXCHANGE exchange;
    string name;
    double price;

    public:
    Stock(string pName, double pPrice, EXCHANGE pExchange)
    {
        this->exchange = pExchange;
        this->price = pPrice;
        this->name = pName;
    }
};