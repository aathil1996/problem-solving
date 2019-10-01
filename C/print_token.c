/*
This one little bit tricky one but not hard one you have to understand the simple logic behind this challenge when you find the logic answer will pop up in your mind.

The loop should run until it reach the maximum size of array, while it is running it want to check the array also if there will be space in the pointer rather than letter it should store the new line on that pointer.

Final code is here,
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char *s;
    s = malloc(1024*sizeof(char));
   scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(int i=0; i<strlen(s);i++){
        if(*(s+i) == ' '){
            *(s+i) = '\n';
        }
    }
    printf("%s", s);
    return 0;
}