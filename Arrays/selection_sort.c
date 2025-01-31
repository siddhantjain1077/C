#include <stdio.h>
int main()
{
    int arr[7] = {9, 33, 2, 98, 45, 66, 35};
    int n = 7;
    int position, swap, i ,j;
    for (i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n - 1; j++)
        {
            if (arr[i]>arr[j])
            {
                /*
            }
            
        }
        
    }
    
    
    //printf("%d",arr);
    // for (i = 0; i < (n - 1); i++)
    // {
    //     position = i;
    //     for (j = i + 1; j < n; j++)
    //     {
    //         if (arr[position] > arr[j])
    //             position = j;
    //     }
    // }
    // if (position != i)
    // {
    //     swap = arr[i];
    //     arr[i] = arr[position];
    //     arr[position] = swap;
    // }
    // for ( i = 0; i < n; i++)
    // {
    //     printf("%d",arr[i]);
    // }
    return 0;
}
    
