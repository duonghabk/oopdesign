#include "VendingMachineImpl.h"

VendingMachineImpl::VendingMachineImpl()
{
    initialize();
}
void VendingMachineImpl::initialize()
{

}
long VendingMachineImpl::seclectItemAndGetPrice(Item item)
{
    if(itemInventory.hasItem(item))
    {
        currentItem = item;
        return currentItem.getPrice(0);
    }
   throw "Sold Out, Please buy another item";
}
void VendingMachineImpl::insertCoin(Coin coin)
{
    currentBalance += coin;
    cashInventory.add(coin);
}
Item collectItem()

