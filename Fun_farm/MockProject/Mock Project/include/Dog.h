#ifndef DOG_H
#define DOG_H

#include <Animal.h>
#include <GraphicControl.h>

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();

        //Inherent from Animal
        string name;
        float weight = 0;
        int age = 0;
        int sellprice = 10;
        int buyprice = 4;
        int longevity = 17;
        int type = dog;

        float Weight();
        int Age();
        int LifeTime();
        int Sellprice();
        int Buyprice();
        int Longevity();
        int Food_Need();
        string getName();
        string get_type();

        void set_name();
        void Eat();
        void Grow();
        bool Die();
        int Sounds();
        void HearSounds(int);

        //Only for Dog
        int happy = 5;
        int intellient = 0;
        //---
        int Happy();
        int Intellient();
        void GoOut();
        void Trainning();
        void update(int);
    protected:

    private:
        GraphicControl G;
        bool fullStomach = false;
        bool live = true;
        int consecutive_days = 0;
        bool go_out = false;
};

#endif // DOG_H
