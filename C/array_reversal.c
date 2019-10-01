/*
I feel shame to call this is as challenge even a new programming student without any programming knowledge also can pass this challenge at the first stage.

We have to understand array's theory, array is start with zero(0) and end with size-1. So if we have to print reversal  we have to print the last element which is in the array[size-1]. then array[size-2] and so on.

Just we have to know the loop ideology only. The final code will be look like this
*/
#include <stdio.h>


#include <stdlib.h>



int main()


{


    int num, *arr, i;


    scanf("%d", &num);


    arr = (int*) malloc(num * sizeof(int));


    for(i = 0; i < num; i++) {


        scanf("%d", arr + i);


    }

    for(i = num-1; i >=0; i--)


        printf("%d ", *(arr + i));


        free(arr);


    return 0;


}
