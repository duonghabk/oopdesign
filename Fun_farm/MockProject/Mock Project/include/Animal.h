#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <GraphicControl.h>

enum Animal_enum { animal, cat, dog, duck, pig };

using namespace std;


class Animal
{
    public:
        Animal();
        string name = "Error";
        float weight = 0;
        int age = 0;
        int sellprice = 0;
        int buyprice = 0;
        int longevity = 0;
        int type;
        int born;


        virtual float Weight();
        virtual int Age();
        virtual int Sellprice();
        virtual int Buyprice();
        virtual int Longevity();
        virtual string getName();
        virtual string get_type();
        virtual int Food_Need();

        virtual void Eat();
        virtual void set_name();
        virtual void Grow();            //include reproduce
        virtual bool Die();
        virtual int Sounds();
        virtual int Happy();
        virtual void update(int);
    protected:

    private:
        GraphicControl G;
        bool fullStomach = false;
        bool live = true;
        int consecutive_days = 0;
};

#endif // ANIMAL_H
