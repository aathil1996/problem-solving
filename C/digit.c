/*This will test your logic power, if you are new to programming or to C you may fell to give up when you do this one😌. You have to the thing char-48 = int and the for loop. That's all. Here is the answer if you have any doubt please let me know in comment section.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char *input = malloc(1024*sizeof(char));
    scanf("%s", input);
    input = realloc(input, strlen(input)+1);
    for(int j=0; j<10;j++){
        int count = 0;
        for(int i=0; i<strlen(input); i++){
            count = count+1;
        }
    }
    print("%d", count);
}