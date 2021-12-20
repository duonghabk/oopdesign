#ifndef CAT_H
#define CAT_H

#include <Animal.h>
#include <GraphicControl.h>

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();

        //Inherent from Animal
        string name;
        float weight = 0;
        int age = 0;
        int sellprice = 5;
        int buyprice = 2;
        int longevity = 15;
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
        void Grow();
        bool Die();
        void set_name();
        int Sounds();

        //Only for Cat
        int happy = 5;
        //-----
        int Happy();
        void GoOut();

        void update(int);
    protected:

    private:
        GraphicControl G;
        bool fullStomach = false;
        bool live = true;
        int consecutive_days = 0;
        bool go_out = false;
};

#endif // CAT_H
