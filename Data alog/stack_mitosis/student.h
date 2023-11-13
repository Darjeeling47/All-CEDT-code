#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void CP::stack<T>::mitosis(int a, int b){

    stack<T> tmp_1, tmp_2;

    for(int i = mSize - 1; i > b; i--){
        tmp_1.push(top());
        pop();
    }
    for(int i = b; i > a; i--){
        tmp_2.push(top());
        pop();
    }
    for(int i = b; i > a; i--){
        push(tmp_2.top());
        push(tmp_2.top());
        tmp_2.pop();
    }
    for(int i = mSize - 1; i > b; i--){
        push(tmp_1.top());
        pop();
    }

    mSize = mSize + b - a + 1;
}

#endif