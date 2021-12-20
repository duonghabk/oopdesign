#include "Dog.h"

Dog::Dog()
{

}

Dog::~Dog()
{
    //dtor
}

int Dog::Age()
{
    return age;
}

float Dog::Weight()
{
    return weight;
}

int Dog::Sellprice()
{
    return sellprice;
}

int Dog::Buyprice()
{
    return buyprice;
}

int Dog::Longevity()
{
    return longevity;
}

string Dog::get_type()
{
    return "Dog";
}

void Dog::set_name()
{
    cout << "Please set name for this Dog: ";
    cin >> name;
    G.clearInput();
}

string Dog::getName()
{
    return name;
}

int Dog::Food_Need()
{
    return 4;
}

int Dog::Happy()
{
    return happy;
}

void Dog::Eat()
{
    if (age < 3)
    {
        cout << "The dog too small to eat!" << endl;
    }
    if (fullStomach == true)
    {
        cout << "The dog was ate in this day!" << endl;
    }
    else
    {
        consecutive_days++;
        if (weight <= 5)
        {
            if ((consecutive_days%2) == 0)
            weight += 1.0;
        }
        fullStomach = true;
    }
}

void Dog::Grow()
{
    age++;
    fullStomach = false;
    if (age == 17)
        live = false;
}

void Dog::GoOut()
{
    go_out = true;
    happy += 2;
}

bool Dog::Die()
{
    return live;
}

int Dog::Sounds()
{
    cout << "Woof! Woof! Woof!\n" << endl;
    return 3;
}

void Dog::update(int hearSound)
{
    happy = happy - (hearSound/10)*2;
    if (live == false)
    {
        cout << name <<" was die!" << endl;
        G.wait(1);
    }
}
