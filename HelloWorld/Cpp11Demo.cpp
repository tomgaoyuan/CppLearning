//
//  Cpp11Demo.cpp
//  HelloWorld
//
//  Created by Tom on 2017/5/29.
//  Copyright © 2017 Tom. All rights reserved.
//

#include "Cpp11Demo.hpp"

void cpp11Demo(){
    //lambdaFunDemo();
    //autoDemo();
    //foreachDemo();
    rightValRefDemo();
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
//c++11 auto demo
void autoDemo(){
    auto i = 4;
    auto pi = &i;
    auto pi2 = new auto(i);
    std::cout<<sizeof(i)<<","<<sizeof(pi)<<","<<sizeof(pi2)<<std::endl;
    delete pi2;
}
//c++11 for each loop demo
void foreachDemo(){
    int a[] = {1,2,3,4,5};
    for (auto i : a)
        std::cout<<i<<std::endl;
    
}
std::string getName(){
    return std::string("Tom");
}
void rightValRefDemo(){
    std::string &&name = getName();
    std::cout<<name<<std::endl;
}
