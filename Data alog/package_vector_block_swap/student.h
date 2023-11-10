#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {

  if(a > b){
    auto tmp = a;
    a = b;
    b = tmp;
  }

  int sa, sb, ea, eb; //start_a, stare_b, end_a, end_b
    
  sa = a - begin();
  sb = b - begin();
  ea = (a - begin()) + m;
  eb = (b - begin()) + m;

  if(sa > mSize || sb > mSize || ea > mSize || eb > mSize) return false;
  if(a + m - 1 >= b) return false;
  if(m <= 0) return false;

  for(int i = sa, j = sb; i < ea && j < eb; i++, j++){
    T tmp = mData[j];
    mData[j] = mData[i];
    mData[i] = tmp;
  }

  return true;
}
 
#endif
