#include <iostream>
#include <iomanip>
#include <stdlib.h>

#include <GraphicControl.h>
#include <MacDonald.h>
#include <Animal.h>
#include <TimeManager.h>

using namespace std;

GraphicControl G;
bool GameMain();
void GameStart();
void GameOnMarket();
void GameOnFarm();
MacDonald Player;
TimeManager GameTime;

bool GameMain()
{
    G.HeaderContent("MacDonal Game");
    G.StartGameScreen();

    switch (G.chooseNumber(1,2))
    {
        case 1:
            {
                GameStart();
                GameTime.Start();
                return true;
                break;
            }
        case 2:
            {
                cout << "Good bye!" << endl;
                return false;
                break;
            }
        default:
            {
                return false;
                break;
            }
    }
}
void GameStart()
{
    G.HeaderContent("MacDonal Game");
    cout << "Welcome to MacDonal Farm Game!" << endl;
    Player.setupMacDolGame();
/*
    TimeManager time();
*/

    bool back_ = false;
    while (!back_)
    {
        G.HeaderContent(Player.FarmerName + " Home");
        G.printResource(Player.MacDold_Resource.money, Player.MacDold_Resource.food);
        G.InGameScreen();
        switch (G.chooseNumber(1,4))
        {
            //Watch clock
            case 1:
                {
                    GameTime.Show();
                    G.wait();
                    break;
                }
            case 2:
                {
                    GameOnMarket();
                    break;
                }
            case 3:
                {
                    GameOnFarm();
                    break;
                }
            case 4: //Next day
                {
                    GameTime.NextDay();
                    Player.MacDold_NextDayState();
                    break;
                }
            case 5:
                {
                    back_ = true;
                    break;
                }
            default:
                {
                    back_ = true;
                    break;
                }
        }
    }
}

void GameOnMarket()
{

    bool back_ = false;
    while ( !back_)
    {
        G.HeaderContent("Welcome to the Market");
        G.printResource(Player.MacDold_Resource.money, Player.MacDold_Resource.food);
        G.GototheMarketScreen();
        switch (G.chooseNumber(1,4))
        {
            case 1:
                    {
                        Player.MacDold_buyfood();
                        break;
                    }
            case 2:
                    {
                        Player.MacDold_buyAnimal();
                        break;
                    }
            case 3:
                    {
                        back_ = true;
                        break;
                    }
            case 4:
                    {
                        cout << "Thanks you very much! Hope to see you again!" << endl;
                        back_ = true;
                        break;
                    }
            default:
                    {
                        back_ = true;
                        break;
                    }
        }
    }
}

void GameOnFarm()
{
    G.HeaderContent("On the Farm");
    G.printResource(Player.MacDold_Resource.money, Player.MacDold_Resource.food);
    G.GoToTheFarmScreen();
    bool back_ = false;
    while ( !back_)
    {

        switch (G.chooseNumber(1,4))
        {
            case 1:
                    {
                        Player.reportAll();
                        break;
                    }
            case 2:
                    {
                        Player.MacDold_feed();
                        break;
                    }
            case 3:
                    {
                        Player.reportAll();
                        break;
                    }
            case 4:
                    {
                        cout << "Well, i was have a good day!" << endl;
                        back_ = true;
                        break;
                    }
            default:
                    {
                        back_ = true;
                        break;
                    }
        }
    }
}

int main()
{
    bool _continue = true;
    while(_continue)
        _continue = GameMain();
}
