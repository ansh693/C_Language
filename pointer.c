// #include<stdio.h>
// int main(){
//     int a = 10 ;
//     int *ptr ;
//     ptr =&a ;
//     printf("%d\n",&a);  // prints the actual value
//     printf("%p\n",*ptr);// prints the value stored at the address
//     printf("%p\n",ptr); // prints the address stored in the pointer
//     printf("%d\n",a);  // prints the value of a
//     return 0 ;

// }

#include<stdio.h>
void dowork( int a , int b , int *sum , int *prod , int *avg);  
int main(){
    int a = 3 , b =5 ;
   
    int sum , prod , avg ;
    dowork(a ,b , &sum , &prod , &avg);
    printf("sum = %d , prod = %d , avg = %d", sum , prod , avg);
    return 0 ;




}
void dowork( int a , int b , int *sum , int *prod , int *avg){
    *sum = a + b ;
    *prod = a*b ;
    *avg = (a+b)/2 ; 
}