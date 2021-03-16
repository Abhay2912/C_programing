#include <stdio.h>
#include<math.h>
int reverse()
{
    int n,a,r=0;
    printf("enter the Number\n");
    scanf("%d",&n);
    int m=n;
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
        
    }
    
    printf("Reverse Of given number %d === %d",m,r);
    printf("\n\n CODE LOGIC IS IN LINE NO. 3 TO 19\n\n");
}
int armstrong()
{
    int n,a,s=0;
    printf("\nenter the number \n");
    scanf("%d",&n);
    int m=n;
    while(n>0)
    {
        a=n%10;
        s=s+ a*a*a;
        n=n/10;
    }
    if(s==m)
      printf("Its a Armstrong\n");
    else
      printf("its not a armstrong\n");
    
    printf("\n\n CODE LOGE IS IN LINR NO. 20 TO 38\n\n");
}
int sumofNaturalNo()
{
    int n,sum=0;
    printf("Ente nthe term of natural numbers");
    scanf("%d",&n);
    
    while(n>0)
    {
        sum=sum+n--;
    }
    printf("Sum of N Natural Numbers= %d",sum);
    printf("\n\n CODE LOGIC IS IN LINE NO. 39 to 50\n\n");
}
int fibonaicc()
{
    int n,f=0,s=1,t;
    printf("enter the term of fibonaicc series\n");
    scanf("%d",&n);
    printf("%d, %d",f,s);
    while(n-2>0)
    {
        t=f+s;
        printf(" ,%d",t);
        --n;
        f=s;
        s=t;
    }
    
    printf("\n\n CODE LOGIC IS IN LINE NO. 52 TO 67\n\n");
}
int LCM_NO()
{
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.\n", n1, n2, max);
            break;
        }
        ++max;
    }
    printf("\n\n CODE IS LOGIC IS IN LINE NO. 69 TO 84  \n\n");
}
int palindrome()
{
    int n,a,r=0;
    printf("enter the number \n");
    scanf("%d",&n);
    
    int m=n;
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
        
    }
    (m==r)? printf("Given No. is palindrome No.\n") : printf("It's not a palindrome No.\n"); //If else in one line nothing else::
    
    
}
int main()
{
    int ch=0;
    do{
        //int ch;
        printf("ENTER PROGRAM NO.\n 1--->To Reverse A given Numbers\n 2---> To Find Number Is Armstrong Or Not\n 3--->To Calculate Sum of Natural Numbers.\n");
        printf(" 4--->To Display N Fibonaicc series.\n 5--->Find LCM of two Numbers.\n 6--->Check Whether a Number is A Palindrome or Not\n");
       // printf(" 7--->To Find the sum of a lower triangular matrix. \n 8--->Find determinant of a matrix\n 9--->To Check the sparse matrix\n");
        printf("Enter 10 to exit \n");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
             reverse();
            break;
            case 2:
             armstrong();
            break;
            case 3:
              sumofNaturalNo();
            break;
            case 4:
              fibonaicc();
            break;
            case 5:
              LCM_NO();
            break;
            case 6:
              palindrome();
            break;
            /*case 7:
              sumLowerTringal();
            break;
            case 8:
                //int n,m,result,ar[10][10];  Varibles are declared above in main function
                 printf("Enter the order of Matrics row = columm\n");
                 scanf("%d%d",&n,&m);
                 if(n==m)
                 {
                    printf("Enter the Elemnet of  matrics \n ");
                    for(int i=0;i<n;i++)
                    {
                        for(int j=0;j<n;j++)
                         scanf("%d",&ar[i][j]);
                    }
                    result=determinantOfMatrics(ar, n);
                    printf("DETERMINAT OF ENTERED MATRICS=%d", result);
                    
                 }else
                 printf("PLEASE Enter the Squre Matrix\n ");
                  
                  printf("\n\n   CODE LOGICIS IN LINE NO. 245 TO 282 AND  SOME PART IN MAIN function \n");
            break;
            case 9:
               checkSparceMatrice();
            break;
            case 10:
            
            break;*/
            default:
            printf("Invalid Input\n");
        }
    }while(ch!=10);
}




