#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  
  T a[7];
  int i;

  for(int i = 0; i < mSize && i < 7; i++){
    a[i] = mData[i];
  }

  std::sort(a, a + i, mLess);
  return a[i - k];
}

#endif
