//
//  MySorting.cpp
//  HelloWorld
//
//  Created by Tom on 2017/2/18.
//  Copyright © 2017 Tom. All rights reserved.
//

#include "MySorting.h"

template<typename T>
void mergeSort(std::list<T> &l) {
    std::list<T> carry;
    std::list<T> counter[64];
    int fill = 0;
    while (!l.empty()){
        carry.splice(carry.begin(), l, l.begin());
        int i = 0;
        while(i < fill && !counter[i].empty()) {
            counter[i].merge(carry);
            carry.swap(counter[i]);
            i++;
        }
        counter[i].swap(carry);
        if (i==fill) fill++;
    }
    for(int i=1; i<fill; i++)
        counter[i].merge(counter[i-1]);
    l.swap(counter[fill-1]);
}

template<class I>
void insertionSort(I first, I last){
    I pos = first+1;
    while (pos!=last+1){
        linearInsert(first, pos, *pos);
        pos++;
    }
}

template<class I, class T>
void linearInsert(I first, I last, T value) {
    if( value < *first ){
        while(last != first) {
            I pos = last--;
            *pos = *last;
        }
        *last = value;
    } else {
        I pos = last--;
        while( *last > value ){
            *pos = *last;
            pos = last--;
        }
        *pos = value;
    }
}

template<typename I, typename T>
I unguarded_partition(I first, I last, T pivot) {
    while(1){
        while(*first < pivot) first++;
        last--;
        while(*last > pivot) last--;
        if (first >= last) return first;
        *first += *last;
        *last = *first - *last;
        *first -= *last;
        ++first;
    }
}

template<typename I>
void quick_sort_loop(I first, I last){
    I cut = unguarded_partition(first, last, *(first + (last-first)/2) );
    while(last - first > 1){
        if(cut-first > last-cut) {
            quick_sort_loop(first, cut);
            first = cut;
        } else {
            quick_sort_loop(cut, last);
            last = cut;
        }
    }
}

template <class I>
void print(I first, I last) {
    while (first!=last) std::cout<<*first++<<std::endl;
    std::cout<<*first++<<std::endl;
}

template<typename V>
void initDemo(V &v){
    for(int c = 9; c>=0 ; c--)
        v.push_back(c);
}

template void insertionSort(std::vector<int>::iterator, std::vector<int>::iterator) ;
template void linearInsert(std::vector<int>::iterator, std::vector<int>::iterator, int);
template void mergeSort(std::list<int> &l);
template void print(std::vector<int>::iterator, std::vector<int>::iterator);
template void print(std::list<int>::iterator, std::list<int>::iterator);
template void initDemo(std::list<int>&);
template void initDemo(std::vector<int>&);
template void quick_sort_loop(std::vector<int>::iterator, std::vector<int>::iterator);
template std::vector<int>::iterator unguarded_partition(std::vector<int>::iterator, std::vector<int>::iterator, int);
