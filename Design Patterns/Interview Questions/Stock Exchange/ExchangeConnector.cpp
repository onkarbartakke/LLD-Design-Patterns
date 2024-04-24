#pragma once
#include "common.hpp"
#include "Order.cpp"
class ExchangeConnector
{
    private:
    ExchangeConnector(){}
    static ExchangeConnector* exchangeConnectorInstance;
    static mutex mtx;

    public:
    static ExchangeConnector* getExchangeConnectorInstance()
    {
        if(exchangeConnectorInstance == NULL)
        {
            mtx.lock();
            if(exchangeConnectorInstance == NULL)
            {
                exchangeConnectorInstance = new ExchangeConnector();
            }
            mtx.unlock();
        }

        return exchangeConnectorInstance;
    }

    static void sendOrderToExchange(string pUserID, Order *pOrder)
    {
        cout<<"Ordered Send to Exchange\n";
    }
};