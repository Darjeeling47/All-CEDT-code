#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
using namespace std;

template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  
  int position = (mFront + pos) % mCap;
  T tmp = mData[position];
  
  for(int i = pos; i < mSize; i++){
    mData[(i + mFront) % mCap] = mData[((i + mFront) + 1) % mCap];
  }

  mData[(mFront + mSize - 1 + mCap) % mCap] = tmp;
}

#endif
