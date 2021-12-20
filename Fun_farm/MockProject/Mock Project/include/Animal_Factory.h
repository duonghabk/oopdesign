#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include <Animal.h>
#include <ListAnimal.h>
#include <iostream>
#include <GraphicControl.h>
#include <list>
#include <Sound_Subject.h>

using namespace std;

class Animal_Factory
{
    public:
        GraphicControl G;
        Animal_Factory();
        Animal *Factory_Animal;
        virtual ~Animal_Factory();
        list<Animal*> MacDold_Animal;

        Cat CatSample;
        Dog DogSample;
        Duck DuckSample;
        Pig PigSample;

        void reportAll();
        Animal* get_animalInfo(int);
        Animal* set_animalType(int);
        Animal* findAnimal();

        void RemoveAnimal(Animal*);
        void PrintAnimalDetails();
        void PrintMacAnimalDetail();
        void PrintAnimalList();
        int chooseType();

    protected:

    private:
};

#endif // ANIMAL_FACTORY_H
