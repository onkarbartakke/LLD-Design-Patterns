#include "common.hpp"
#include "User.cpp"
#include "OrderManager.cpp"
int main()
{
    User *user = new User("12345678");
    Stock *stock = new Stock("TCS", 1000, EXCHANGE::NSE);

    Order *order = new Order(TXN_TYPE::BUY, ORDER_TYPE::LIMIT, 1100, 20, stock, EXCHANGE::NSE);

    OrderManager *orderManager =  new OrderManager();
    orderManager->PlaceOrder("12345678", order);

    return 0;
}