#include<stdio.h>
void main(){
    
    int matrix1[3][3],matrix2[3][3],sum[3][3],i,j;


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter valude of matrix [%d][%d]",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    
    printf("\n");
    printf("Enter value of matrix 2\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter valude of matrix [%d][%d]",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    
    
    
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        sum[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }
    
    
    
    
    
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
     printf("\t%d\t",sum[i][j]);
    
        }
     printf("\n");
        
    }
    
    
    
}