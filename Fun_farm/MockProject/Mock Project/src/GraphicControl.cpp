#include "GraphicControl.h"

GraphicControl::GraphicControl()
{
    //ctor
}

void GraphicControl::cls()
{
    system ("CLS");
}

void GraphicControl::wait()
{
    cout << endl;
    system("pause");
}

void GraphicControl::HeaderContent(string Content)
{
    system ("CLS");
    int length = Content.length();
    string Content1 = Content.substr(0,length/2);
    string Content2 = Content.substr(length/2,Content.size());
    system ("CLS");
    cout << "====================================================================================================" << endl;
    // Print content to central
    cout<< setw(50) << right << Content1;
    cout<< setw(50) << left << Content2 << endl;
    cout << "====================================================================================================" << endl;
}

void GraphicControl::printResource(int money, int food)
{
    string strMoney = "Money: " + to_string(money) +  " $" ;
    string strFood  = "Food: "  + to_string(food)  + " Units";
    cout << setw(50) << left << strMoney;
    cout << setw(50) << right<< strFood << endl;
    cout << "____________________________________________________________________________________________________" << endl;
}

int GraphicControl::chooseNumber(int _min, int _max)
{
    int num;
    bool exit = false;
    while(!exit)                        //Loop if input not right key
    {
        cout << ">>> ";
        cin >> num;
        if (num >= _min && num <= _max)
            exit = true;
        else
        {
            num=-1;
            cin.clear();
            cin.ignore(999,'\n');
        }
    }
    return num;
}

void GraphicControl::clearCache()
{
    fflush(stdin);
}

void GraphicControl::clearInput()
{
    cin.clear();
    cin.ignore(999,'\n');
}

void GraphicControl::StartGameScreen()
{
    cout << "[1] Game Start" << endl;
    cout << "[2] Quits game" << endl;
}

void GraphicControl::InGameScreen()
{
    cout << "[1] Watch clock" << endl;
    cout << "[2] Go to the Market" << endl;
    cout << "[3] Go to the Farm" << endl;
    cout << "[4] End day" << endl;
    cout << "[5] Exit game." << endl << endl;
}

void GraphicControl::GototheMarketScreen()
{
    cout << "[1] Buy food" << endl;
    cout << "[2] Buy Animal" << endl;
    cout << "[3] Sell Animal" << endl;
    cout << "[4] Go Home" << endl << endl;
}

void GraphicControl::GoToTheFarmScreen()
{
    cout << "[1] Show Animal Status" << endl;
    cout << "[2] Feed Animal" << endl;
    cout << "[4] Go Home" << endl;
}

void GraphicControl::wait(int perios)
{
    time_t timeBegin, timeEnd;
    timeBegin = time(NULL);
    timeEnd = time(NULL);
    while ((timeEnd - timeBegin) < perios)
    {
        timeEnd = time(NULL);
    }
}
string GraphicControl::GetStringLine()
{
    string outputString;
    getline (cin, outputString);
    return outputString;
}
