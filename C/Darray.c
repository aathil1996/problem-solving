/*
This challenge has nothing to do with arrays!
As I have mentioned at the first line this is not much about arrays, if you have basic knowledge on arrays and pointers you can crack this challenge. (Even you can crack without know anything 😋)

01. Start
Here we will have two integers one will be the size of array and other one will be the sum of the elements in the array. Then,We have to get the array size(n) from user so code will be look like this,


02.Middle

then we have to define the array,

int main(){
    int n,sum =0;
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int)); 
}

after define the array we have to fill the arrays with user inputs and we have find the sum of elements that is the task😏.

int main(){

    int n,sum =0;
    scanf("%d",&n);
    int *val = malloc(n*sizeof(int)); 

    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
}

03.Final
We have filled the array there is one more thing to crack the challenge, yeah we have to add all the things together and calculate the sum💪 we use same for loop to calculate the sum of elements.

int main(){

    int n,sum =0;
    scanf("%d",&n);
    int *val = malloc(n*sizeof(int)); 

    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
    }
}

Have you finished? nope, we have to print the output also; just do the thing like this, (I hope you know how to print in C)

int main(){

    int n,sum =0;
    scanf("%d",&n);
    int *val = malloc(n*sizeof(int)); 

    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
    }

   printf("%d",sum);
}

You have done the job well. but as good programmer you have to free the memory when you have finish all the things. Memory is valuable than next challenges.*/

int main(){

    int n,sum =0;
    scanf("%d",&n);
    int *val = malloc(n*sizeof(int)); 

    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
    }

   printf("%d",sum);
   free(val);
}