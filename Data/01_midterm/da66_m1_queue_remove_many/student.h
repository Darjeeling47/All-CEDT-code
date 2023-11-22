#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos){
  
  T *arr = new T[mCap]();
  int i = 0, j = 0, k = 0;
  size_t tmp1 = mSize;
  sort(pos.begin(), pos.end());

  while(i < tmp1 - pos.size() && j < pos.size()){
    if(k == pos[j]){
      j++;
      pop();
    }
    else{
      arr[i] = front();
      pop();
      i++;
    }
    k++;
  }

  while(!empty()){
    arr[i] = front();
    pop();
    i++;
  }

  delete[] mData;
  mData = arr;
  mSize = tmp1 - pos.size();
  mFront = 0;
  mCap = mCap;
}

#endif
