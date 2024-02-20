#include<stdio.h>
int main(){
    char a[100];
    printf("Enter the string:");
    scanf("%[^\n]s",a);
    int n=0;
    for(int i=0;a[i]!=0;i++){
        n++;
    }
    printf("Size of string is %d.",n);
    return 0;
}