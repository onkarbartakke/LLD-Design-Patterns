#pragma once
#include<bits/stdc++.h>
using namespace std;

enum  TXN_TYPE
{
    BUY,
    SELL
};

enum  ORDER_TYPE
{
    MARKET,
    LIMIT
};

enum  EXCHANGE
{
    NSE,
    BSE
};

enum  ORDER_STATUS
{
    OPEN,
    PARTIALLY_DONE,
    DONE,
    CANCELLED
};