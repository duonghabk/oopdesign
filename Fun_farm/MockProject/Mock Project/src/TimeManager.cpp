#include "TimeManager.h"

TimeManager::TimeManager()
{
    //ctor
}

void TimeManager::Start()
{
    day = 0;
}

void TimeManager::NextDay()
{
    day += 1;
}

void TimeManager::Show()
{
    cout << "Day : " << day << endl;
}
