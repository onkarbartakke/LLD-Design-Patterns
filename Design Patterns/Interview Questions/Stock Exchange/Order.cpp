#pragma once
#include "common.hpp"
#include "Stock.cpp"
class Order
{
    private:
    TXN_TYPE txnType;
    ORDER_TYPE orderType;
    double price;
    int qty;
    Stock* stock;
    EXCHANGE exchange;

    // transactions
    // ORDER_TYPE status
    //time

    public:
    Order(TXN_TYPE pTxnType, ORDER_TYPE pOrderType, double pPrice, int pQty, Stock *pStock, EXCHANGE pExchange) :
    txnType(pTxnType) , orderType(pOrderType) , price(pPrice) , qty(pQty) , stock(pStock) , exchange(pExchange) {}

};