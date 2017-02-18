//
//  main.cpp
//  HelloWorld
//
//  Created by Tom on 2016/12/27.
//  Copyright © 2016 Tom. All rights reserved.
//
#include "MySorting.h"
#include <iostream>
#include<vector>


void lambdaFunDemo();
void insertionSortDemo();

int main(int argc, const char * argv[]) {
    //std::cout << "Hello, World!\n"<<std::endl;
    //lambdaFunDemo();
    insertionSortDemo();
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
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    std::vector<int>::iterator first = arr.begin();
    std::vector<int>::iterator last = arr.end();
    last--;
    print(first, last);
    insertionSort(first, last);
    print(first, last);
    delete &arr;
}
