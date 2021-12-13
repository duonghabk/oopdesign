#ifndef VENDINGMACHINEIMPL_H_
#define VENDINGMACHINEIMPL_H_
#include <iostream>
#include "VendingMachine.h"
#include "Item.h"
#include "Inventory.h"
using namespace std;

class VendingMachineImpl : public VendingMachine
{
private:
    /* data */
    Inventory<Coin> cashInventory ;
    Inventory<Item> itemInventory ;
    long totalSales;
    Item currentItem;
    long currentBalance;


public:
    VendingMachineImpl(/* args */);
    ~VendingMachineImpl();
    void initialize();
    long seclectItemAndGetPrice(Item item);
    void insertCoin(Coin coin);
    
};


#endif