#include<stdio.h>
#include<conio.h>


int addMatrix()
{ 
    int a[10][10], b[10][10],c[10][10];
     int n1,m1,n2,m2;
    printf("entert the Row and columm of first matrix\n");
    scanf("%d%d",&n1,&m1);
   printf("entert the Row and columm of second matrix\n");
    scanf("%d%d",&n2,&m2);
   
    if(n1==n2 &&m1==m2)
    {
        printf("enter the element of first matrix\n");
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
             scanf("%d",&a[i][j]);
            
        }
        
        printf("enter the elment of second matrix\n");
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
               scanf("%d",&b[i][j]);
        }
        
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
             c[i][j]=a[i][j]+b[i][j];
        }
        
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
             printf("%d  ",c[i][j]);
        
         printf("\n");
        }
    }else printf("The order of both matrics are not  equal so addition is not possible\n");
    
    printf("\n\nCODE IS LINE NO. 5 TO 42\n\n");
}

int scalarMatrics()
{
    int n,m,mlti, ar[10][10];
    printf("Enter the row and columm matrics\n");
    scanf("%d%d",&n,&m);
    
    printf("Enter the constant Multipilier\n");
    scanf("%d",&mlti);
    
    printf("Enter the Elemnet of matrics \n ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
         scanf("%d",&ar[i][j]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
         printf("%d  ", mlti*ar[i][j]);
    printf("\n");
    }
    
    printf("\n\nCODE LOGIC IS IN LINE NO. 44 TO 68\n\n");
}

int equalMatrics()
{
    int n1,m1,n2,m2, temp=1,ar1[10][10], ar2[10][10];
    
    printf("enter the row and columm of first matrics\n");
    scanf("%d%d",&n1,&m1);
    printf("enter the row and columm of 2nd matrics\n");
    scanf("%d%d",&n2,&m2);
    
    if(n1==n2 && m1==m2)
    {
        printf("Enter the Elemnet of first matrics \n ");
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
             scanf("%d",&ar1[i][j]);
        }
        printf("Enter the Elemnet of 2nd matrics \n ");
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<m2;j++)
            scanf("%d",&ar2[i][j]);
        }
        
        
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
                 if(ar1[i][j]!=ar2[i][j])
                 {
                    temp=0;
                    break;
                 }
            }
        }
    }else temp=2;
    
    
    if(temp==1)
        printf("Both the matrics are equal\n");
    else
    if(temp==2) 
        printf("ORDER OF MATRICS ARE NOT EQUAL SO WHOLE MATRICS IS NOT EQUAL\n");
    else
    printf(" Matrics are Not Equal\n");
    
    
    printf("\n\nCODE LOGIC IS IN LIME NO. 70 TO 118\n\n");
}

int sumMinorDiagonal()
{
    int ar[10][10],n,m, s=0;
    printf("Enter the order of matrics ROW and columm\n");
    scanf("%d%d",&n,&m);
    
    if(n==m)
    {
        printf("Enter the Elemnet of  matrics \n ");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
             scanf("%d",&ar[i][j]);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i+j==n-1)
                    s=s+ar[i][j];
            }
        }
        
        printf("Sum of Minor Diagonal =%d",s);
    }else printf("\n PLEASE Enter Squrae Matrics\n\n");
    
    printf("\n\n  CODE LOGIC IS LINE NO. 121 TO 144\n\n");
}
int interChangeDiagonals()
{
     int ar[10][10],n,m, s=0,temp;
    printf("Enter the order of matrics ROW and columm\n");
    scanf("%d%d",&n,&m);
    
    if(n==m)
    {
        printf("Enter the Elemnet of  matrics \n ");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
             scanf("%d",&ar[i][j]);
        }
        
        for(int i=0;i<n;i++)
        {
            temp=ar[i][i];
            ar[i][i]=ar[i][n-1-i];
            ar[i][n-1-i]=temp;
        }
        
         
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
         printf("%d  ", ar[i][j]);
    printf("\n");
    }
        
    }else printf("\n PLEASE Enter Squrae Matrics\n\n");
    
    printf("\n\nCODE LOGIC IS IN LINE NO. 150 TO 185\n\n");
    
}
int lowerTringular()
{
    int ar[10][10],n,m, s=0,temp;
    printf("Enter the order of matrics ROW and columm\n");
    scanf("%d%d",&n,&m);
    
    if(n==m)
    {
        printf("Enter the Elemnet of  matrics \n ");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
             scanf("%d",&ar[i][j]);
        }
         
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(i>j)
                printf("%d  ", ar[i][j]);
             else printf("%d  ",0);
            }
        printf("\n");
        }
            
    }else printf("\n PLEASE Enter Squrae Matrics\n\n");
    
    printf("\n\n  CODE IS IN LINE NO. 185 TO 217\n\n");
}
int sumLowerTringal()
{
    int ar[10][10],n,m, s=0;
    printf("Enter the order of matrics ROW and columm\n");
    scanf("%d%d",&n,&m);
    
    if(n==m)
    {
        printf("Enter the Elemnet of  matrics \n ");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
             scanf("%d",&ar[i][j]);
        }
         
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(i>j)
                s=s+ar[i][j];
            }
        }
        printf("sum of lower trinagle=%d", s);
            
    }else printf("\n PLEASE Enter Squrae Matrics\n\n");
    
    printf("\n\n  CODE IS IN LINE NO. 215 TO 243\n\n");
}

int determinantOfMatrics(int ar[10][10], int n)
{
    int smalMatrics[10][10],detrmnt;
    //int c[100];
    int sign=1;
   
    if(n == 2)
    {
        detrmnt = 0;
        detrmnt = ar[0][0]*ar[1][1]-ar[0][1]*ar[1][0];
        return detrmnt;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
           int k1=0,k2=0;
            for(int j=0;j<n;j++)
            {
                for(int t=0;t< n;t++)
                {
                    if(j != 0 && t != i)
                    {
                        smalMatrics[k1][k2] = ar[j][t];
                        k2++;
                        if(k2>n-2)
                        {
                            k1++;
                            k2=0;
                        }
                    }
                }
            }
            detrmnt = detrmnt + sign*(ar[0][i]*determinantOfMatrics(smalMatrics,n-1));
           sign=-1*sign;
        }
    }
    return detrmnt;
    
}
int checkSparceMatrice()
{
    int n,m,ar[10][10], c=0;
    printf("Enter the order of matrics row and columm\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elment of matrices\n");
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
         scanf("%d",&ar[i][j]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i][j]==0)
                c++;
        }
    }
    
    if(c>n*m/2)
     printf("Given Matrics is Sparse Matrics\n");
    else 
     printf("It's Not a Sparse Matrics \n");
    
    printf("\n\n   CODE LOGIC IS IN LINE NO. 285 TO 312\n\n");
}
int main()
{ 
    int ch=0;
     do{
        //int ch;
        printf("ENTER PROGRAM NO.\n 1--->To add two matrics\n 2---> To perform scalar Multipication\n 3--->To Check whether two matrices are equal or not.\n");
        printf(" 4--->Find the sum of minor diagonal elements of a matrix.\n 5--->Interchange diagonals of a matrix.\n 6--->Find a lower triangular matrix\n");
        printf(" 7--->To Find the sum of a lower triangular matrix. \n 8--->Find determinant of a matrix\n 9--->To Check the sparse matrix\n");
        printf("Enter 10 to exit \n");
        scanf("%d",&ch);
        
        int n,m,result,ar[10][10];
        switch(ch)
        {
            case 1:
             addMatrix();
            break;
            case 2:
             scalarMatrics();
            break;
            case 3:
              equalMatrics();
            break;
            case 4:
              sumMinorDiagonal();
            break;
            case 5:
              interChangeDiagonals();
            break;
            case 6:
              lowerTringular();
            break;
            case 7:
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
            
            break;
            default:
            printf("Invalid Input\n");
        }
     }while(ch!=10);
}









