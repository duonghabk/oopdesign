#ifndef PIG_H
#define PIG_H

#include <Animal.h>
#include <GraphicControl.h>

class Pig : public Animal
{
    public:
        Pig();
        virtual ~Pig();

        //Inherent from Animal
        string name;
        float weight = 0;
        int age = 0;
        int sellprice = 1;
        int buyprice = 3;
        int longevity = 20;

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

#endif // PIG_H
