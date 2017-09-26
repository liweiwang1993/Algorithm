//atoi function
int myAtoi(string str) {
    int len=str.size();
    long long res=0;
    int indicator=1;
    int i=0;
    while(str[i]==' ')
        i++;
    if(str[i]=='+'||str[i]=='-'){
        indicator=1-2*(str[i++]=='-');
    }
    
    
    while((str[i]>='0'&&str[i]<='9'))
    {
        res=res*10+(str[i]-'0');
        i++;
        if (indicator*res>INT_MAX)
            return INT_MAX;
        
        if (indicator*res<INT_MIN)
            return INT_MIN;
    }
    
    return (int)indicator*res;
    
}
