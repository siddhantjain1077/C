#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements in the array : ");
    
    for(int i = 0; i < n; i++){
        scanf("%d" ,&arr[i]);
    }

    int no;

    printf("Enter the element to be searched : ");
    scanf("%d", &no);

    for(int i = 0; i < n; i++){
        if(arr[i] == no){
            printf("Element found at position %d", i+1);
        }
        if(i == n){
            printf("Element not found");
        }
    }
    return 0;
}
