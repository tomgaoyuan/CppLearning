//
//  MySorting.h
//  HelloWorld
//
//  Created by Tom on 2017/2/18.
//  Copyright © 2017 Tom. All rights reserved.
//
//Algorithms are from 'Data Structure & STL'
#ifndef MySorting_h
#define MySorting_h

#include <iostream>
#include <vector>
#include <list>
#include <set>
template <typename I, typename T> void tree_sort_aux(I first, I last, T value);
template <typename I > void tree_sort(I first, I last);
template <class I> void insertionSort(I first, I last);
template <class I, class T> void linearInsert(I first, I last, T value);
template<typename T>void mergeSort(std::list<T> &l);
template<typename I, typename T> I unguarded_partition(I first, I last, T pivot);
template<typename I> void quick_sort_loop(I first, I last);
template<typename I, typename T> I unguarded_partition(I first, I last);
template<typename I> void quick_sort_loop_v2(I first, I last);
template<typename V> void initDemo(V &v);
template <class I> void print(I first, I last);
#endif /* MySorting_h */
