#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <stdio.h>
enum animal
{
    chicken,
    cat,
    dog,
    pig
};
class Animal
{
    private:
        animal Name;
        int Age;
        int Weight;
        int Happy;
        int Intelligent;
        int price;

    public:
        Animal();
        ~Animal();
        virtual void Sound() = 0;
        virtual void Eat() = 0;
        virtual void Reproduce() = 0;
        virtual void Go_out() = 0;
        virtual void Die() = 0;
        virtual void Train() = 0;
};