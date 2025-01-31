#include<stdio.h>

int search(int n, int arr[n],int no){
    int l = 0; int r = n - 1;
    int mid = (l+r)/2;

    while(l<r){
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

    printf("Enter the number of elements in the array");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter the number to be searched");
    scanf("%d",&no);

    int mid = search(n, arr, no);

    if(mid == -1){
        printf("Elements not to be found");
    }
    else{
        printf("Eleemts found at %d", mid + 1);
    }
    return 0;

}