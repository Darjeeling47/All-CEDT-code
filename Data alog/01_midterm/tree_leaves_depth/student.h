#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, size_t aux) {
  
  long long sum = 0;

  if(n -> left == NULL && n -> right == NULL){
    return aux;
  }

  if(n -> left != NULL){
    sum += my_recur(n -> left, aux + 1);
  }
  if(n -> right != NULL){
    sum += my_recur(n -> right, aux + 1);
  }

  return sum;
}

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::sum_leaves_depth() {
  if(mRoot == NULL) return 0;
  return my_recur(mRoot, 0); 
}

#endif
