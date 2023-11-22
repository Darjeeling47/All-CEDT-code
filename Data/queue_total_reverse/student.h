#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"
#include <bits/stdc++.h>
using namespace std;

bool rev = false;

template <typename T>
void CP::queue<T>::reverse() {
  if(!rev) mFront = (mFront + mSize - 1) % mCap;
  else mFront = (mFront - mSize + 1 + mCap) % mCap;
  rev = !rev;
}

template <typename T>
const T& CP::queue<T>::front() const {
  return mData[mFront];
}

template <typename T>
const T& CP::queue<T>::back() const {
  if(rev) return mData[(mFront - mSize + 1 + mCap) % mCap];
  else return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  if(!rev) ensureCapacity(mSize + 1);
  else{
    // cout << "RECAP : ";
    reverse();
    ensureCapacity(mSize + 1);
    reverse();
  }
  
  if(rev) mData[(mFront - mSize + mCap) % mCap] = element;
  else mData[(mFront + mSize) % mCap] = element;
  
  mSize++;
}

template <typename T>
void CP::queue<T>::pop() {
  if(rev) mFront = (mFront - 1) % mCap;
  else mFront = (mFront + 1) % mCap;
  mSize--;
}

#endif