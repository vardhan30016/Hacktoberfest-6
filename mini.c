int minOperations(char* s) {
    int l=strlen(s);
    int i=0,n=0;
    while(s[i]!='\0'){
        char ch=s[i];
        int x=(26-ch+'a')%26;
        if(n<x){
            n=x;
        }
        i++;
    }
    return n;
}
