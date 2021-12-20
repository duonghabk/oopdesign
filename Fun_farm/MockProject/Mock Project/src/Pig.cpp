#include "Pig.h"

Pig::Pig()
{
    buyprice = 3;
}

Pig::~Pig()
{
    //dtor
}

int Pig::Age()
{
    return age;
}

float Pig::Weight()
{
    return weight;
}

int Pig::Sellprice()
{
    return sellprice;
}

int Pig::Buyprice()
{
    return buyprice;
}

int Pig::Longevity()
{
    return longevity;
}

string Pig::get_type()
{
    return "Pig";
}

void Pig::set_name()
{
    cout << "Please set name for this Pig: ";
    cin >> name;
    G.clearInput();
}

string Pig::getName()
{
    return name;
}

int Pig::Food_Need()
{
    return 4;
}

void Pig::Eat()
{
    if (age < 5)
    {
        cout << "The pig too small to eat!" << endl;
    }
    if (fullStomach == true)
    {
        cout << "The pig was ate in this day!" << endl;
    }
    else
    {
        consecutive_days++;
        if (weight <= 10)
        {
            weight += 1.0;
        }
        fullStomach = true;
    }
}

void Pig::Grow()
{
    age++;
    fullStomach = false;
    if (age == 17)
        live = false;
}

bool Pig::Die()
{
    return live;
}

int Pig::Sounds()
{
    cout << "Oink!! Oink!! Oink!! (x10 time)\n" << endl;
    return 10;
}

void Pig::update(int x)
{
    if (live == false)
    {
        cout << name <<" was die!" << endl;
        G.wait();
    }
}
