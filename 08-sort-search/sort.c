#include <stdio.h>

int main (){
    int numbers[5]={9,4,6,2,0};
    int n=5;
    int i,j,temp;

    printf("before sorting :");
    for ( i = 0; i < n; i++) printf("%d", numbers[i]);
    printf("\n");
    
    for (i=0; i<n-1; i++){
        for (j=0; j<n-1-i; j++){
            if (numbers[j]>numbers[j+1]){
                temp=numbers[j];
                numbers[j]=numbers[j+1];
                numbers [j+1]=temp;
            }
        }
    }
    printf("after sorting :");
    for (i=0; i<n; i++) printf("%d",numbers[i]);

    return 0;
}

    