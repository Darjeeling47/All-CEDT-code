#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <bits/stdc++.h>
using namespace std;

template <typename T>
void CP::vector<T>::uniq() {
  
  set<T> a;
  T *arr = new T[mSize]();
  int cnt = 0;

  for(auto i = begin(); i < end(); i++){
    if(a.find(*i) == a.end()){
      a.insert(*i);
      arr[cnt++] = *i; 
    }
  }

  mData = arr;
  mSize = cnt;
  mCap = cnt;
}

#endif
