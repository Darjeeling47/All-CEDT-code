#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  size_t cnt = 0;
  if(n == NULL) 
    return 0;
  else if(n -> left == NULL && n -> right == NULL) 
    return 1;
  else {
    cnt += process(n -> left);
    cnt += process(n -> right);
    cnt++;
  }
  return cnt;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {

  if(mSize == 0){
    return std::pair<KeyT,MappedT>();
  }

  size_t lst_num = process(mRoot -> left);
  size_t rst_num = process(mRoot -> right);

  left.delete_all_nodes(left.mRoot);
  right.delete_all_nodes(right.mRoot);

  left.mRoot = mRoot -> left;
  right.mRoot = mRoot -> right;

  left.mSize = lst_num;
  right.mSize = rst_num;

  mRoot -> left = NULL;
  mRoot -> right = NULL;
  mSize = 1;

  return std::pair<KeyT,MappedT>(mRoot -> data);
}

#endif

