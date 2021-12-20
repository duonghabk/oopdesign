#include "Animal_Factory.h"

Animal_Factory::Animal_Factory()
{

}

Animal_Factory::~Animal_Factory()
{
    //dtor
}

void Animal_Factory::PrintAnimalDetails()
{
    //Cat
    Factory_Animal = &CatSample;
    cout << "[1] Cat" << endl;
    cout << "\tPrice     : " << CatSample.buyprice << endl;
    cout << "\tLongevity : " << CatSample.longevity << endl;

    //Dog
    Factory_Animal = &DogSample;
    cout << "[2] Dog" << endl;
    cout << "\tPrice     : " << DogSample.buyprice << endl;
    cout << "\tLongevity : " << DogSample.longevity << endl;

    //Duck
    Factory_Animal = &DuckSample;
    cout << "[3] Duck" << endl;
    cout << "\tPrice     : " << DuckSample.buyprice << endl;
    cout << "\tLongevity : " << DuckSample.longevity << endl;

    //Pig
    Factory_Animal = &PigSample;
    cout << "[4] Pig" << endl;
    cout << "\tPrice     : " << PigSample.buyprice << endl;
    cout << "\tLongevity : " << PigSample.longevity << endl;
}

Animal* Animal_Factory::set_animalType(int animatType)
{
    Animal* newAnimal;
    switch (animatType)
    {
        case dog:
            newAnimal = new Dog;
            newAnimal->set_name();
            return newAnimal;
            break;
        case cat:
            newAnimal = new Cat;
            newAnimal->set_name();
            return newAnimal;
            break;
        case duck:
            newAnimal = new Duck;
            newAnimal->set_name();
            return newAnimal;
            break;
        case pig:
            newAnimal = new Pig;
            newAnimal->set_name();
            return newAnimal;
            break;
        default:
            break;
    }
}

Animal* Animal_Factory::get_animalInfo(int animatType)
{
    switch (animatType)
    {
        case dog:
            return &DogSample;
            break;
        case cat:
            return &CatSample;
            break;
        case duck:
            return &DuckSample;
            break;
        case pig:
            return &PigSample;
            break;
        default:
            break;
    }
}

void Animal_Factory::reportAll()
{

}

void Animal_Factory::PrintMacAnimalDetail()
{
    cout << setw(30) << left << "Name" << "\t|" << "Type" << "\t|" <<"Age" << "\t|" << "Weight" << "\t|" << "Sell price" << "\t|" << endl;
    list <Animal*> :: iterator it;
    for(it = MacDold_Animal.begin(); it != MacDold_Animal.end(); ++it)
        {
            Factory_Animal = *it;
            string animalName = Factory_Animal->getName();
            string animalType = Factory_Animal->get_type();
            int Age = Factory_Animal->Age();
            int Weight = Factory_Animal->Weight();
            int SellPrice = Factory_Animal->Sellprice();

            cout << setw(30) << left << animalName << "\t|";
            cout << animalType << "\t|";
            cout << Age << "\t|";
            cout << Weight << "\t|";
            cout << SellPrice << "\t\t|";
            cout << endl;
        }
    G.wait();
}

Animal* Animal_Factory::findAnimal()
{
    string Animal_Name;
    cout << "Give me animal's name: " << endl;
    G.clearInput();
    getline(cin, Animal_Name);
    list <Animal*> :: iterator TagetAnimal;
    for(TagetAnimal = MacDold_Animal.begin(); TagetAnimal != MacDold_Animal.end(); ++TagetAnimal)
        {
            Factory_Animal = *TagetAnimal;
            string A_Name = Factory_Animal->getName();
            if ( A_Name == Animal_Name)
                return Factory_Animal;
        }
}

void Animal_Factory::RemoveAnimal(Animal* X)
{
    MacDold_Animal.remove(X);
}
