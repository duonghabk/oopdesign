#ifndef SOUND_SUBJECT_H
#define SOUND_SUBJECT_H

#include <Observer.h>
#include <list>
#include <Animal.h>

class Sound_Subject
{
    public:
        Sound_Subject();
        virtual ~Sound_Subject();
        list<Animal*> sAnimalOb;

        void Add(Animal*);
        void Notify(int);
        void Detach(Animal*);
    protected:

    private:
};

#endif // SOUND_SUBJECT_H
