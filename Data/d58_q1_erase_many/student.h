#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  for(auto i = pos.end() - 1; i != pos.begin() - 1; i--){
    auto e = *i;
    auto itr = mData;
    itr = itr + e;
    while((itr + 1) != end()){
      *itr = *(itr + 1);
      itr++;
    }
  }
  mSize -= pos.size();
}

// template <typename T>
// void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  
//   vector<T> tmp;
//   auto itr = mData;
//   int i = 0;

//   while(itr < end()){
//     if(i < pos.size() && itr - mData == pos[i]){
//       i++;
//       itr++;
//       continue;
//     }
//     tmp.push_back(*itr);
//     itr++;
//   }

//   delete [] mData;
//   mData = tmp.begin();

//   mSize -= pos.size();
// }

#endif

