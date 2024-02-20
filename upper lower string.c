#include<stdio.h>
int main(){
    char a[100];
    printf("Enter the string:");
    scanf("%[^\n]s",a);
    int n=0;
    for(int i=0;a[i]!=0;i++){
        n++;
    }
    for(int i=0;i<n;i++){
        if(a[i] >= 65 && a[i] <= 90)
           a[i]=a[i]+32;
        else if(a[i] >= 97 && a[i] <= 122)
           a[i]=a[i]-32;
        else
           continue;
    }
    printf("Modified string:%s",a);
    return 0;
}