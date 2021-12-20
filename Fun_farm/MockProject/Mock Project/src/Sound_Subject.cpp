#include "Sound_Subject.h"

Sound_Subject::Sound_Subject()
{
    //ctor
}

Sound_Subject::~Sound_Subject()
{
    //dtor
}

void Sound_Subject::Add(Animal* AnimalOb)
{
    sAnimalOb.push_back(AnimalOb);
}

void Sound_Subject::Notify(int daySound)
{
    Animal* Ob;
    list <Animal*> :: iterator iOb;
    for(iOb = sAnimalOb.begin(); iOb != sAnimalOb.end(); ++iOb)
        {
            Ob = *iOb;
            Ob->update(daySound);
        }
}

void Sound_Subject::Detach(Animal* AnimalOb)
{
    sAnimalOb.remove(AnimalOb);
}
