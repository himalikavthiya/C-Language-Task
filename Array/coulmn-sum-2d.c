// 6.WAP to perform coulmn-wise sum of 2D array.


#include<stdio.h>

int main(){

    int a[10][10],sum[10]={0,0,0},i,j;

    for(i=0; i<3; i++){

        for(j=0; j<3; j++){
            printf("Enter value of array: ");
            scanf(" %d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\t %d",a[i][j]);
            sum[j]=sum[j]+a[i][j];
        }
        printf("\n");
    }
    for(j=0; j<3; j++){
        printf("\t %d",sum[j]);
    }
    return 0;

}

/*int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, col_sum;

    for (i = 0; i < 3; i++) { 
        col_sum = 0; 
        for (j = 0; j < 3; j++) { 

            col_sum += arr[j][i]; 
        }
        printf("Sum of column %d = %d\n", i+1, col_sum);
    }*/