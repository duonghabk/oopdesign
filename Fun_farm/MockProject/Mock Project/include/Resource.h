#ifndef RESOURCE_H
#define RESOURCE_H


class Resource
{
    public:
        Resource();
        Resource(int, int);
        float foodprice = 0.1;
        int moneystart = 1000;
        int foodstart = 50;

        void foodChange(int);
        void moneyChange(int);
        void setDefault();

    public:
        int food;
        int money;
    private:
};

#endif // RESOURCE_H
