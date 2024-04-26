#pragma once
#include "Order.cpp"
#include "ExchangeConnector.cpp"


class OrderExecutioner
{
    public:
    void placeOrder(string userID, Order *order)
    {
        ExchangeConnector *exchangeConnector = ExchangeConnector::getExchangeConnectorInstance();
        // Logger *logger2 = Logger::getLogger()
        exchangeConnector->sendOrderToExchange(userID, order);
    }
};