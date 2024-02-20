#include<stdio.h>
int main(){
    char a[100],b[100];
    printf("Enter the string:");
    scanf("%[^\n]s",a);
    int n=0,c=0;
    for(int i=0;a[i]!=0;i++){
        b[i]=a[i];
        n++;
    }
    for(int i=0;i<n/2;i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for(int i=0;a[i]!=0;i++){
        if(b[i]!=a[i]){
            c=1;
            break;
        }
    }
    if(c==0)
        printf("STRING IS PALLINDROM.");
    else
        printf("STRING IS NOT PALLINDROM.");
    return 0;
}