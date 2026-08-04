#include <stdio.h>

int main (){
    int numbers[5]={2,4,6,8,10};
    int n=5;
    int target, low, high, mid;
    int found=0;

    printf("Data : 2 4 6 8 10\n");
    printf("number want to find: ");
    scanf("%d", &target);

    low=0;
    high=n-1;

    while (low<=high){
        mid=(low+high)/2;

        if(numbers[mid]==target){
            printf ("found in %d index!\n", mid);
            found=1;
            break;
        }else if(numbers[mid]<target){
            low = mid+1;
        } else{
            high=mid-1;
        }
    }
    if (!found){
        printf("Unknown!\n");
    }
    return 0;
}