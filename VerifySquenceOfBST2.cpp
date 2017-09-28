//判断是否为二叉排序树
bool VerifySquenceOfBST2(vector<int> sequence,int first,int last){
    if(sequence.size()<=0||last<=0)
        return false;
    int root=sequence[last-1];
    int i=first;
    for (; i<last-1; i++) {
        if (sequence[i]>root) {
            break;
        }
    }
    int j=i;
    for (; j<last-1; j++) {
        if (sequence[j]<root) {
            return false;
        }
    }
    bool left=true;
    if (i>0) {
        left=VerifySquenceOfBST2(sequence,first,i);
    }
    bool right=true;
    if (i<last-1) {
        right=VerifySquenceOfBST2(sequence,i,last-i-1);
    }
    return left&&right;
}
