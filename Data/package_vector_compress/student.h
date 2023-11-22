#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    T *tmp = new T[mSize](); //reserve new memory with mSize
        //loop to store the data to new memory
        for (size_t i = 0; i < mSize; i++) {
            tmp[i] = mData[i];
        }
        delete [] mData; //delete the old one
        mData = tmp; //set pointer mData to point the same as tmp
        mCap = mSize; //just new the cap
}

#endif
