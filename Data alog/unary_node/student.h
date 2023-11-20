#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  
  if(ptr -> left == NULL && ptr -> right == NULL)
    return 0;
  
  size_t cnt = 0;

  if(ptr -> left != NULL) cnt++;
  if(ptr -> right != NULL) cnt++;
  cnt %= 2;
  
  if(ptr -> left != NULL)
    cnt += process(ptr -> left);
  if(ptr -> right != NULL)
    cnt += process(ptr -> right);

  return cnt;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  return process(mRoot);
}

#endif
