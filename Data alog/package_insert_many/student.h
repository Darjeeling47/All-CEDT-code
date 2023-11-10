#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <bits/stdc++.h>
using namespace std;

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  
  size_t new_data_size = size() + data.size();
  T *arr = new T[new_data_size]();  

  sort(data.begin(), data.end());

  int num1 = 0;
  int num2 = 0;

  for(int i = 0; i < new_data_size; i++){
    if(num1 == data[num2].first){
      arr[i] = data[num2].second;
      num2++;
    }
    else{
      arr[i] = mData[num1];
      num1++;
    }
  }

  mData = arr;
  mSize = new_data_size;
  mCap = new_data_size;
}

#endif
