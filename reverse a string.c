#include<stdio.h>
int main(){
    char a[100];
    printf("Enter the string:");
    scanf("%[^\n]s",a);
    int n=0;
    for(int i=0;a[i]!=0;i++){
        n++;
    }
    for(int i=0;i<n/2;i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    printf("Reversed string is:%s",a);
    return 0;
}