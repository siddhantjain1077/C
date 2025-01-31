#include<stdio.h>

int search(int n, int arr[n], int no){
    int l = 0; int r = n - 1;

    int mid = (l+r)/2;
    while(l < r){
        if(arr[mid] == no){
            return mid;
        }
        if(arr[mid] > no){
            r = mid - 1;
        }
        if(arr[mid] < no){
            l = mid + 1;
        }
    }
    return -1;
}




int main(){
    int n, no;
    
    printf("Enter the numbe rof elements to be enetered");
    scanf("%d",&n);
    int arr[n];
    printf("Elements are :");
    for(int i=0; i< n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched :");
    scanf("%d", &no);

    int mid = search(n, arr, no);

    if(mid == -1){
        printf("Elements not found");
    }
    else{
        printf("Elements fount at %d", mid + 1);
    }
    return 0;
}