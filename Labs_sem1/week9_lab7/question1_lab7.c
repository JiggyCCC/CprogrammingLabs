/*To check what is in arr[8]*/
// Charlie Casey Carney
// 11/11/25

#include <stdio.h>

int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i; 

    for (i = 0; i < 10; i++)
    {
        arr[i] = 9 - i;
    }
        // Display the contents of arr[8]
    for (i = 0; i < 10; i++)
    {
        arr[i] = arr[ arr[i] ];
    }
        // Display the contents of arr[8]

    printf("the value in arr[8] is %d\n", arr[8]);

    return 0;
}