#ifndef MACDONALD_H
#define MACDONALD_H

#include <GraphicControl.h>
#include <Resource.h>
#include <iostream>
#include <myList.h>
#include <Animal.h>
#include <Animal_Factory.h>
#include <iterator>
#include <list>
#include <Sound_Subject.h>

using namespace std;

class MacDonald
{
    public:
        MacDonald();
        string FarmerName;
        string FarmerAge;
        Animal* thisAnimal;

        //Default MacDonald game start
        void setupMacDolGame();
        //view
        Animal_Factory Mac_Factory;
        list<Animal*> _Mac_Factory_;
        Sound_Subject SndSubject;

        void reportAll();
        void animalStatus();
        void resourceStatus();
        // Activities
        void MacDold_NextDayState();
        void MacDold_pay(int);                                          //Pay money
        void MacDold_earn(int);                                         //get money
        void MacDold_buyfood();                                         //Buy food
        void MacDold_buyAnimal();                                       //Buy new animal
        void MacDold_feed();                                            //Feed one animal
        void MacDold_feed_All();                                        //Feed all animal in type
        void MacDold_sell_Animal();                                     //Sell animal by name
        void MacDold_sell_All_Animal();                                 //Sell all animal in type
        void MacDold_letAnimal_OtBk();                                  //Let animal out/back
        void MacDold_letAnimal_OtBkA();                                 //Let all type animal out/back
    public:
        GraphicControl G;

        Resource MacDold_Resource;
    private:

};
#endif // MACDONALD_H

/*Function*/
//--------------------------------------------------------------------------------------------------------------//
