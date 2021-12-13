#ifndef VENDINGMACHINE_H_
#define VENDINGMACHINE_H_


#include <iostream>
#include <list>
#include "Item.h"
using namespace std;
class VendingMachine
{
private:
    /* data */
public:
    VendingMachine(/* args */);
    ~VendingMachine();
    virtual long seclectItemAndGetPrice(Item item) = 0;
    virtual void insertCoin(Coin coin) = 0;
    list<Coin> refund();
    //Bucket<Item, List<Coin>> collectItemAndChange();
    void reset();
};

#endif

