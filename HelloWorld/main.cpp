//
//  main.cpp
//  HelloWorld
//
//  Created by Tom on 2016/12/27.
//  Copyright © 2016 Tom. All rights reserved.
//
#include "MySorting.h"
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <string>

void lambdaFunDemo();
void insertionSortDemo();
void mergeSortDemo();
void quickSortDemo();
void treeSortDemo();
void  priorityQueueDemo();

int main(int argc, const char * argv[]) {
    //std::cout << "Hello, World!\n"<<std::endl;
    //lambdaFunDemo();
    //insertionSortDemo();
    //mergeSortDemo();
    //quickSortDemo();
    //treeSortDemo();
    priorityQueueDemo();
    return 0;
}

//A c++11 lambda function demo
void lambdaFunDemo() {
    std::vector<int> *arr = new std::vector<int>;
    const int N = 100;
    for(int c=0; c<N; c++) arr->push_back(c+1);
    int sum = 0;
    std::for_each(arr->begin(), arr->end(), [&](int x){     //here is the lambda function
        sum += x;
    });
    delete arr;
    std::cout<<"The sum 1-100 is "<<sum<<std::endl;
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
    quick_sort_loop(arr.begin(), arr.end());
    print(arr.begin(), --arr.end());
}

void treeSortDemo(){
    std::vector<int> arr;
    initDemo(arr);
    tree_sort(arr.begin(), arr.end());
    print(arr.begin(), --arr.end());
}

void  priorityQueueDemo(){
    typedef std::greater<std::string> compare;  //Function object class for less-than inequality comparison
    typedef std::vector<std::string> container;
    std::priority_queue<std::string, container, compare > words;
    words.push("apple");
    words.push("pen");
    words.push("pineapple");
    while(!words.empty()){
        std::cout<<words.top()<<std::endl;
        words.pop();
    }
}
