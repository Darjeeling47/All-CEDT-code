void shift(int k) {
	// if(k < 0){
	// 	k = mSize - k;
	// 	k = k % mSize;
	// }
	// else {
	// 	k = k % mSize;
	// }
	if(k == 0) return;

	node *tmp = mHeader -> next;

	if(k > 0)
		k = k % mSize;
		for(int i = 0; i < k; i++){
			if(tmp == mHeader)
				tmp = tmp -> next;
			tmp = tmp -> next;
		}
	else 
		for(int i = 0; i > k ; i--){
			if(tmp == mHeader)
				tmp = tmp -> prev;
			tmp = tmp -> prev;
		}

	mHeader -> prev -> next = mHeader -> next;
	mHeader -> next -> prev = mHeader -> prev;

	tmp -> prev -> next = mHeader;
	mHeader -> prev = tmp -> prev;
	mHeader -> next = tmp;
	tmp -> prev = mHeader;
}
