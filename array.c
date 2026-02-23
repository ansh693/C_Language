// wap to store the marks of 3 students in an array and print them
// #include<stdio.h>
// int main(){
//     int marks[3];
//     printf("enter the marks 1 student:");
//     scanf("%d",&marks[0]);
//     printf("enter the marks 2 student:");
//     scanf("%d",&marks[1]);                      
//     printf("enter the marks 3 student:");
//     scanf("%d",&marks[2]);
//     printf("%d %d %d",marks[0],marks[1],marks[2]);
//     return 0 ;
// }

// wap to enter to enter price of 5 item and print them with their total price with gst 
// #include<stdio.h>
// int main(){
//     float price[5];
//     printf("enter the price of the 5 item:");
//     scanf("%f",&price[0]);
//     scanf("%f",&price[1]);
//     scanf("%f",&price[2]);
//     scanf("%f",&price[3]);
//     scanf("%f",&price[4]);
//     printf("total price gst of 1 item is %f\n", price[0]+(0.18*price[0]));
//     printf("total price gst of 2 item is %f\n", price[1]+(0.18*price[1]));
//     printf("total price gst of 3 item is %f\n", price[2]+(0.18*price[2]));
//     printf("total price gst of 4 item is %f\n", price[3]+(0.18*price[3]));
//     printf("total price gst of 5 item is %f\n", price[4]+(0.18*price[4]));
//     return 0 ;
// }


// pointer using camprision and subription
// #include<stdio.h>
// int main(){
//     int a = 3 ;
//     int b = 5 ;
//     int *ptr = &a ;
//     int *ptr2 = &b ;
//     printf("difference = %u\n",ptr-ptr2); 
//     // gives the difference in the number of elements between the two pointers
//     ptr = &b ;
//     printf("difference = %u\n",ptr-ptr2);
//     printf("ptr == ptr2 ? %d\n",ptr == ptr2);
//     return 0 ;

// }

// wap to store the marks of 5 students in an array and print them using pointer
// #include<stdio.h>
// int main(){
//         int addhar[5];

//         int *ptr = &addhar[0] ;
//         for(int i=0 ; i<5 ; i++){
//             printf("%d index" , i);
//             scanf("%d",(ptr+i));

//         }
//         for(int i=0 ; i<5 ; i++){
//             printf("%d index = %d\n" , i , *(ptr+i));
//         }
//     return 0 ;

    
// }

// reverse using array
// #include<stdio.h>
// int reverse(int arr[] , int n );
// void  printarr(int arr[] , int n);
// int main(){
//     int arr[] = {1,2,3,4,5};
//     reverse(arr , 5);
//     printarr(arr , 5);
//     return 0 ;
// }
// void printarr(int arr[] , int n){
//     for(int i =0 ; i<n ; i++){
//         printf("%d ",arr[i]);
//     }
// }
// int reverse(int arr[] , int n){
//     for(int i =0 ; i<n/2 ; i++){
//         int fristval = arr[i];
//         int secval = arr[n-i-1];
//         arr[i] = secval ;
//         arr[n-i-1] = fristval ;
//     }
// }


// wap to print the first n fibonacci number using array
// #include<stdio.h>
// int main(){
//     int n ;
//     printf("enter n (n>2):");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;
//     for(int i=2 ; i<n ; i++){
//         fib[i]=fib[i-1]+fib[i-2];
//         printf("%d ",fib[i]);
//     }
//     printf("\n");
//     return 0 ;
// }


#include<stdio.h>

void storetable(int arr[][10] , int n , int m , int number);

int main(){

    int table[2][10];

    storetable(table , 0 , 10 , 5);
    storetable(table , 1 , 10 , 7);

    for (int i=0 ; i<10 ; i++){
        printf("%d\t" , table[0][i]);
    }

    printf("\n");

    for (int i=0 ; i<10 ; i++){
        printf("%d\t" , table[1][i]);
    }

    return 0;
}

void storetable(int arr[][10] , int n , int m , int number){
    for (int i=0 ; i<m ; i++ ){
        arr[n][i] = number * (i+1);
    }
}