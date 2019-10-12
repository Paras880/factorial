#include<stdio.h>
int main()

{
    int n,i;
    scanf("%d",&n);
    int prod=1;
    for(i=2;i<n;i++)
        prod=prod*i;
    printf("factorial %d",prod);
    //code in java
    class FactorialExample{  
     public static void main(String args[]){  
      int i,fact=1;  
      int number=5;//It is the number to calculate factorial    
      for(i=1;i<=number;i++){    
          fact=fact*i;    
      }    
      System.out.println("Factorial of "+number+" is: "+fact);    
     }  
    }  
