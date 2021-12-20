#ifndef TIMEMANAGER_H
#define TIMEMANAGER_H

#include <Animal.h>
#include <list>
#include <MacDonald.h>

class TimeManager
{
    public:
        TimeManager();
        int day = 0;

        void Start();
        void NextDay();
        void Show();

    protected:

    private:
};

#endif // TIMEMANAGER_H
