//
//  MySorting.cpp
//  HelloWorld
//
//  Created by Tom on 2017/2/18.
//  Copyright © 2017 Tom. All rights reserved.
//

#include "MySorting.h"

template<class I>
void insertionSort(I first, I last){
    linearInsert(first, last, *last);
}

template<class I, class T>
void linearInsert(I first, I last, T value) {
    if( *last <= value ){
        while(last != first) *last=*last--;
    }
    *last = value;
}

template <class I>
void print(I first, I last) {
    while (first!=last) std::cout<<*first++<<std::endl;
    std::cout<<*first++<<std::endl;
}

template void insertionSort(std::vector<int>::iterator, std::vector<int>::iterator) ;
template void linearInsert(std::vector<int>::iterator, std::vector<int>::iterator, int);
template void print(std::vector<int>::iterator, std::vector<int>::iterator);
