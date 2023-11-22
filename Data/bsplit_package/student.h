#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {

  CP::map_bst<KeyT,MappedT,CompareT> result;

  node *tmp = mRoot;
  node *pin, *pin_pa;
  KeyT mn = find_max_node(mRoot) -> data.first;
  // std::cout << "MAX : " << mn << std::endl;

  if(mn < val){
    result.mRoot = NULL;
    return result;
  }

  while(tmp != NULL){
    //set node
    if(tmp -> data.first == val){
      pin = tmp;
      break;
    }
    if(tmp -> data.first < mn && tmp -> data.first > val){
      mn = tmp -> data.first;
      pin = tmp;
    }
    //travel
    if(tmp -> data.first > val){
      tmp = tmp -> left;
    }
    else{
      tmp = tmp -> right;
    }
  }

  // std::cout << "PIN : " << pin -> data.first << std::endl;

  while(pin -> parent != NULL){   
    pin_pa = pin -> parent;
    if(pin_pa -> data.first > pin -> data.first){
      //pin right
      if(pin -> right != NULL){
        pin -> right -> parent = pin_pa;
        pin_pa -> left = pin -> right;
      }
      else {
        pin_pa -> left = NULL;
      }

      //pin parent
      if(pin_pa -> parent != NULL)
        pin -> parent = pin_pa -> parent;
      else
        pin -> parent = NULL;

      //--------
      pin_pa -> parent = pin;
      pin -> right = pin_pa;
      if(pin -> parent != NULL){
        if(pin -> parent -> data.first < pin -> data.first)
          pin -> parent -> right = pin;
        else
          pin -> parent -> left = pin;
      }
    }
    else{
      //pin right
      if(pin -> left != NULL){
        pin -> left -> parent = pin_pa;
        pin_pa -> right = pin -> left;
      }
      else {
        pin_pa -> right = NULL;
      }

      //pin parent
      if(pin_pa -> parent != NULL)
        pin -> parent = pin_pa -> parent;
      else
        pin -> parent = NULL;
      
      //--------
      pin_pa -> parent = pin;
      pin -> left = pin_pa;
      if(pin -> parent != NULL){
        if(pin -> parent -> data.first < pin -> data.first)
          pin -> parent -> right = pin;
        else
          pin -> parent -> left = pin;
      }
    }
  }
  if(pin -> left == NULL){
    mRoot = NULL;
  }
  else {
    mRoot = pin -> left;
    mRoot -> parent = NULL;
    pin -> left = NULL;
  }

  result.mRoot = pin;
  return result;
}

#endif
