//
//  stlDemo.cpp
//  HelloWorld
//
//  Created by Tom on 2017/5/29.
//  Copyright © 2017 Tom. All rights reserved.
//

#include "STLDemo.hpp"

void STLDemoMain(){
    priorityQueueDemo();
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
