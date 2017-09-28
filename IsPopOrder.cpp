//模拟stack，判断是否为pop顺序
bool IsPopOrder(vector<int> pushV,vector<int> popV) {
    int sizep=pushV.size();
    bool possible=false;
    if (sizep!=0) {
        int i=0;
        int j=0;
        while (j<sizep) {
            while (stacka.empty()||stacka.top()!=popV[j]) {
                if (i==sizep) {
                    break;
                }
                stacka.push(pushV[i]);
                i++;
            }
            if (stacka.top()!=popV[j]) {
                break;
            }
            stacka.pop();
            j++;
        }
        if (stacka.empty()&&j==sizep) {
            possible=true;
        }
    }
    return possible;
}
