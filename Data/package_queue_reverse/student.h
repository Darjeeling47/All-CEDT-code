#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  int front = (mFront + a) % mCap;
  int end = (mFront + b) % mCap;
  int m = (b - a + 1) / 2;
  
  for(int i = 0; i < m; i++){
    swap(mData[front], mData[end]);
    front = (front + 1) % mCap;
    end = (end - 1 + mCap) % mCap;
  }
}

#endif
