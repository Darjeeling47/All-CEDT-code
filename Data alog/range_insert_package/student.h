#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  
  int v_size = last - first;
  int pos = position - begin();
  int pos2 = pos + v_size;
  // std::cout << "---" << std::endl;
  // std::cout << pos << std::endl;
  // std::cout << pos2 << std::endl;
  // std::cout << v_size << std::endl;

  int size = mSize + v_size;
  if(last != first) last--;

  ensureCapacity(size);
  
  for(size_t i = size; i >= pos2; i--) {
    mData[i] = mData[i - v_size];
  }
  // std::cout << "123" << std::endl;
  // std::cout << pos2 << std::endl;
  // std::cout << pos << std::endl;
  for(int i = pos2 - 1; i >= pos; i--) {
    //std::cout << i << " " << *last << std::endl;
    if(last >= first){
      mData[i] = *last;
      last--;
    }
  }

  mSize = size;
}

#endif
