#ifndef DUCK_H
#define DUCK_H

#include <Animal.h>
#include <GraphicControl.h>

class Duck :  public Animal
{
    public:
        Duck();
        virtual ~Duck();

        //Inherent from Animal
        string name;
        float weight = 0;
        int age = 0;
        int sellprice = 1;
        int buyprice = 2;
        int longevity = 10;
        int type = cat;

        float Weight();
        int Age();
        int LifeTime();
        int Sellprice();
        int Buyprice();
        int Longevity();
        int Food_Need();
        string getName();
        string get_type();

        void Eat();
        void set_name();
        void Grow();
        bool Die();
        int Sounds();
        void HearSounds(int);

        void update(int);
    protected:

    private:
        GraphicControl G;
        bool fullStomach = false;
        bool live = true;
        int consecutive_days = 0;
};

#endif // DUCK_H
