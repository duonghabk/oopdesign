#ifndef COIN_H_
#define COIN_H_
#include <iostream>
using namespace std;

class Coin
{
private:
    /* data */
    enum Coin
    {
        PENNY = 1,
        NICKLE = 5,
        DIME = 10,
        QUARTER = 25,
        OTHER = 0
    }
public:
    Coin(/* args */);
    ~Coin();
};

Coin::Coin(/* args */)
{
}

Coin::~Coin()
{
}

#endif