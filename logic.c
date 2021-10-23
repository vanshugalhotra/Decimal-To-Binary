#include<stdio.h>
#include<conio.h>

int main(){ 

    int n, rem, size, arr_size;

    printf("Enter the number: \n");
    scanf("%d",&n);

    int bin[n];
    size = n;

    for(int i=0; i<size; i++){
        rem = n%2;
        n = n/2;
        bin[i] = rem;
        if(n == 1){
            arr_size = i;
            // printf("%d \n", arr_size);
            break;
        }
        
    }
    bin[arr_size+1] = 1;
    printf("The Binary representation of \"%d\" is ", size);
    for(int j=arr_size+1; j>=0;j--){
        printf("%d", bin[j]);
    }
    

    getch();
    return 0;
}