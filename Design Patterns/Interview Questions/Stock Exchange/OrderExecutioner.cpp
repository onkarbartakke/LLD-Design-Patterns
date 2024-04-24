#pragma once
#include "Order.cpp"
#include "ExchangeConnector.cpp"

class OrderExecutioner
{
    public:
    void placeOrder(string userID, Order *order)
    {
        ExchangeConnector *exchangeConnector = ExchangeConnector::getExchangeConnectorInstance(); 
        exchangeConnector->sendOrderToExchange(userID, order);
    }
};