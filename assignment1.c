//matrix operations 

#include<stdio.h>

int main(){
    int i, j;
    int A[10][10], B[10][10], add[10][10], sub[10][10], mul[10][10], trans1[10][10], trans2[10][10];
    int k;
    int size;
    
    
    
    printf("performing matrix operations in c: \n");
   printf("enter the size of both the matrices\n");
   scanf("%d", &size);
   
   printf("enter the values of first array A:\n");
   for (i=0;i<size;i++){
       for (j=0;j<size;j++){
           scanf("%d", &A[i][j]);
       }
   }
    
    
     printf("enter the values of second array B:\n");
   for (i=0;i<size;i++){
       for (j=0;j<size;j++){
           scanf("%d", &B[i][j]);
       }
   }
   
   //making the menu for all operations 
   int choice;
   printf("arithmetic operations on matrices\n");
   printf("1.addition \n2.subtraction \n3.multiplication \n4.transpose of A and B\n 5.exit the program\n");
    
    printf("enter a value between 1 to 5 to perform any of the above operations : \n ");
    scanf("%d", &choice);
    
   
    switch(choice){
        
        case 1:
        printf("performign addition of matrices A and B : \n");
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                add[i][j]=A[i][j]+B[i][j];
                printf("%d\t", add[i][j]);
            }
            printf("\n");
        }
               
         break;
        
        case 2:
        printf("performign subtraction of matrices A and B : \n");
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                sub[i][j]=A[i][j]-B[i][j];
                printf("%d\t", sub[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 3:
        printf("performign multiplication of matrices A and B : \n");
        int k;
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                mul[i][j]=0;
                for(k=0;k<size;k++){
                    mul[i][j]=mul[i][j]+ A[i][k]*B[k][j];
                }
            }
        }
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
        break;
        
        case 4:
        printf("performing transpose of both matrices A and B\n");
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                trans1[i][j]=A[j][i];
                trans2[i][j]=B[j][i];
                printf("matrix A transpose:\n %d\t", trans1);
                printf("matrix B transpose:\n %d\t", trans2);
            }
            printf("\n");
        }
        break;
        
        case 5:
        printf("program exited\n");
        return 0;
        
        break;
        
        
        default:
        printf("invalid option! please enter a choice between 1 to 5\n");
        return 0;
        break;

      return 0;      

            


}
return 0;
}
