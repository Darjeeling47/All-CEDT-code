#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T1,typename T2>
bool CP::pair<T1,T2>::operator>=(const pair<T1,T2>& other) const {
  
  //this compair first and other.first
  //other will get the ref from another pair
  if(first == other.first && second == other.second){
    return true;
  }
  else if(first > other.first){
    return true;
  }
  else if(first == other.first && second >= other.second){
    return true;
  }
  
  return false;
}

#endif
