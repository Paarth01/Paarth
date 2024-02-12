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
    printf("\n");
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("Enter element for the matrix of [%d][%d] indices:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:");
    printf("\n");
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            printf("Enter element for the matrix of [%d][%d] indices:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int c[m1][n2];
    int d[m1][n2];
    if(n1==m2){
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                c[i][j]=0;
                for(int k=0;k<m2;k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                d[i][j]=c[i][j];
            }
        }
    }
    int x=0;
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            if(d[i][j]!=a[i][j])
               x++;
        }
    }
    if(x==0)
        printf("The second matrix is identity matrix.");
    else
        printf("The second matrix is not identity matrix.");
    return 0;
}