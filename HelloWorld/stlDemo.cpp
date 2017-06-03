//
//  stlDemo.cpp
//  HelloWorld
//
//  Created by Tom on 2017/5/29.
//  Copyright © 2017 Tom. All rights reserved.
//

#include "STLDemo.hpp"

void STLDemoMain(){
    //priorityQueueDemo();
    swapDemo();
}
void priorityQueueDemo(){
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
void swapDemo(){
    //std provides a swap function
    int a = 1, b = 2;
    std::cout<<"Before:"<<a<<","<<b<<std::endl;
    std::swap(a, b);
    std::cout<<"Before:"<<a<<","<<b<<std::endl;
}
