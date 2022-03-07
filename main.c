#include<stdio.h>
#include<stdlib.h>

void pattern();

int main(){
    int n,r;
    printf("Number of rows : ");
    scanf("%d",&n);
    printf("Number of repetitions : ");
    scanf("%d",&r);



    void pattern(){
            for(int i=0; i<n+1; i++){
                for(int j=0; j<n+1; j++){
                    if(j<i || j == i){
                       printf("* ");
                     }

                }
                printf("\n");
            }
    }

    for(int k=1;k<r || k==r;k++){
        pattern();
    }

    return 0;
}
