//归并排序
void merge(int* A,int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int* p1=new int[n1+1];
    int* p2=new int[n2+1];
    for (int i=0; i<n1; i++) {
        p1[i]=A[p+i];
    }
    for (int i=0; i<n2; i++) {
        p2[i]=A[q+1+i];
    }
    p1[n1]=INF;
    p2[n2]=INF;
    int i=0,j=0;
    for (int k=p; k<=r; k++) {
        if (p1[i]<=p2[j]) {
            A[k]=p1[i++];
        }else
            A[k]=p2[j++];
    }
    delete [] p1;
    delete [] p2;
}
void merge_sort(int* A,int p,int r)
{
    if (p<r) {
        int q=(p+r)/2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A,p,q,r);
    }
}
