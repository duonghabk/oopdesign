#include <MacDonald.h>

MacDonald::MacDonald()
{
    //
}

void MacDonald::setupMacDolGame()
{
    cout << "What's is your name?" << endl;
    cout << ">>> ";
    G.clearInput();
    getline(cin, FarmerName);
    G.cls();

    G.HeaderContent("MacDonal Game");
    cout << "Hello \"" << FarmerName << "\"!" << endl;
    cout << "Let's start improve your farm with "<< MacDold_Resource.moneystart <<"$ and "<< MacDold_Resource.foodstart <<" unit food!\n" << endl;
    cout << endl;
    G.wait();

    G.HeaderContent("MacDonal Game");
    MacDold_Resource.money = MacDold_Resource.moneystart;
    MacDold_Resource.food = MacDold_Resource.foodstart;
}

void MacDonald::MacDold_buyAnimal()
{
    Mac_Factory.PrintAnimalDetails();
    int X = G.chooseNumber(1,4);
    thisAnimal = Mac_Factory.get_animalInfo(X);
    int price = thisAnimal->Buyprice();
    MacDold_Resource.money = MacDold_Resource.money - price;
    //Mac_Factory.OurAnimal.push_back(Mac_Factory.set_animalType(X));
    Animal* newAnimal = Mac_Factory.set_animalType(X);
    Mac_Factory.MacDold_Animal.push_back(newAnimal);
    SndSubject.Add(newAnimal);
    G.wait(1);
}

void MacDonald::MacDold_buyfood()
{
    G.clearCache();
    cout << "How many food you want to buy? (min 0, max 200)" << endl;
    int foodvalue =  G.chooseNumber(1,200);
    if ((foodvalue*MacDold_Resource.foodprice) > MacDold_Resource.money)
    {
        cout << "You don't have enough money!" << endl;
        G.wait(1);
    }
    else
    {
        MacDold_Resource.money = MacDold_Resource.money - foodvalue*MacDold_Resource.foodprice;
        MacDold_Resource.food = MacDold_Resource.food + foodvalue;
    }
}

void MacDonald::MacDold_feed()
{
    thisAnimal = Mac_Factory.findAnimal();
    int food_need = thisAnimal->Food_Need();
    if (food_need > MacDold_Resource.food)
    {
        cout << "You don't have enough food!" << endl;
        G.wait();
    }
    else
    {
        thisAnimal->Eat();
        MacDold_Resource.food = MacDold_Resource.food - food_need;
    }
}

void MacDonald::reportAll()
{
    cout << setw(30) << left << "Name" << "\t|Type" << "\t|Age" << "\t|Weight" << "\t|Sell price" << "\t|Happy\t|" << endl;
    list <Animal*> :: iterator it;
    for(it = Mac_Factory.MacDold_Animal.begin(); it != Mac_Factory.MacDold_Animal.end(); ++it)
        {
            thisAnimal = *it;
            string animalName = thisAnimal->getName();
            string animalType = thisAnimal->get_type();
            int Age = thisAnimal->Age();
            int Weight = thisAnimal->Weight();
            int SellPrice = thisAnimal->Sellprice();
            int Happy = thisAnimal->Happy();

            cout << setw(30) << left << animalName << "\t|";
            cout << animalType << "\t|";
            cout << Age << "\t|";
            cout << Weight << "\t|";
            cout << SellPrice << "\t\t|";
            cout << Happy << "\t|";

            cout << endl;
        }
}

void MacDonald::MacDold_NextDayState()
{
    int daySound = 0, sound = 0;
    bool live;
    Animal* sampleAnimal;
    list <Animal*> :: iterator it;
    for(it = Mac_Factory.MacDold_Animal.begin(); it != Mac_Factory.MacDold_Animal.end(); ++it)
        {
            sampleAnimal = *it;
            sampleAnimal->Grow();
            live = sampleAnimal->Die();
            if (live == true)
            {
                _Mac_Factory_.push_back(sampleAnimal);
            }
            else
            {
                sound = sampleAnimal->Sounds();
                daySound = daySound + sound;
                sampleAnimal->update(daySound);
            }
        }
    Mac_Factory.MacDold_Animal.clear();
    Mac_Factory.MacDold_Animal.swap(_Mac_Factory_);
    _Mac_Factory_.clear();
    SndSubject.sAnimalOb = Mac_Factory.MacDold_Animal;
    SndSubject.Notify(daySound);
}
