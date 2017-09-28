// 冒泡排序
void bubble_sort(vector<int>& array){
    int size=array.size();
    for (int i=size-1; i>=0; i--) {
        for (int j=0; j<=i-1; j++) {
            if(array[j+1]<array[j])
                swap(array[j+1],array[j]);
        }
    }
    return;
}
