//
//  main.cpp
//  binary search
//
//  Created by Victor Chiliquinga on 6/9/15.
//  Copyright (c) 2015 Victor Chiliquinga. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int list [100], first , mid, last, length, searchItem, index, smallIndex, temp,minIndex;
    bool found = false;
    
    cout << "How many numbers?\n";
    cin >> length;
    
    cout << "Enter the " << length << " numbers\n";
    
    for (int a = 0; a<length; a++)
    {
        cin >> list [a];
    }
    
    //select sorting
    cout << "Numbers sorted in ascending order are as follows:\n";
    for (index = 0; index < length-1;index++)
    {
        smallIndex = index;
        
        for (minIndex = index+1; minIndex <length; minIndex++)
        {
            if (list [minIndex] < list [smallIndex])
                smallIndex = minIndex;
            // < ASCEDNING.......
            // > DESCENDING
        }
        
        temp = list[smallIndex];
        list [smallIndex] = list [index];
        list [index] = temp;
    }
    
    for (int I = 0; I<length; I++)
    {
        cout << list [I] << " ";
    }
    
    
    // searching
    cout << "\nEnter search item\n";
    cin >> searchItem;
    
    first = 0;
    last = length - 1;
    
    while (first <=last && !found)
    {
        mid = (first +last)/2;
        if (list [mid] == searchItem)
        {
            found = true;
            cout << "Search item is in the list at location " << list [mid] << endl;
        }
        else if (list [mid] > searchItem)
        {
            last = mid -1;
        }
        else
            first = mid +1;
    }
    
    return 0;
}
