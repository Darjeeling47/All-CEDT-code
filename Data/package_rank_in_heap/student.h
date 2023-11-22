#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <bits/stdc++.h>
using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  
  size_t cnt = 0;
  T x = mData[pos];

  for(int i = 0; i < mSize; i++){
    if(mLess(x, mData[i])) 
      cnt++;
  }

  return cnt;
}

#endif
