//插入排序
void insert_sort(vector<int>& array,int first,int last){
    int temp,j;
    for (int i=first+1; i<=last; i++) {
        temp=array[i];
        j=i-1;
        while ((j>=first)&&(array[j]>temp)) {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    return;
}
