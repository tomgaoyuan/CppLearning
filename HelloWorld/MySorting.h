//
//  MySorting.h
//  HelloWorld
//
//  Created by Tom on 2017/2/18.
//  Copyright © 2017 Tom. All rights reserved.
//

#ifndef MySorting_h
#define MySorting_h

#include <iostream>
#include <vector>

template <class I> void insertionSort(I first, I last);
template <class I, class T> void linearInsert(I first, I last, T value);
template <class I> void print(I first, I last);

#endif /* MySorting_h */
