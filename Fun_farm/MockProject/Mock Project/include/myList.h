/*Create list like list in STL
  this class can work with various type in (int, float, double…)
  event type "Class"
  - This template class have some method:
    push, pop, print,
    _remove, _size, _empty, _begin, _end;
*/
#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>

using namespace std;

template <typename _type>
class myList
{
    public:
        myList()
        {
            index = 0;
            length = 8;
            position = new _type[8];        //Create new array with length = 8, this length increase 8 if push over this size
        }
        void push(_type);                   //Push one element into your list
        _type pop();                        //Pop the last input element from list and remove it
        void _remove(int);                  //Remove the element at index(int)
        _type _return(int);                //Return element at index(int)
        void print();                       //Print element ( only work with basic variable
        int _size();                        //Return the size of the list
        bool _empty();                      //Check list, if list empty, return true
        _type _begin();                     //Return the first element
        _type _end();                       //Return the last element, different "pop", this function not remove the element in array
    protected:

    private:
        int index, length;
        _type *position;
        _type *newArray;
        _type *backupArray;
};

template <typename _type>
void myList<_type>::push(_type Value)
{
    if (index >= length)
    {
        backupArray = new _type[length + 8];
        copy(position, position + length, backupArray);
        delete[] position;
        position = backupArray;
        length = length + 8;
    }
    position[index] = Value;
    index++;
}

template <typename _type>
_type myList<_type>::pop()                //Put the last input
{
    index--;
    return position[index];
}

template <typename _type>
void myList<_type>::_remove(int _index)   //remove index value
{
    for (int i = _index; i < index; i++)
    {
        position[i] = position[i+1];
    }
    --index;
}

template <typename _type>
_type myList<_type>::_return(int _index)
{
    return position[_index - 1];
}

template <typename _type>
int myList<_type>::_size()                //Payback size
{
    return index;
}

template <typename _type>
bool myList<_type>::_empty()              //Check the list empty or not
{
    if(index == 0)
        return true;
    else
        return false;
}

template <typename _type>
_type myList<_type>::_begin()             //Return value at begin
{
    return position[0];
}

template <typename _type>
_type myList<_type>::_end()               //Return value at the end
{
    return position[index-1];
}

template <typename _type>
void myList<_type>::print()               //Print all element in list
{
    for (int i = 0; i < index; i++)
    {
        cout << position[i] << endl;
    }
}
//template <typename _type>
//void myList<_type>::myList[int _index]    //Print all element in list
#endif // MYLIST_H
