int mx = -2;
node *mx_node;

int findNode(node *n){

    int lft, rht;
    if(n == NULL)
        return -1;

    lft = findNode(n -> left);
    rht = findNode(n -> right);

    int sum = lft - rht;
    if(sum < 0)
        sum *= -1;
    if(mx < sum){
        mx = sum;
        mx_node = n;
    }
    else if(mx == sum){
        if(mx_node -> data.first > n -> data.first){
            mx_node = n;
        }
    }

    if(lft >= rht){
        return lft + 1;
    }
    else{
        return rht + 1;
    }
}

KeyT getValueOfMostImbalanceNode() {
    mx_node = mRoot;
    findNode(mRoot);
    return mx_node -> data.first;
}
