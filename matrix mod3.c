#include<stdio.h>
int main(){
    int elem,size,i,j;
    
    printf("Enter the size of the matrix:");
    scanf("%d",&size);
    
    int mat[size][size];
    
    printf("Enter the elements of the matrix:");
    
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("enter the Element to be swapped:");
    scanf("%d",&elem);
    
    for(i=1;i<size;i++){
        for(j=0;j<size;j++){
          if(mat[i][j]==elem){
              mat[i][j]=mat[i-1][j];
          }  
        }
    }
    
    printf("Swapped Matrix:\n");
     for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",mat[i][j]);
        }printf("\n");
    }
    
    return 0;
}

