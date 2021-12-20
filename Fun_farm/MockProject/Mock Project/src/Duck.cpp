#include <Duck.h>

Duck::Duck()
{
    buyprice = 3;
}

Duck::~Duck()
{
    //dtor
}

int Duck::Age()
{
    return age;
}

float Duck::Weight()
{
    return weight;
}

int Duck::Sellprice()
{
    return sellprice;
}

int Duck::Buyprice()
{
    return buyprice;
}

int Duck::Longevity()
{
    return longevity;
}

string Duck::get_type()
{
    return "Duck";
}

void Duck::set_name()
{
    cout << "Please set name for this Duck: ";
    cin >> name;
    G.clearInput();
}

string Duck::getName()
{
    return name;
}

int Duck::Food_Need()
{
    return 1;
}

void Duck::Eat()
{
    if (age < 1)
    {
        cout << "The duck too small to eat!" << endl;
    }
    if (fullStomach == true)
    {
        cout << "The duck was ate in this day!" << endl;
    }
    else
    {
        consecutive_days++;
        if (weight <= 2)
        {
            if ((consecutive_days%2) == 0)
            weight += 0.5;
        }
        fullStomach = true;
    }
}

void Duck::Grow()
{
    age++;
    fullStomach = false;
    if (age == 10)
        live = false;
}

bool Duck::Die()
{
    return live;
}

int Duck::Sounds()
{
    cout << "Quack!! Quack!! Quack!! ... (10 time)\n" << endl;
    return 10;
}

void Duck::update(int x)
{
    if (live == false)
    {
        cout << name <<" was die!" << endl;
        G.wait(1);
    }
}
