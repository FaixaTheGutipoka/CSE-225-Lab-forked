#include "UnsortedType.h"
#include<iostream>
using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}
template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool &found)
{
    int location = 0;
    bool moreTosearch = (location < length);
    found = false ;
    while (moreTosearch && !found)
    {
        if(item == info[location])
        {
            found = true ;
            item = info[location];
        }
        else
        {
            location++;
            moreTosearch = (location < length);
        }
    }
}
template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
    info[length] = item;
    length++;
}
template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;
    while (item != info[location])
        location++;
    info[location] = info[length - 1];
    length--;
}
template <class ItemType>
bool UnsortedType<ItemType>::IsEmpty()
{
    if(length == 0)
        return cout<<"EMPTY"<<endl;
        else
            return cout<<"NOT"<<endl;

}
template <class ItemType>
void UnsortedType<ItemType>::Display()
{
for(int index= 0; index<length; index++)
    {
        cout<<info[index]<<" ";
    }
    cout<<endl;
}