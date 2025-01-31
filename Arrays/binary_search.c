#include <stdio.h>

int find_mid(int n, int arr[n], int no){
    int l = 0, r = n-1;
    int mid = (l+r)/2;
    while(l < r){
        if(arr[mid] == no){
            return mid;
        }
        if(arr[mid] < no){
            l = mid +1; 
        }
        if(arr[mid] > no){
            r = mid -1;
        }
    }
    return -1;
}

int main(){
    int n, no;
    
    printf("Enter the no of elements in the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array : ");
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be found : ");
    scanf("%d", &no);

    int mid = find_mid(n, arr, no);

    if(mid == -1){
        printf("Element not found!");
    }
    else{
        printf("Element founf in %d position", mid + 1);
    }
    return 0;
}