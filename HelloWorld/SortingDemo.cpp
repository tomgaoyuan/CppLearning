//
//  SortingDemo.cpp
//  HelloWorld
//
//  Created by tom on 2017/5/29.
//  Copyright © 2017 tom. All rights reserved.
//

#include "SortingDemo.h"

void sortingDemoMain(){
    //insertionSortDemo();
    //mergeSortDemo();
    quickSortDemo();
    //treeSortDemo();
}
void insertionSortDemo(){
    std::vector<int> &arr = *new std::vector<int>;
    initDemo(arr);
    std::vector<int>::iterator first = arr.begin();
    std::vector<int>::iterator last = arr.end();
    last--;
    print(first, last);
    insertionSort(first, last);
    print(first, last);
    delete &arr;
}

void mergeSortDemo(){
    std::list<int> &lst = *new std::list<int>;
    initDemo(lst);
    std::list<int>::iterator first = lst.begin();
    std::list<int>::iterator last = lst.end();
    last--;
    print(first, last);
    mergeSort(lst);
    first = lst.begin();
    last = lst.end();
    last--;
    print(first,last);
    delete &lst;
}

void quickSortDemo(){
    std::vector<int> arr;
    initDemo(arr);
    //quick_sort_loop(arr.begin(), --arr.end());
    quick_sort_loop_v2(arr.begin(), --arr.end());
    print(arr.begin(), --arr.end());
}

void treeSortDemo(){
    std::vector<int> arr;
    initDemo(arr);
    tree_sort(arr.begin(), arr.end());
    print(arr.begin(), --arr.end());
}
