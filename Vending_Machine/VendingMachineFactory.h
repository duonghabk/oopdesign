#ifndef VENDINGMACHINEFACTORY_H_
#define VENDINGMACHINEFACTORY_H_
#include <iostream>
#include "VendingMachine.h"
#include "VendingMachineImpl.h"
using namespace std;
class VendingMachineFactory
{

public:
    VendingMachineFactory(/* args */);
    ~VendingMachineFactory();
    VendingMachine* creatVendingMachine()
    {
        return new VendingMachineImpl();
    }
    
};

VendingMachineFactory::VendingMachineFactory(/* args */)
{
    
}

VendingMachineFactory::~VendingMachineFactory()
{
}


#endif
