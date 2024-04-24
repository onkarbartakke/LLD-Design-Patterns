#pragma once
#include "OrderValidator.cpp"
#include "OrderExecutioner.cpp"

class OrderManager
{
    OrderValidator *validator;
    OrderExecutioner *executioner;

    public:

    OrderManager()
    {
        validator = new OrderValidator();
        executioner = new OrderExecutioner();
    }

    void PlaceOrder(string userID, Order *order)
    {
        if(validator->ValidateOrder(userID, order))
        {
            executioner->placeOrder(userID, order);
        }
    }
};