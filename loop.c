//for loop use for 1 to 10  
//#include<stdio.h>

//int main(){
//for(int i=1 ; i<=10 ; i++){
//printf("%d\n" , i );
//    }
//return 0 ; 
//}

//for loop write hello ansh 5 times 

//#include<stdio.h>
//int main(){
//    int i ;
//    for( i=1 ; i<=5 ; i++)
//    {
//        printf("hello ansh\n");
//    }
//    return 0 ; 
//}

// ++i pre increment iterator , i++ post increment iterator 

//#include<stdio.h>
//int main(){
    //int  i = 1 ;
    // use of the post increment  
    //printf("%d\n" , i++ );
    //printf("%d\n" , i );
    
    // use of the pre increment 
   // printf("%d\n" ,++i);
   // printf("%d\n" , i );

    //return 0 ;
//}

//while
// while 1 to 5 number
// #include<stdio.h>
// int main(){
//     int i = 1 ;
//     while (i<=5){
//         printf("%d\n", i);
//         i++;
//     }
//     return 0 ;
// }

// while print hello 5 times
// #include<stdio.h>
// int main(){
//     int i = 1 ; 
//     while(i<=5){
//         printf("hello ansh\n");
//         i++ ;
//     }
//     return 0 ;
// }


// print the n given by the user  
// #include<stdio.h>
// int main(){
//     int n , i ;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     i = 0 ;
//     while(i<=n)
//     {
//         printf("%d\n", i );
//         i++ ;
//     }
//     return 0 ;

    
// }


// take number from the user and till the user enter the odd number 
// using do whlie loop 
// #include<stdio.h>
// int main(){
//     int n ; 
//     do {
//         printf("enter the number:");
//         scanf("%d",&n);
//         printf("%d\n",n);
//         if (n%2 != 0 ){
//             break;
//         }
//     }
//     while(1);
//     printf("thank you ");
//     return 0 ;  
// }

// take number fom the user till the numder is not the multiple of 7 
#include<stdio.h>
int main(){
    int n ;
    do {
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d",n);
        if(n %7 ==0 ){
            break;
        }
        
    }while(1);
    return 0 ;
}
