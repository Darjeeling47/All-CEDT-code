void replace(const T& x, list<T>& y) {

  auto itr = begin();

  while(itr != end()){
    if(*itr == x){
      itr = erase(itr);
      for(auto &e : y){
        itr = insert(itr, e);
        itr++;
      }
    }
    else{
      itr++;
    }
  }

}
