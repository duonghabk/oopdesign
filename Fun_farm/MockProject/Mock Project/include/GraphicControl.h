#ifndef GRAPHICCONTROL_H
#define GRAPHICCONTROL_H

#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>

using namespace std;
class GraphicControl
{
    public:
        GraphicControl();

        void cls();                                 //clear screen
        void wait();
        void wait(int);                                //wait until get input key
        void HeaderContent(string Content);         //
        int chooseNumber(int _min, int _max);      //Choose number in range
        void clearInput();                          //
        void clearCache();                          //
        void printResource(int, int);
        //InGame screen
        void StartGameScreen();
        void InGameScreen();
        void WatchclockScreen();
        void GototheMarketScreen();
        void GoToTheFarmScreen();

        string GetStringLine();
    protected:

    private:
};

#endif // GRAPHICCONTROL_H
