#include "Cat.h"

Cat::Cat()
{
    buyprice = 2;
}

Cat::~Cat()
{
    //dtor
}

int Cat::Age()
{
    return age;
}

float Cat::Weight()
{
    return weight;
}

int Cat::Sellprice()
{
    return sellprice;
}

int Cat::Buyprice()
{
    return buyprice;
}

int Cat::Longevity()
{
    return longevity;
}

string Cat::get_type()
{
    return "Cat";
}

void Cat::set_name()
{
    cout << "Please set name for this Cat: ";
    cin >> name;
    G.clearInput();
}

string Cat::getName()
{
    return name;
}

int Cat::Food_Need()
{
    return 2;
}

int Cat::Happy()
{
    return happy;
}

void Cat::Eat()
{
    if (age < 2)
    {
        cout << "The cat too small to eat!" << endl;
    }
    if (fullStomach == true)
    {
        cout << "The cat was ate in this day!" << endl;
    }
    else
    {
        consecutive_days++;
        if (weight <= 4)
        {
            if ((consecutive_days%3) == 0)
            weight += 1.0;
        }
        fullStomach = true;
    }
}

void Cat::Grow()
{
    age++;
    fullStomach = false;
    if (age == 17)
        live = false;
}

void Cat::GoOut()
{
    go_out = true;
    happy += 2;
}

bool Cat::Die()
{
    return live;
}

int Cat::Sounds()
{
    cout << "Meow~ Meow~ Meow~ Meow~ Meow~ \n" << endl;
    return 5;
}

void Cat::update(int hearSound)
{
    happy = happy + hearSound;
//    happy = happy - (hearSound/10)*2;
    if (live == false)
    {
        cout << name <<" was die!" << endl;
        G.wait(1);
    }
}
