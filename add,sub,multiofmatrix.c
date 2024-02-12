#include<stdio.h>
int main(){
    int m1,n1,m2,n2;
    printf("Enter the dimensions of first matrix:");
    scanf("%d%d",&m1,&n1);
    printf("Enter the dimensions of second matrix:");
    scanf("%d%d",&m2,&n2);
    int a[m1][n1];
    int b[m2][n2];
    printf("Enter the first matrix:");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("Enter element for the matrix of [%d][%d] indices:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            printf("Enter element for the matrix of [%d][%d] indices:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int c[m1][n1];
    int d[m1][n1];
    if((m1==m2)&&(n1==n2)){
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("The added matrix is:");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("The subtracted matrix is:");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    }
    int e[m1][n2];
    if(n1==m2){
        printf("The multiplied matrix is:");
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                e[i][j]=0;
                for(int k=0;k<m2;k++){
                    e[i][j]=e[i][j]+a[i][k]*b[k][j];
                }
                printf("%d ",e[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}