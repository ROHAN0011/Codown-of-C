
//1. Program to print "Hello World!!".

#include<stdio.h>
#include<conio.h>

void main() 
{
  clrscr();
  printf("Hello World!!");
  getch();
}



//2. Program to assign values of two numbers and print their addition.

#include<stdio.h>
#include<conio.h>

void main()
{
  int a=10,b=20;
  clrscr();

  int ans = a + b;

  printf("Addition is : %d",ans);

  getch();
}



//3. Program to accept values of two numbers and print their addition.

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,ans;
  clrscr();

  printf("Enter 1st number:");
  scanf("%d",&a);

  printf("Enter 2nd number:");
  scanf("%d",&b);

  ans = a + b;

  printf("Addition is : %d",ans);

  getch();
}



//4. Program to print simple interest.

#include<stdio.h>
#include<conio.h>

void main()
{
  float interest, p, r, n;
  clrscr();

  printf("Enter value of P: ");
  scanf("%f",&p);

  printf("Enter value of R: ");
  scanf("%f",&r);

  printf("Enter value of N: ");
  scanf("%f",&n);

  interest=p*r*n/100f;

  printf("Simple Interest : %f", interest);

  getch();
}



//5. Program to accept value of radius and print area of a circle.

#include<stdio.h>
#include<conio.h>

void main()
{
  float area,radius;
  clrscr();

  printf("Enter Radius:");
  scanf("%f",&radius);

  area=3.14*radius*radius;

  printf("Area : %6.2f",area);

  getch();
}



//6. Program to accept a number from user and print it’s square & cube.

#include<stdio.h>
#include<conio.h>

void main()
{
  int n,sqre,cube;
  clrscr();

  printf("Enter Number: ");
  scanf("%d",&n);

  sqre=n*n;
  cube=n*n*n;

  printf("\nSquare: %d\nCube: %d",sqre,cube);

  getch();
}



//7. Program to accept two values of a & b and swap their values.

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,temp;
  clrscr();

  printf("Enter 1st number : ");
  scanf("%d",&a);

  printf("Enter 2nd number : ");
  scanf("%d",&b);

  printf("\nBefore Swapping...");
  printf("A=%d, B=%d",a,b);

  temp=a;
  a=b;
  b=temp;

  printf("\nAfter Swapping...");
  printf("\n A=%d, B=%d",a,b);

  getch();
}



//8. Program to accept two number and print largest among them.

#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b;
  clrscr();

  printf("Enter 1st number : ");
  scanf("%d",&a);

  printf("Enter 2nd number : ");
  scanf("%d",&b);

  if(a>b)
    printf("Largest value is : %d",a);
  else
    printf("Largest value is : %d",b);

  getch();
}



//9. Program to accept a number and check whether the number is Positive, Negative or Zero.

#include<stdio.h>
#include<conio.h>

void main()
{
  int n;
  clrscr();

  printf("Enter number: ");
  scanf("%d",&n);

  if(n>0)
    printf("Number is positive");
  else if(n<0)
    printf("Number is negative");
  else
    printf("Number is Zero");

  getch();
}



//10. Program to check whether the number is even or odd.

#include<stdio.h>
#include<conio.h>

void main()
{
  int n;
  clrscr();

  printf("Enter number:");
  scanf("%d",&n);

  if(n%2==0)
    printf("Number is even");
  else
    printf("Number is odd");

  getch();
}



//11. Program to accept three numbers from user and print them in ascending and decending order.

#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter numbers:");
  scanf("%d %d %d",&a,&b,&c);

  if ((a>=b)&&(a>=c)) {
    if (b>=c) {
      printf("\nDesc : %d %d %d",a,b,c);
      printf("\nAsc : %d %d %d",c,b,a);
    } else {
      printf("\nDesc : %d %d %d",a,c,b);
      printf("\nAsc : %d %d %d",b,c,a);
    }
  } else if ((b>=a)&&(b>=c)) {
     if (a>=c) {
        printf("\nDesc : %d %d %d",b,a,c);
     }
  } else {
    if (b>=a) {
      printf("\nDesc : %d %d %d",c,b,a);
      printf("\nAsc : %d %d %d",a,b,c);
    } else {
      printf("\nDesc : %d %d %d",c,a,b);
      printf("\nAsc : %d %d %d",b,a,c);
    }
  }
  getch();
}



//12. Program to find the roots of a quadratic equation.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a, b, c, discriminant, real;
    double r1, r2, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2f and %.2f", r1, r2);
    }
    else if (discriminant == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are: %.2f and %.2f", r1, r2)
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-discriminant) / (2 * a);
        printf("Roots : %.2f+%.2fi and %.2f-%.2fi", real, imag, real, imag);
    }
    getch();
}



//13. Program to accept rollnumber and marks of three subjects from user and print total marks, average and grade.

#include<stdio.h>
#include<conio.h>

void main()
{
    int RollNum, m1, m2, m3, total;
    float avg;
    clrscr();

    printf("Enter Roll Number : ");
    scanf("%d",&RollNum);

    printf("Enter marks for three subjects : ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("\nTotal is : %d", total);
    printf("\nAverage is : %5.2f", avg);

    if(avg>80)
    {
        printf("\nGrade : A");
    }    
    else if((avg>60)&&(avg<=80))
    {
        printf("\nGrade : B");
    }    
    else if((avg>40)&&(avg<=60))
    {
        printf("\nGrade : C");
    }    
    else if((avg>=33)&&(avg<=40)
    {
        printf("\nGrade : D");
    }    
    else
    {
        printf("\nGrade : Fail");
    }   

    getch();
}



//14. Program to print numbers from 1 to n using while loop.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1, n;
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }
    getch();
}



//15. Program to print numbers from n to 1 using Do While loop.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1, n;
    clrscr();
    
    printf("Enter n : ");
    scanf("%d", &n);

    i=n;

    do
    {
        printf("%d\t",i);
        i--;
    } while (i >= 1);

    getch();
}



//16. Program to print first n even numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 2, n;
    //to print odd numbers set variable i = 1
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d\t", i);
        i = i + 2;
    }
    getch();
}



//17. Program to accept a number and print that number in reverse order.
/*Ex:- 1024
Output:- 4201*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int reminder, n;
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);

    while(n>0)
    {
        reminder=n%10;
        printf("%d", reminder);
        n=n/10;
    }
    getch();
}



//18. Program to accept a number and print sum of it’s digits.

#include<stdio.h>
#include<conio.h>
void main()
{
    int reminder, sum=0, n;
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);

    while(n>0)
    {
        reminder = n % 10;
        sum = sum + reminder;
        n = n / 10;
    }
    printf("Sum of digits : %d",sum);
    getch();
}



//19. Program to take a number from user and check whether it is Armstrong number or not.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=2, temp, rem, sum=0, n;
    clrscr();

    printf("Enter n : ");
    scanf("%d", &n);
    temp = n;

    while(n>0)
    {
        rem = n%10;
        sum = sum+(rem*rem*rem);
        n = n/10;
    }

    if(temp == sum)
        printf("Entered number is an Armstrong Number");
    else
        printf("Entered number is not an Armstrong Number");

    getch();
}



//20. Program to take number from user and print table of that number.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, n;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d × %d = %d\n", n, i, n*i);

    getch();
}



/* 21. Pattern 1 

•
• •
• • •
• • • •
• • • • •    */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    clrscr();

    printf("Enter number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("• ");
        }
        printf("\n");
    }
    getch();
}



/* 22. Pattern 2

• • • • •
• • • •
• • •
• •
•                 */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &n);

    for(i=n; i>=1; i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("• ");
        }
        printf("\n"); 
    }
    getch();
}



/* 23. Pattern 3

     •
    • •
   • • •
  • • • •
 • • • • •         */

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch = '*';
    int n,i, j, no_of_spaces = 0, spaceCount;

    printf("Enter number : ");
    scanf("%d", &n);
    printf("\n");
    no_of_spaces = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (spaceCount = no_of_spaces; spaceCount >= 1; spaceCount--)
        {
            printf("  "); 
        }
        for (j = 1; j <= i; j++)
        {
            printf("%2c", ch);
        }
        printf("\n");
        no_of_spaces--;
    }
    getch();
}



/* 24. Pattern 4

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5        */

#include<stdio.h>
#include<conio.h>

void main()
{
    int n, i, j;
    printf("Enter number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    getch();
}



/* 25. Pattern 5

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1       */

#include <stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    getch();
}



/* 26. Pattern 6

A
B C
D E F
G H I J
K L M N O       */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &n);
    int c = 'A';

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", c);
            c = c + 1;
        }
        printf("\n");
    }
    getch();
}



/* 27. Pattern 7

1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1    */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    getch();
}



/* 28. Pattern 8 (Binary Pattern)

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1      */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j;
    int count = 1;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", count++ % 2);
            if (j == i && i != 5)
                printf("\n");
        }
        if (i % 2 == 0)
            count = 1;
        else
            count = 0;
    }
    getch();
}



/* 29. Pattern 9

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1              */

#include <stdio.h>
#include <conio.h>
void main()
{
  int i, j, k, l, n;
  clrscr();

  printf("Enter number : ");
  scanf("%d", &n);
  printf("\n");

  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
      printf("%d", j);

    printf("\n");
  }
  getch();
}



/* 30. Pattern 10

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1           */

#include <stdio.h>
#include <conio.h>
void main()
{
  int i, j, k;
  clrscr();

  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= 1; j--)
    {
      if (j <= i)
      {
        printf("%d", j);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  getch();
}



/* 31. Pattern 11

1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1        */

#include <stdio.h>
#include <conio.h>

void main()
{
  int i, j, k;
  clrscr();

  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (j <= i)
      {
        printf("%d ", j);
      }
      else
      {
        printf(" ");
      }
    }
    for (j = 5; j >= 1; j--)
    {
      if (j <= i)
      {
        printf("%d ", j);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  getch();
}



/* 32. Floyd's triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14       */

#include <stdio.h>
#include <conio.h>
void main()
{
  int n, i, c, a = 1;
  clrscr();

  printf("Enter the number of rows : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ", a);
      a++;
    }
    printf("\n");
  }
  getch();
}



/* 33. Pyramid

    *
   * * 
  * * *
 * * * *
* * * * *         */

#include<stdio.h>
#include<conio.h>
void main()
{
    int row, c, n, temp;
    clrscr();

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    temp = n;

    for (row = 1; row <= n; row++)
    {
        for (c = 1; c < temp; c++)
            printf(" ");

        temp--;

        for (c = 1; c <= 2 * row - 1; c++)
            printf("*");

        printf("\n");
    }
    getch();
}



/* 34. Pyramid 2

        *
      *A*
    *A*A*
  *A*A*A*
*A*A*A*A*      */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, c, k, space, count = 1;
    clrscr();

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    space = n;

    for (c = 1; c <= n; c++)
    {

        for (k = 1; k < space; k++)
            printf(" ");

        for (k = 1; k <= c; k++)
        {
            printf("*");

            if (c > 1 && count < c)
            {
                printf("A");
                count++;
            }
        }

        printf("\n");
        space--;
        count = 1;
    }
    getch();
}



/* 35. Number Pyramid

        1
      232
    34543
  4567654
567898765             */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, c, d, num = 1, space;
    clrscr();

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    space = n - 1;

    for (d = 1; d <= n; d++)
    {
        num = d;

        for (c = 1; c <= space; c++)
            printf(" ");

        space--;

        for (c = 1; c <= d; c++)
        {
            printf("%d", num);
            num++;
        }

        num--;
        num--;

        for (c = 1; c < d; c++)
        {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }
    getch();
}



/* 36. Pascal triangle
 
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1            */

#include<stdio.h>
#include<conio.h>

long fact(int);

void main()
{
    int line, i, j;
    clrscr();

    printf("Enter the number : ");
    scanf("%d", &line);

    for (i = 0; i < line; i++)
    {
        for (j = 0; j < line - i - 1; j++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("%ld ", fact(i) / (fact(j) * fact(i - j)));
        }

        printf("\n");
    }
    getch();
}

long fact(int num)
{
    long f = 1;
    int i = 1;

    while (i <= num)
    {
        f = f * i;
        i++;
    }
    return f;
}



/* 37. Pascal triangle without using function

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1                 */

#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, n, a, z, s;
    clrscr();

    printf("Enter the number : ");
    scanf("%d", &n);
    s = n;

    for (x = 0; x <= n; x++)
    {
        a = 1;
        for (z = s; z >= 0; z--)
            printf(" ");

        s--;

        for (y = 0; y <= x; y++)
        {
            printf("%d ", a);
            a = (a * (x - y) / (y + 1));
        }
        printf("\n");
    }
    getch();
}



/* 38. Pascal triangle 2

        1
      121
    12321
  1234321
123454321              */

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, c, k, number = 1, space = n;
    clrscr();

    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("\n");
    space = n;

    for (c = 1; c <= n; c++)
    {
        for (k = space; k > 1; k--)
            printf(" ");

        space--;

        for (k = 1; k <= 2 * c - 1; k++)
        {
            if (k <= c)
            {
                printf("%d", number);

                if (k < c)
                    number++;
            }
            else
            {
                number--;
                printf("%d", number);
            }
        }
        number = 1;
        printf("\n");
    }
    getch();
}



/* 39. Number Alphabet Pattern

1
A B
2 3 4
C D E F
5 6 7 8 9
G H I J K L                */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num, r, c;
    int i = 1;
    char ch = 'A';
    clrscr();

    printf("Enter the number of rows : ");
    scanf("%d", &num);
    printf("\n");

    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            if (r % 2 == 0)
            {
                printf(" %c", ch++);
            }
            else
            {
                printf(" %d", i++);
            }
        }
        printf("\n");
    }
    getch();
}



/* 40. Number Diamond Pattern

            1
         1 2 3
      1 2 3 4 5
   1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
   1 2 3 4 5 6 7
      1 2 3 4 5
         1 2 3
            1                       */

#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, k;
    clrscr();

    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
                printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    getch();
}



/* 41. Diamond of Numbers

            1
         2 2 2
      3 3 3 3 3
   4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5
   4 4 4 4 4 4 4
      3 3 3 3 3
         2 2 2
            1                              */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (k = 1; k < (i * 2); k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k < (i * 2); k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    getch();
}



/* 42. Diamond Pattern

  •
 •••
•••••
 •••
  •                     */

#include<stdio.h>
#include<conio.h>

void main()
{

    int n, c, k, space = 1;
    clrscr();

    printf("Enter number of rows : ");
    scanf("%d", &n);

    space = n - 1;

    for (k = 1; k <= n; k++)
    {

        for (c = 1; c <= space; c++)
            printf(" ");

        space--;

        for (c = 1; c <= 2 * k - 1; c++)
            printf("•");

        printf("\n");
    }

    space = 1;

    for (k = 1; k <= n - 1; k++)
    {

        for (c = 1; c <= space; c++)
            printf(" ");

        space++;

        for (c = 1; c <= 2 * (n - k) - 1; c++)
            printf("•");

        printf("\n");
    }

    getch();
}



/* 43. Diamond star outline

      *
    *   *
  *       *
*           *
  *       *
    *   *
      *                        */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        printf("*");

        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("\n");
        }

        else
        { printf("*\n"); }
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        printf("*");

        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("\n");
        }
        else
        { printf("*\n"); }
    }

    getch();
}



/* 44. Hollow Diamond

* * * *  * * * *
* * *      * * *
* *          * *
*              *
* *          * *
* * *      * * *
* * * *  * * * *                  */ 

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k;
    clrscr();

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        for (k = 1; k < i; k++)
        {
            printf("  ");
        } 

        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (k = 1; k <= 5 - i; k++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    getch();
} 



/* 45. Hollow Square

* * * * *
*       *
*       *
*       *
* * * * *                            */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    clrscr();

    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i != 1 && i != n && j != 1 && j != n)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    getch();
}



/* 46. Hourglass Pattern

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *             */

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, n, r, c, sp;
    clrscr();

    printf("Enter number of rows: ");
    scanf("%d", &num);
    printf("\n");

    n = num;

    for (r = 1; r <= num; r++)
    {
        for (sp = 1; sp <= r; sp++)
            printf(" ");

        for (c = 1; c <= n; c++)
            printf("*");

        for (c = num - r; c >= 1; c--)
            printf("*");

        n--;
        printf("\n");
    }

    for (r = 2; r <= num; r++)
    {
        for (sp = num - r + 1; sp >= 1; sp--)
            printf(" ");

        for (c = 1; c <= r; c++)
            printf("*");

        for (c = r - 1; c >= 1; c--)
            printf("*");

        printf("\n");
    }
    getch();
}



/* 47. Nested Star-Hash Pyramid

#####*#####
####*#*####
###*###*###
##*#####*##
#*#######*#
*#########*                    */

#include<stdio.h>
#include<conio.h>

void main()
{
    int n = 5, r, c;
    clrscr();

    for (r = 1; r <= 6; r++, n--)
    {
        // first pyramid
        for (c = 1; c <= n; c++)
        {
            printf(" #");
        }

        // second pyramid
        for (c = 1; c <= r; c++)
        {
            if (c == 1)
            {
                printf(" *");
            }
            else
            {
                printf(" #");
            }
        }

        // third pyramid
        for (c = r; c > 1; c--)
        {
            if (c == 2)
            {
                printf(" *");
            }
            else
            {
                printf(" #");
            }
        }

        // fourth pyramid
        for (c = n; c >= 1; c--)
        {
            printf(" #");
        }

        printf("\n");
    }
    getch();
}



/* 48. Reverse star pyramid

* * * * * * * * *
  * * * * * * *
     * * * * *
        * * *
           *                  */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k;
    clrscr();

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        for (k = 1; k < (i * 2); k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    getch();
} 



/* 49. Rhombus Pattern

        1 1
      2     2
    3         3
  4             4
5                 5
  4             4
    3         3
      2    2
       1 1               */

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, r, c, sp, n;
    clrscr();

    printf("Enter the number : ");
    scanf("%d", &num);

    for (r = 1; r <= num; r++)
    {
        for (sp = num - r; sp >= 1; sp--)
            printf(" ");

        printf("%d", r);

        for (sp = r * 2; sp > 1; sp--)
            printf(" ");

        printf("%d", r);
        printf("\n");
    }

    for (r = 1, n = num - 1; r < num; r++, n--)
    {
        for (sp = r; sp >= 1; sp--)
            printf(" ");

        printf("%d", n);

        for (sp = n * 2; sp > 1; sp--)
            printf(" ");

        printf("%d", n);
        printf("\n");
    }
    getch();
}



/* 50. Square kite pattern

      1
    2   2
  3       3
4           4
  3       3
    2   2
      1                 */

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, k;
    clrscr();

    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= (i - 1) * 2 - 1; j--)
            printf(" ");
        printf("%d", i);
        for (j = 2; j <= (i - 1) * 4; j++)
            printf(" ");
        if (i > 1)
            printf("%d", i);
        printf("\n");
    }
    for (i = 3; i >= 1; i--)
    {
        for (j = 4; j >= (i - 1) * 2 - 1; j--)
            printf(" ");
        printf("%d", i);
        for (j = 2; j <= (i - 1) * 4; j++)
            printf(" ");
        if (i > 1)
            printf("%d", i);
        printf("\n");
    }
    getch();
}

            
            
/* 51. Triangle with only border

#include<stdio.h>
#include<conio.h>

       *
     *  *
    *    *
   *      *
  *        *
 *          *
* * *  * * * *            */

void drawTriangle(char border, char filler, int length)
{
    int start = 2;
    int base = 4;
    int i, sp, j, b;
    for (i = start; i <= length; i++)
    {
        for (sp = 0; sp <= length - i; sp++)
        {
            printf(" ");
        }
        if (i > start)
        {
            printf("%c ", border);
        }
        if (i > start)
        {
            for (b = base; b <= i; b++)
            {
                printf("%c ", filler);
            }
        }
        printf("%c \n", border);
    }

    for (j = base; j < length + base; j++)
    {
        printf("%c ", border);
    }
    printf("\n");
}

void main()
{
    int length = 6;
    clrscr();
    drawTriangle('*', ' ', length);
    getch();
}

            
            
// 52. Program to accept number and print it's factorial.

#include<stdio.h>
#include<conio.h>

void main()
{

    int i, fact=1, n;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    printf("Factorial is: %d", fact);
    getch();
}

            
            
// 53. Program to accept number and print if it is prime number or not.

#include<stdio.h>
#include<conio.h>
void main()
{
int i, n;
clrscr();
printf("Enter number : ");
scanf("%d", &n);

for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            printf("Number is not Prime");
            getch();
            break;
        }
    }
    printf("Number is Prime");
    getch();
}

            
            
// 54. Program to print 'n' prime numbers.

#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int i, j, flag=1, n;
clrscr();
printf("Enter number : ");
scanf("%d", &n);

for(i=2; i<=n; i++)
{
    flag=1;
    for(j=2; j<=i/2; j++)
    {
        if(i%j==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("%d\n", i);
}
getch();
}

            
            
// 55. Program to accept a number and print Fibonacci sequence.

#include<stdio.h>
#include<conio.h>
void main()
{
int pre=1, cur=1, temp, i, n;
//pre means previous number
//cur means current number
clrscr();
printf("Enter number : ");
scanf("%d", &n);
printf("%d\t%d", pre, cur);

for(i=3; i<=n; i++)
{
    temp = cur;
    cur = pre + cur;
    pre = temp;
    printf("\t%d", cur);
}
getch();
}

            
            
// 56. Add 'n' numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
   int n, sum=0, i, value;
   clrscr();

   printf("Enter total numbers you want to add : ");
   scanf("%d", &n);

   for (i=1; i<=n; i++)
   {
      printf("Enter number %d : ", i);
      scanf("%d", &value);
      sum = sum + value;
   }

   printf("Sum of entered numbers : %d", sum);
   getch();
}

            
            
// 57. Add 'n' numbers using array.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, sum = 0, i, array[100];
    clrscr();
    printf("Enter total numbers you want to add : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d : ", i);
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Sum : %d\n", sum);
    getch();
}

            
            
// 58. Program to accept a number and add the digits of that number.

#include<stdio.h>
#include<conio.h>
void main()
 {
 int n, sum = 0, remainder;
 clrscr();

 printf("Enter the number : ");
 scanf("%d", &n);

 while (n != 0) 
 {
  remainder = n % 10;
  sum = sum + remainder;
  n = n / 10;
 }

 printf("Sum of digits of entered number : %d", sum);
 getch();
}

            
            
// 59. Program to accept a number and add the digits of that number using recursion.

#include<stdio.h>
#include<conio.h>

int add_digits(int);

void main()
{
    int n, result;
    clrscr();
    printf("Enter a number : ");
    scanf("%d", &n);

    result = add_digits(n);

    printf("Sum : %d", result);
    getch();
}

int add_digits(int n)
{
    static int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    sum = n % 10 + add_digits(n / 10);
    return sum;
}

            
            
// 60. Average of numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    float sum=0, x, avg;
    clrscr();
    printf("Enter total Numbers : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\nNumber %d : ", i );
        scanf("%f", &x);
        sum += x;
    }
    avg = sum / n;
    printf("\nThe Average is : %0.2f", avg);    
    getch();
}

            
            
// 61. Program to calculate Square of 'n' numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, r, i, sqr=0;
    clrscr();
    printf("\nEnter the range : ");
    scanf("%d", &r);

    for (i = 1; i <= r; i++)
    {
        n = i;
        sqr = n * n;
        printf("\nSquare of %d is :  %d .", n, sqr);
    }
    getch();
}

            
            
// 62. Program to take an alphabet from user and check whether it is a vowel or not.

#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    clrscr();
    printf("Enter an alphabet : ");
    scanf("%c", &ch);

    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        printf("%c is a vowel.", ch);
    else
        printf("%c is not a vowel.", ch);
    getch();
}

            
            
// 63. Program to take two numbers and check whether they are amicable numbers or not.

#include<stdio.h>
#include<conio.h>

//check function
int check(int a, int b)
{
    int s = 0, i;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            s = s + i;
        }
    }

    if (s == b)
    {
        s = 0;
        for (i = 1; i < b; i++)
        {
            if (b % i == 0)
            {
                s = s + i;
            }
        }

        if (s == a)
            return 1;
        else
            return 0;
    }
    return 0;
}

void main()
{
    int a, b;
    clrscr();
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);

    if (check(a, b))
    {
        printf("\n%d and %d are Amicable Numbers.", a, b);
    }
    else
    {
        printf("\n%d and %d are not Amicable Numbers.", a, b);
    }
}

            
            
// 64. Program to accept a number and print the factors of that number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    clrscr();
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factors of %d are : ", n);
    for (i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            printf("\n%d ", i);
    }
    getch();
}

            
            
// 65. Program to accept two integer numbers and print the GCD(Greatest Common Divisor).

#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, m, i;
    clrscr();
    printf("Enter 1st number : ");
    scanf("%d", &x);
    printf("Enter 2nd number : ");
    scanf("%d", &y);

    if (x > y)
        m = y;
    else
        m = x;

    for (i = m; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            printf("GCD of two number is : %d", i);
            break;
        }
    }
    getch();
}

            
            
// 66. Program to find power of number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int base, expo;
    int value = 1;
    clrscr();
    printf("Enter base number : ");
    scanf("%d", &base);
    printf("Enter exponent number : ");
    scanf("%d", &expo);

    while (expo != 0)
    {
        // value = value * base;
        value *= base;
        --expo;
    }
    printf("Answer : %d", value);
    getch();
}

            
            
// 67. Program to calculate HCF & LCM.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, x, y, t, hcf, lcm;
    clrscr();
    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);

    a = x;
    b = y;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    hcf = a;
    lcm = (x * y) / hcf;

    printf("\nHighest Common Factor of %d and %d : %d", x, y, hcf);
    printf("\nLeast Common Multiple of %d and %d : %d", x, y, lcm);
    getch();
}

            
            
// 68. Program to find largest among 3 numbers using ternary operator.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, big;
    clrscr();
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    big = (a > b && a > c ? a : b > c ? b : c);
    printf("\nThe biggest number is : %d", big);
    getch();
}

            
            
//69. Program to find largest number of 'n' numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, num, i;
    int big;
    clrscr();
    printf("Enter total numbers : ");
    scanf("%d", &n);

    printf("Number %d : ", 1);
    scanf("%d", &big);

    for (i = 2; i <= n; i++)
    {
        printf("Number %d : ", i);
        scanf("%d", &num);

        if (big < num)
            big = num;
    }

    printf("Largest number is : %d", big);
    getch();
}

            
            
//70. Program to check whether the number is neon number or not.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, sq, i, sum = 0;
    clrscr();
    printf("Enter the number : ");
    scanf("%d", &n);

    sq = n * n;

    for (i = sq; i > 0; i = i / 10)
        sum = sum + i % 10;

    if (sum == n)
        printf("%d is a neon number.", n);
    else
        printf("%d is not a neon number.", n);
    getch();
}       
            
            
            
// 71. Program to check Niven number (Harshad number).

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, d, a, sum = 0;
    clrscr();
    printf("Enter the number : ");
    scanf("%d", &n);

    a = n;

    while (a > 0)
    {
        d = a % 10;
        sum = sum + d;
        a = a / 10;
    }

    if (n % sum == 0)
        printf("\nThe number is Niven Number.");
    else
        printf("\nThe number is not a Niven Number.");
    getch();
}

            
            
// 72. Program to check whether the number is palindrome or not.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, rev = 0, temp;
    clrscr();
    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        rev = rev * 10;
        rev = rev + temp % 10;
        temp = temp / 10;
    }

    if (n == rev)
        printf("\n%d is palindrome number.", n);
    else
        printf("\n%d is not palindrome number.", n);
    getch();
}

            
            
// 73. Program to check perfect number.

#include<stdio.h>
#include<conio.h>

void main()
{
 int n, i = 1, sum = 0;
 clrscr();
 printf("Enter a number : ");
 scanf("%d", &n);

/*The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6.*/

 while (i < n)
 {
  if (n % i == 0)
  {
   sum = sum + i;
  }
  i++;
 }

 if (sum == n)
 {
  printf("\n%d is a perfect number.", i);
 }
 else
 {
  printf("\n%d is not a perfect number.", i);
 }
 getch();
}

            
            
// 74. Program to find the square root of a number.

#include<math.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    double num, result;
    clrscr();
    printf("Enter number : ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("Square root of %lf is %lf.", num, result);
    getch();
}

            
            
// 75. Program to print sum of 'n' prime numbers.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i = 3, count, c, sum = 2;
    clrscr();
    printf("Enter total number of prime numbers for addition : ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("\nFirst %d prime numbers are :", n);
        printf("\n2 ");
    }
    for (count = 2; count <= n;)
    {
        for (c = 2; c <= i - 1; c++)
        {
            if (i % c == 0)
                break;
        }
        if (c == i)
        {
            sum = sum + i;
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\nSum : %d", sum);
    getch();
}

            
            
// 76. Program to print sum of factorial series 1/1! + 2/2! +...1/N!

#include<stdio.h>
#include<conio.h>

double sumseries(double);

void main()
{
    double number, sum;
    clrscr();

    printf("Enter the number : ");
    scanf("%lf", &number);
    sum = sumseries(number);

    printf("\nSum of the above series = %lf ", sum);
    
    getch();
}

double sumseries(double m)
{
    double sum2 = 0, f = 1, i;
    for (i = 1; i <= m; i++)
    {
        f = f * i;
        sum2 = sum2 + (i / f);

        if (i == m)
        {
            printf("%.2lf / %.2lf = %lf", i, f, sum2);
        }
        else
        {
            printf("%.2lf / %.2lf + \n", i, f);
        }
    }
    return(sum2);
}

            
            
// 77. Program to calculate the sum of 'n' terms in Taylor series.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int x, i;
    int fact = 1, n;
    float sum = 0;
    clrscr();
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        fact = fact * i;
        sum = sum + (pow(x, i) / fact);
    }
    sum = sum + 1;
    printf("The sum of taylor series is : ");
    printf("%f", sum);
    getch();
}

            

// 78. Program to swap two numbers without using third variable.

#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 10, y = 5;
    clrscr();
    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter y : ");
    scanf("%d", &y);

    printf("\nBefore Swapping : \n x = %d \n y = %d", x, y);

    // Code to swap x and y
    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nAfter Swapping : \n x = %d \n y = %d", x, y);
    getch();
}

            
            
// 79. Program to swap two numbers using bitwise XOR.

#include<stdio.h>
#include<conio.h>
void main()
{
    long i, k;
    clrscr();
    printf("Enter two integers : \n");
    scanf("%ld %ld", &i, &k);

    printf("\n Before swapping i : %ld and k : %ld", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\nAfter swapping i : %ld and k : %ld", i, k);
    getch();
}

            
            
// 80. Program to swap two numbers using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    int *ptra, *ptrb, *temp;
    clrscr();
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("\nBefore swapping : a : %d, b : %d", a, b);

    ptra = &a;
    ptrb = &b;

    temp = ptra;
    *ptra = *ptrb;
    *ptrb = *temp;

    printf("\nAfter swapping : a : %d, b : %d", a, b);
    getch();
}

            
            
// 81. Program to add two numbers using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
    int first, second, *p, *q, sum;
    clrscr();
    printf("Enter two integers : \n");
    scanf("%d %d", &first, &second);

    p = &first;
    q = &second;

    sum = *p + *q;

    printf("\nSum of entered numbers : %d", sum);
    getch();
}

            
            
// 82. Program to add first and last digit of a number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int input, firstNum, lastNum;
    clrscr();

    printf("Enter number : ");
    scanf("%d", &input);

    lastNum = input % 10;
    firstNum = input;

    while (firstNum >= 10)
        firstNum /= 10;

    printf("\nAddition of first and last number : %d + %d = %d",
           firstNum, lastNum, firstNum + lastNum);
    getch();
}

            
            
// 83. Program to find area of triangle using Heron's formula.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    double a, b, c, s, area;
    clrscr();
    printf("\nEnter the sides of triangle : \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nArea of triangle using Heron's Formula : %.2lf", area);
    getch();
}

            
            
// 84. Program to convert Binary to Decimal.

#include<stdio.h>
#include<math.h>
#include<conio.h>

int binary_decimal(int n);

void main()
{
    int n;
    char c;
    clrscr();
    printf("Enter Binary number :  ");
    scanf("%d", &n);
    printf("%d in binary = %d in decimal", n, binary_decimal(n));
    getch();
}

//Function to convert binary to decimal.

int binary_decimal(int n)
{
    int decimal = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}

            
            
// 85. Program to convert Decimal numbers to Binary.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n, c, k;
    clrscr();
    printf("Enter a decimal number : ");
    scanf("%d", &n);

    printf("\n%d in binary number system is : ", n);

    for (c = 31; c >= 0; c--)
    {
        k = n >> c;
        if (k & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    printf("\n");
    getch();
}

            
            
// 86. Program to find f(x) by Lagrange's interpolation method.

#include<stdio.h>
#include<conio.h>

void main()
{
    float x[10], y[10], temp = 1, f[10], sum, p;
    int i, n, j, k = 0, c;
    clrscr();

    printf("How many record you will enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\nenter the value of x%d: ", i);
        scanf("%f", &x[i]);

        printf("\n\nEnter the value of f(x%d): ", i);
        scanf("%f", &y[i]);
    }

    printf("\n\nEnter X for finding f(x): ");
    scanf("%f", &p);

    for (i = 0; i < n; i++)
    {
        temp = 1;
        k = i;
        for (j = 0; j < n; j++)
        {
            if (k == j)
            {
                continue;
            }
            else
            {
                temp = temp * ((p - x[j]) / (x[k] - x[j]));
            }
        }
        f[i] = y[i] * temp;
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + f[i];
    }

    printf("\n\nf(%.1f) = %f ", p, sum);
    getch();
}

            
            
// 87. Program to check the leap year.

#include<stdio.h>
#include<conio.h>

void main()
{
    int year;
    clrscr();
    printf("Enter a year : ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("\n%d is a leap year.", year);
    else if (year % 100 == 0)
        printf("\n%d is not a leap year.", year);
    else if (year % 4 == 0)
        printf("\n%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);
    getch();
}

            
            
// 88. Program to find nCr & nPr.

#include<stdio.h>
#include<conio.h>

long factorial(int);

long find_ncr(int, int);

long find_npr(int, int);

void main()
{
    int n, r;
    long ncr, npr;
    clrscr();

    printf("Enter the value of n and r : \n");
    scanf("%d %d", &n, &r);

    ncr = find_ncr(n, r);
    npr = find_npr(n, r);

    printf("%dC%d = %ld\n", n, r, ncr);
    printf("%dP%d = %ld\n", n, r, npr);
    getch();
}

long find_ncr(int n, int r)
{

    long result;

    result = factorial(n) / (factorial(r) * factorial(n - r));

    return result;
}

long find_npr(int n, int r)
{

    long result;

    result = factorial(n) / factorial(n - r);

    return result;
}

long factorial(int n)
{

    int c;
    long result = 1;

    for (c = 1; c <= n; c++)
        result = result * c;

    return (result);
}

            
            
// 89. Program for Newton Raphson General.

#include<stdio.h>
#include<math.h>

int user_power, i = 0, cnt = 0, flag = 0;
int coef[10] = {0};
float x1 = 0, x2 = 0, t = 0;
float fx1 = 0, fdx1 = 0;

int main()
{
    printf("PROGRAM FOR NEWTON RAPHSON GENERAL");

    printf("\nEnter the total no. of power : ");
    scanf("%d", &user_power);

    for (i = 0; i <= user_power; i++)
    {
        printf("\nx^%d : ", i);
        scanf("%d", &coef[i]);
    }

    printf("\n");

    printf("\n\nThe Polynomial is ");

    //printing coeff.
    for (i = user_power; i >= 0; i--)
    {
        printf("%dx^%d", coef[i], i);
    }

    printf("\n\nIntial x1 -> ");
    scanf("%f", &x1);

    printf("Iteration\tX1\tFX1\tF'X1");

    do
    {
        cnt++;
        fx1 = fdx1 = 0;
        for (i = user_power; i >= 1; i--)
        {
            fx1 += coef[i] * (pow(x1, i));
        }

        fx1 += coef[0];

        for (i = user_power; i >= 0; i--)
        {
            fdx1 += coef[i] * (i * pow(x1, (i - 1)));
        }

        t = x2;
        x2 = (x1 - (fx1 / fdx1));
        x1 = x2;

        printf("\n\t%d\t%.3f\t%.3f\t%.3f ", cnt, x2, fx1, fdx1);

    }
    while ((fabs(t - x1)) >= 0.0001);

    printf("\n\nThe root of equation is %f", x2);

    return 0;
}

            
            
// 90. Program to calculate the sum of even numbers from 1 to n.

#include<stdio.h>
#include<conio.h>

void main()
{
    int sum = 0, n;
    clrscr();

    printf("Enter the number : ");
    scanf("%d", &n);

    // Using Math formula
    // (n/2)((n / 2) + 1)
    sum = ((n / 2) * ((n / 2) + 1));

    printf("Sum of even numbers from 1 to %d : %d", n, sum);
    getch();
}

            
            
// 91. Simpson 1/3 rule.

#include<stdio.h>

float f(float x)
{
    return (1 / (1 + x));
}

void main()
{
    int i, n;
    float x0, xn, h, y[20], so, se, ans, x[20];
    clrscr();

    printf("\nEnter values of x0,xn,h: ");
    scanf("%f%f%f", &x0, &xn, &h);
    n = (xn - x0) / h;
    if (n % 2 == 1)
    {
        n = n + 1;
    }

    h = (xn - x0) / n;

    printf("\nRefined value of n and h are:%d and %f\n", n, h);
    printf("\n Y values: \n");

    for (i = 0; i <= n; i++)
    {
        x[i] = x0 + i * h;
        y[i] = f(x[i]);
        printf("\n %f\n", y[i]);
    }

    so = 0;
    se = 0;
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            so = so + y[i];
        }
        else
        {
            se = se + y[i];
        }

    }
    ans = h / 3 * (y[0] + y[n] + 4 * so + 2 * se);
    printf("\nFinal integration is %f", ans);
    getch();
}

            
            
// 92. Program to add two strings without using concat() function.

#include<stdio.h>
#include<string.h>

void concat(char[], char[]);

void main()
{
    char s1[50], s2[30];
    clrscr();
    printf("\nEnter String 1 : ");
    gets(s1);
    printf("\nEnter String 2 : ");
    gets(s2);

    concat(s1, s2);

    printf("\nConcated string is : %s", s1);
    getch();
}

void concat(char s1[], char s2[])
{
    int i, j;

    i = strlen(s1);

    for (j = 0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }

    s1[i] = '\0';
}

            
            
// 93. Program to check vowels in string.

#include<stdio.h>

int count_vowels(char []);

int check_vowel(char);

void main()
{
    char array[100];
    int c;
    clrscr();
    printf("Enter a string : ");
    gets(array);

    c = count_vowels(array);

    printf("\nNumber of vowels in %s : %d", array, c);
    getch();
}

int count_vowels(char a[])
{
    int count = 0, c = 0, flag;
    char d;

    do
    {
        d = a[c];

        flag = check_vowel(d);

        if (flag == 1)
            count++;

        c++;
    } while (d != '\0');
    return count;
}

int check_vowel(char a)
{
    if (a >= 'A' && a <= 'Z')
    {
        // Converting to lower case
        a = a + 'a' - 'A';
    }
    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    return 0;
}

            
            
// 94. Program to compare two strings.

#include <stdio.h>
#include <string.h>
void main()
{
    char a[100], b[100];
    clrscr();
    printf("\nEnter the first string : ");
    gets(a);
    printf("\nEnter the second string : ");
    gets(b);

    if (strcmp(a, b) == 0)
        printf("\nEntered strings are equal.");
    else
        printf("\nEntered strings are not equal.");
    getch();
}

            
            
// 95. Program to compare strings without using strcmp() function.

#include<stdio.h>

int stringCompare(char[], char[]);

void main()
{
    char str1[100], str2[100];
    int compare;
    clrscr();
    printf("Enter first string : ");
    scanf("%s", str1);
    printf("Enter second string : ");
    scanf("%s", str2);

    compare = stringCompare(str1, str2);

    if (compare == 1)
        printf("\nBoth strings are equal.");
    else
        printf("\nBoth strings are not equal.");
    getch();
}

int stringCompare(char str1[], char str2[])
{
    int i = 0, flag = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0')
        return 1;
    else
        return 0;
}

            
            
// 96. Program to convert string from uppercase to lowercase.

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char str[20];
    int i;
    clrscr();

    printf("Enter string : ");
    gets(str);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = (char) (str[i] + 32);
        }
    }

    printf("String in lowercase : %s", str);
    getch();
}

            
            
// 97. Program to copy char array / copy string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char source[] = "C program";
    char destination[50];
    clrscr();

    strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);
    getch();
}

            
            
// 98. Program to copy string without using strcpy() function.

#include<stdio.h>
#include<conio.h>

void strCopy(char[], char[]);

void main()
{

    char str1[100], str2[100];

    printf("Enter any string: ");
    scanf("%s", str1);

    strCopy(str1, str2);

    printf("After copying: %s", str2);

    getch();
}

void strCopy(char str1[], char str2[])
{

    int i = 0;

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

}

            
            
// 99. Program to count frequency of characters in a string.

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char str[1500];
    int c = 0, count[26] = {0};
    clrscr();

    printf("Enter a string : ");
    gets(str);

    while (str[c] != '\0')
    {

        if (str[c] >= 'a' && str[c] <= 'z')
            count[str[c] - 'a']++;
        c++;
    }

    for (c = 0; c < 26; c++)
    {
        if (count[c] != 0)
            printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
    }
    getch();
}

            
            
// 100. Program to count total number of uppercase and lowercase in a string.

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    int upper = 0, lower = 0;
    char ch[80];
    int i;
    clrscr();

    printf("Enter string : ");
    gets(ch);

    i = 0;
    while (ch[i] != '\0')
    {
        //uppercase counter
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper++;
        }
        
        //lowercase counter
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lower++;
        }
       
        i++;
    }

    printf("\nUppercase Letters : %d", upper);
    printf("\nLowercase Letters : %d", lower);

    getch();
}           

            
 
// 101. Program to calculate the length of string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[100];
    int length;
    clrscr();
    printf("\nEnter a string to calculate it's length : ");
    gets(a);

    length = strlen(a);

    printf("\nLength of entered string is : %d", length);

    getch();
}

            
            
// 102. Program to calculate the length of string without using strlen() function.

#include<stdio.h>
#include<conio.h>

void main()
{
    char s[1000], i;
    clrscr();

    printf("Enter a string : ");
    scanf("%s", s);


    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of string : %d", i);
    getch();
}

            
            
// 103. Program to check the palindrome of string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char text[100];
    int begin, middle, end, length = 0;
    clrscr();

    printf("Enter the string to check if it is a palindrome : \n");
    gets(text);

    while (text[length] != '\0')
    {
        length++;
    }
    end = length - 1;
    middle = length / 2;

    for (begin = 0; begin < middle; begin++)
    {
        if (text[begin] != text[end])
        {
            printf("\nString is not a palindrome.");
            break;
        }
        end--;
    }
    if (begin == middle)
        printf("\nString is Palindrome.");

    getch();
}

            
            
// 104. Program to check the palindrome of word using array.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char word[100];
    int length, counter;
    clrscr();

    printf("Enter a word : ");
    scanf("%s", word);
    length = strlen(word);
    int flag = 1;

    for (counter = 0; counter < length / 2 && flag; counter++)
    {
        if (word[counter] != word[length - counter - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("\n%s is a palindrome.", word);
    }
    else
    {
        printf("\n%s is NOT a palindrome.", word);
    }
    getch();
}

            
            
// 105. Program to remove white space in string.

#include<string.h>
#include<stdio.h>
#include<conio.h>

void main()
{
    int i = 0, j = 0, len;
    char buff[50];
    clrscr();

    printf("Enter String with white space : ");
    gets(buff);

    len = (int) strlen(buff);

    while (i != len)
    {
        if (buff[i] != ' ')
            buff[j++] = buff[i];
        i++;
    }
    buff[j] = 0;

    printf("\nYour String  is : %s.", buff);
getch();
}

            
            
// 106. Program to reverse the string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

void main()
{
    char arr[100];
    clrscr();

    printf("\nEnter a string to reverse : ");
    gets(arr);

    strrev(arr);

    printf("\nReverse of entered string is : %s", arr);

    getch();
}

            
            
// 107. Program to reverse the string using pointer.

#include<stdio.h>
#include<conio.h>

void main()
{
    char str_array[10000], *ptr;
    int i, len;
    clrscr();

    printf("Enter a string : ");
    gets(str_array);
    ptr = str_array;

    for (i = 0; i < 10000; i++)
    {
        if (*ptr == '\0')
            break;
        ptr++;
    }

    len = i;
    ptr--;
    printf("\nReversed String is : ");
    for (i = len; i > 0; i--)
    {
        printf("%c", *ptr--);
    }
    getch();
}

            
            
// 108. Program to sort the strings.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i, j, n;
    char str[20][20], temp[20];
    clrscr();

    printf("Enter the number of string to be sorted : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
        gets(str[i]);

    for (i = 0; i <= n; i++)
        for (j = i + 1; j <= n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    printf("\nSorted string :");
    for (i = 0; i <= n; i++)
    {
        puts(str[i]);
    }
    getch();
}

// 109. Program to swap two strings.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    char str1[100], str2[100], *temp;
    clrscr();

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    printf("\nBefore Swapping : \n");
    printf("First string : %s\n", str1);
    printf("Second string : %s\n", str2);

    temp = (char *) malloc(100);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("\nAfter Swapping : \n");
    printf("First string : %s\n", str1);
    printf("Second string : %s\n", str2);
    getch();
}

            
            
// 110. Program to add two matrix.

#include<stdio.h>
#include<conio.h>

void main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];
    clrscr();

    printf("Enter the number of rows and columns of matrix :");
    scanf("%d%d", &m, &n);
    printf("\nEnter the elements of first matrix : \n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &first[c][d]);
        }
    }

    printf("\nEnter the elements of second matrix : \n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &second[c][d]);
        }
    }

    printf("\nSum of entered matrices : \n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    getch();
}      
            
            

// 111. Program to arrange array numbers in ascending order.

#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, a, n, number[30];
    clrscr();

    printf("Enter total numbers : ");
    scanf("%d", &n);
    printf("\n Enter the numbers :\n");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in ascending order are :\n");

    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }
    getch();
}

            
            
// 112. Program to check whether the matrix is sparse matrix or not.

#include<stdio.h>
#include<conio.h>

void main()
{
    static int array[10][10];
    int i, j, m, n;
    int counter = 0;
    clrscr();

    printf("Enter the order of the matix : ");
    scanf("%d %d", &m, &n);
    printf("\nEnter the co-efficients of the matix :\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                ++counter;
            }
        }
    }
    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix \n");
    }
    else
    {
        printf("The given matrix is not a sparse matrix \n");
    }
    
    printf("There are %d number of zeros", counter);
    getch();
}

            
            
// 113.  Program to delete an element from array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[100], position, c, n;
    clrscr();

    printf("Enter total number of elements in array : ");
    scanf("%d", &n);

    printf("\nEnter element %d : ", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\nEnter the location from where you wish to delete element : ");
    scanf("%d", &position);

    if (position >= n + 1)
        printf("\nDeletion not possible.");
    else
    {
        for (c = position - 1; c < n - 1; c++)
            array[c] = array[c + 1];

        printf("\nResultant array is :");

        for (c = 0; c < n - 1; c++)
            printf("\n%d", array[c]);
    }
    getch();
}

            
            
// 114. Program to delete given number from array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[10];
    int i, n, pos, element, found = 0;
    clrscr();

    printf("Enter total number of elements : ");
    scanf("%d", &n);
    printf("\nEnter the elements : \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array elements are\n");

    for (i = 0; i < n; i++)
    {
        printf("\n%d", array[i]);
    }

    printf("\nEnter the element to be deleted : ");

    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (array[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found == 1)
    {
        for (i = pos; i < n - 1; i++)
        {
            array[i] = array[i + 1];
        }

        printf("\nResultant array elements are : ");

        for (i = 0; i < n - 1; i++)
        {
            printf("\n%d", array[i]);
        }
    }
    else
    {
        printf("\nElement %d is not found in the array", element);
    }
    getch();
}

            
            
// 115. Program to calculate the determinant of 2×2 matrix.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[2][2], i, j;
    long determinant;
    clrscr();

    printf("Enter the 4 elements of matrix  :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    determinant = a[0][0] * a[1][1] - a[1][0] * a[0][1];

    printf("\nDeterminant of 2X2 matrix: %ld", determinant);

    getch();
}

            
            
// 116. Program to calculate the determinant of 3×3 matrix.

#include<stdio.h>
#include<conio.h>
 
void main()
{
    int a[3][3], i, j;
    long determinant;
    clrscr();

    printf("Enter the 9 elements of matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    determinant = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))
                  - a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2])
                  + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

    printf("\nDeterminant of 3X3 matrix : %ld", determinant);

    getch();
}

            
            
// 117. Program to find Largest and Smallest number in array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50], size, i, largest, smallest;
    clrscr();

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d in to the array : ", i);
        scanf("%d", &a[i]);
    }

    largest = a[0];
    for (i = 1; i < size; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    printf("Largest element : %d", largest);

    smallest = a[0];
    for (i = 1; i < size; i++)
    {
        if (smallest > a[i])
        {
            smallest = a[i];
        }
    }
    printf("\nSmallest element : %d", smallest);
    getch();
}

            
            
// 118. Program to reverse the array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int size, i, j, a[100], b[100];
    clrscr();

    printf("Enter the size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) 
    {
        printf("Enter element %d :", i);
        scanf("%d", &a[i]);
    }

    /*
     * Copying elements into array b starting from end of array a
     */

    for (i = size - 1, j = 0; i >= 0; i--, j++)
        b[j] = a[i];

    /*
     * Copying reversed array into original.
     * Here we are modifying original array, this is optional.
     */

    for (i = 0; i < size; i++)
        a[i] = b[i];

    printf("Reverse array is :\n");

    for (i = 0; i < size; i++)
        printf("%d\n", a[i]);

    getch();
}

            
            
// 119. Program to insert an element in array.

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[100], position, i, size, value;
    clrscr();

    printf("Enter size of array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter the location where you wish to insert an element : ");
    scanf("%d", &position);

    printf("Enter the value to insert : ");
    scanf("%d", &value);

    for (i = size - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[position - 1] = value;

    printf("\nResultant array is : ");

    for (i = 0; i <= size; i++)
    {
        printf(" %d ", array[i]);
    }

    getch();
}

            
            
// 120. Program to sort array using Insertion sort

#include<math.h> 
#include<stdio.h> 
void insertionSort(int arr[], int n) 
{ 
  int i, key, j; 
  for (i = 1; i < n; i++) { 
    key = arr[i]; 
    j = i - 1; 
    while (j >= 0 && arr[j] > key) { 
      arr[j + 1] = arr[j]; 
      j = j - 1; 
    } 
    arr[j + 1] = key; 
  } 
} 

void printArray(int arr[], int n) 
{ 
  int i; 
  for (i = 0; i < n; i++) 
    printf("%d ", arr[i]); 
  printf("\n"); 
} 

int main() 
{ 
  printf("\n\n Enter the number of data element to be sorted: ");
   scanf(“%d”, &n);
   printf("\n Enter element: ");
   for(i=0; i<n; i++)
   {
      scanf(“%d”, &arr[i]);
    }   
  int n = sizeof(arr) / sizeof(arr[0]); 
  insertionSort(arr, n); 
  printf(“Sorted List: ”);
  printArray(arr, n); 
  return 0; 
}   
            

            
// 121. Binary Search

#include <stdio.h>

int bin(int arr[],int n,int t)
{
    int l=0;
    int r=n-1;
    while(l<=r)
{
     int m=l+(r-l)/2;
    if(arr[m]<t)
    l=m+1;
    else if (arr[m]>t)
    r=m-1;
    else return m; 
    }
    return -1;
}

int main() 
{
int n;
scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("%d",bin(arr,7,7));
return 0;
}

            
            
// 122. Multiplication of two Matrices

#include<stdio.h>
int main()
{

    int a[5][5], b[5][5], c[5][5], m, n, p, q, i, j, k;

    printf( "Enter rows and columns of first matrix: ");
    scanf("%d%d",&m,&n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d",&p ,&q);

    if (n == p)
    {
        printf("\nEnter first matrix:\n");
           for(i = 0; i < m; ++i)
          {for (j = 0; j < n; ++j)
                scanf("%d",&a[i][j]);
                }

        printf("\nEnter second matrix:\n");
        for (i = 0; i < p; ++i)
            for (j = 0; j < q; ++j)
                scanf("%d",&b[i][j]);

        printf("\nThe new matrix is:\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < q; ++j)
            {
                c[i][j] = 0;
                for (k = 0; k < n; ++k)
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                printf("%d\t",c[i][j]);
            }
            printf( "\n");
        }
    }
    else
        printf("\n Matrix can't be multiplied");

    return 0;
}

            
            
// 123. Goldbach's Conjecture
 
/*Goldbach's conjecture is a rule in math that states the following: every even number greater than 2 can be expressed as the sum of two prime numbers.*/

#include<stdio.h>
#include<math.h>

int prime (int n)
{
  int flag = 0;
  for(int i = 2 ; i <= sqrt(n); i ++ )
  {
    if(n % i == 0)
    {
      flag = 1;
      break ;
    }
  }
  if(!flag)
  return 1;
  else 
  return 0;
}

int main()
{
  int m;
  scanf("%d", & m);
  for(int i = 2 ; i <= (m )/2 ; i ++)
  {
    int k = i , l = m - i;
    if(prime(k) && prime(l))
    {
    printf("%d  +  %d\n",k , l);
    }
  }
}

            
            
/* 124. Numerical Spiral Pattern.

 1  2  3  4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9              */

#include<stdio.h>
int main()
{
 int n,m,l,k=1; 
 scanf("%d",&n);
 m =(l=n);
 int a[m][n] ;
 int row = 0 , col = 0 ;
 
 while(k <= l*l )
 {
 
        for(int i = col ; i < n; i ++) 
        {
         a[row][i] = k++;
         
  }
  row++;
  for(int i = row; i < m ; i ++)
  {
   a[i][n-1] =k ++;
   
  }
  n --;
  if(row < m)
  {
   for(int i = n - 1; i >= col ; i --)
   { a[m-1][i] = k ++; 
 
   }
  }
  m--;
  if(col < n)
  {
   for(int i = m-1; i >= row ; i --)
   {
   a[i][col] = k ++;
   }
  }
  col ++;
 
 }
 for(int i = 0 ; i < l ; i ++)
 {
  for(int j = 0 ; j < l ; j ++)
  printf("%d ",a[i][j]);
  printf("\n");
 }
}

            
            
// 125. Program to sort array using Selection Sort.

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[20], n, i, j, pos, temp;
    clrscr();

    printf("Enter total number of elements :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element number %d : ", i+1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < (n - 1); i++)
    {
        pos = i; 
        for (j = i + 1; j < n; j++)
        {
            if (array[pos] > array[j])
                pos = j;
        }
        if (pos != i)
        {
            temp = array[i];
            array[i] = array[pos];
            array[pos] = temp;
        }
    }

    printf("\nSorted elements :");

    for (i = 0; i < n; i++)
        printf("%d\n", array[i]);

    getch();
}

            
            
// 126. Program to sort array using Bubble Sort.

#include<stdio.h>
#include<conio.h>

void main()
{
    int total, element[100], i, j, temp;
    clrscr();

    printf("Enter total number of elements :");
    scanf("%d", &total);

    for(i=0; i<total; i++)
    {
        printf("Enter element no%d :", i+1);
        scanf("%d", &element[i]);
    }
    
    for (i=0; i<(total - 1); i++)
    {
        for (j = 0; j < total  - 1; j++)
        {
            if (element[j] > element[j + 1]) 
            {
                temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
    }

    printf("\nSorted list in ascending order :");

    for (i = 0; i < total; i++)
    {
        printf("\n%d", element[i]);
    } 
    getch();
} 
//To sort in descending order, use < (less than) in if condition.

            
            
// 127. Program for infix to postfix conversion.

#include<stdio.h>
char ifix[200],pfix[200],stack[100];
int p=0,s=0,i=0;
void fun()
{
    if(ifix[i]==')')
    {
        s--;
        while(stack[s]!='(')
            pfix[p++]=stack[s--];
    }
    if(ifix[i]=='+' || ifix[i]=='-')
    {
        if(!s)
            stack[s++]=ifix[i];
        else if(stack[s-1]=='(')
            stack[s++]=ifix[i];
        else
        {
            s--;
            while(s!=-1 && stack[s]!='(')
            {
                pfix[p++]=stack[s--];
            }
            stack[++s]=ifix[i];
            s++;
        }
    }
}
int main()
{
    printf("Enter your infix expression(using operators +, -, %%, /, *) : ");
    scanf("%s",ifix);
    for(i;ifix[i]!='\0';i++)
    {
        if(ifix[i]!='*' && ifix[i]!='/' && ifix[i]!='-' && ifix[i]!='+' && ifix[i]!='(' && ifix[i]!=')' && ifix[i]!='%')
            pfix[p++]=ifix[i];
        else if(ifix[i]=='(' || ifix[i]=='*' || ifix[i]=='/' || ifix[i]=='%')
            stack[s++]=ifix[i];
        else
            fun();
    }
    if(ifix[i]=='\0')
    {
        if(s)
        {
            s--;
            while(s!=-1)
            {
                if(stack[s]==')' || stack[s]=='(')
                    s--;
                pfix[p++]=stack[s--];
            }
        }
        pfix[p]='\0';
    }
    printf("The postfix expression is : %s",pfix);
    return 0;
}
//used by taking into considering operators +, -, /, *, %, (, )

            
            
/* 128. Pattern

1
3 2
4 5 6
10 9 8 7
11 12 13 14 15
21 20 19 18 17 16              */

#include<stdio.h>
int main()
 { 
    int i,j,k,l,n;

    scanf("%d",&n);

     for(k=i=1;i<=n;i++) 
    {
        l=k+i-1; 
        for(j=1;j<=i;j++)
       { 
            if(i%2==1)
                printf("%d ",k);
            else 
                printf("%d ",l); 
            k++;
            l--;
        }
        printf("\n"); 
    }
     return 0; 
}

            
            
/* 129. Pattern

1
8 2
14 9 3
19 15 10 4
23 20 16 11 5
26 24 21  17 12 6
28 27 25 22 18 13 7           */

#include<stdio.h>
int main() {

int n,i,j,k,l=1,d;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        for(j=i-1;j>=0;--j)
        {
            d=n-1;
            l=i+1;
            for(k=0;k<=j;++k)
            {
                l+=d;
                d--;
            }
            printf("%d ",l);
        }
        printf("%d\n",i+1);
    }
    return 0;
}

            
            
/* 130. Swastika pattern.

*     * * * * 
*     *       
*     *       
* * * * * * *
      *     * 
      *     * 
* * * *     *                   */

#include<stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
    if(i==1)
    {
      if(j>(n/2)||j==1)
      printf("* ");
      else
      printf("  ");
    }
    else if(i==n)
    {
      if(j<=(n/2+1)||j==n)
      printf("* ");
      else
      printf("  ");
    }
    else if(i==(n+1)/2)
     printf("* ");

    else if(i<=n/2&&i!=1)
    {
      if(j==1||j==(n+1)/2)
      printf("* ");
      else
       printf("  ");
    }
    else
    {
      if(j==n||j==(n+1)/2)
      printf("* ");
      else
       printf("  ");
    }
    }  
     printf("\n");
  }
  return 0;
}            

            
            
/* 131. Pattern

5       5
54     45
543   345
5432 2345
543212345
5432 2345
543   345
54     45
5       5                     */

#include <stdio.h>
int main() 
{
  int i,j,n;
  scanf("%d",&n);

  for(i=n;i>=1;i--) {
    for(j=n;j>=1;j--) {
      if(j>=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=2;j<=n;j++) {
      if(j>=i)
        printf("%d",j);
      else
        printf(" ");
    }
    printf("\n");
  }

//down
  for(i=2;i<=n;i++) {
    for(j=n;j>=1;j--) {
      if(j>=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=2;j<=n;j++) {
      if(j>=i)
        printf("%d",j);
      else
        printf(" ");
    }
    printf("\n");
  }
}

            
            
/* 132. Pattern


        @       @         
      @   @   @   @       
    @       @       @     
  @           @       @   
@       @       @       @ 
  @   @   @   @       @   
    @       @       @     
  @       @   @   @   @   
@       @       @       @ 
  @       @           @   
    @       @       @     
      @   @   @   @       
        @       @                                             */


#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);

    if(n%2==0)
    n=n+1;

    for(y=3*n/2; y>=-3*(n/2); y--)
    {
        for(x=-3*(n/2); x<=3*(n/2); x++)
        {
            if((x>=-1*n/2 && x<=n/2) || (y>=-1*n/2 && y<=n/2))
            {
                if(x==y || x==-y)
                    printf("@ ");
                else if((y<=0 || y>=n/2) && (x+y==n-1))
                    printf("@ ");
                else if((y>=0 || y<=-n/2) && (x+y==1-n))
                    printf("@ ");
                else if((x<=0 || x>=n/2) && (x-y==n-1))
                    printf("@ ");
                else if((x>=0 || x<=-n/2) && (x-y==1-n))
                    printf("@ ");
                else
                    printf("  ");
            }
            else
            {
                if(x+y==(n-1)*2)
                    printf("@ ");
                else if(x+y==(1-n)*2)
                    printf("@ ");
                else if(x-y==(n-1)*2)
                    printf("@ ");
                else if(x-y==(1-n)*2)
                    printf("@ ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
}

            
            
// 133. Program for creating and displaying a linked list.

#include <stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}Node;

int main(void)
{
  Node*temp;
  Node*start=NULL;
  Node* p=NULL;
  
  int n;
  scanf("%d",&n);

  while(n--)
  {
     temp=(Node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    if(start==NULL)
    {
      start=temp;
      p=temp;
    }
    else
    {  
      p->next=temp;
      p=temp;
    }
    
  }
  
  while(start!=NULL)
  {
    if(start->next!=NULL)
      printf("%d->",start->data);
    else
      printf("%d",start->data);

    start=start->next;
  }
  return 0;
}

            
            
// 134. Program to delete a node for a given element from linked list.

#include <stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}Node;

int main(void)
{
  Node*temp;
  Node*start=NULL;
  Node* p=NULL;
  
  int n;
  scanf("%d",&n);

  while(n--)
  {
     temp=(Node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    if(start==NULL)
    {
      start=temp;
      p=temp;
    } 
     else
    {  
      p->next=temp;
      p=temp;
    }
  }

printf("Element to delete : ");
int ele; scanf("%d",&ele); printf("%d\n",ele);
Node*prev=start;
Node*cur=start;

while(cur!=NULL)
{   
  if(start->data==ele)
  {
    start=start->next;
  }
  
  if(cur->data==ele)
  {
    prev->next=cur->next;
    free(cur);
    break;
  }
  prev=cur;
  cur=cur->next;

  if(cur==NULL)
  {
    printf("Element doesn't exist!");
    exit(0);
  }
}
  
  while(start!=NULL)
  {
    if(start->next!=NULL) 
      printf("%d->",start->data);
    else
      printf("%d",start->data);

    start=start->next;
  }

  return 0;
}

            
            
// 135. Sieve of Eratosthenes : An algorithm to generate all the prime numbers within an range.

#include <stdio.h>
#define size 1000

int main (void)
{
    int n;
    scanf("%d",&n);
    int arr[size]={0};

    for(int i=2;i*i<=n;i++)
    {
        for(int j=i;i*j<=n;j++)
        {
            arr[i*j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(!arr[i])
        printf("%d ",i);
    }
    return 0;
}

            
            
// 136. Binary search using recursion

#include<stdio.h>

int binary(int arr[], int n, int search, int l, int u);

int main()
{
    int arr[10], i, n, search, c, l, u;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d", &search);

    l = 0, u = n - 1;
    c = binary(arr, n, search, l, u);

    if (c == 0)
        printf("Number not found.");
    else
        printf("Number found.");

    return 0;
}

int binary(int arr[], int n, int search, int l, int u)
{

    int mid, c = 0;

    if (l <= u)
    {
        mid = (l + u) / 2;
        if (search == arr[mid])
        {
            c = 1;
        }
        else if (search < arr[mid])
        {
            return binary(arr, n, search, l, mid - 1);
        }
        else
            return binary(arr, n, search, mid + 1, u);
    }
    else
        return c;
}

            
            
// 137. Program to check whether the number is palindrome or not using recursion.

#include<stdio.h>

int checkPalindrome(int);

int main() {

    int n, sum;

    printf("Enter a number : ");
    scanf("%d",&n);

    sum = checkPalindrome(n);

    if(n == sum)
         printf("%d is a palindrome", n);
    else
         printf("%d is not a palindrome", n);

    return 0;
}

int checkPalindrome(int n) {

    static int sum=0, r;
    if(n != 0)
    {
         r = n % 10;
         sum = sum * 10 + r;
         checkPalindrome(n/10);
    }
    return sum;
}

            
            
// 138. Program to split words from a string using strtok function.

#include <stdio.h>
#include<string.h>
int main(void) {
  char str[]="Welcome to C language";
  char *token=strtok(str," ");
  while(token!=NULL)
  {
    printf("%s\n",token);
    token=strtok(NULL," ");
  }
  return 0;
}

            
            
// 139. Program to read multiline string using scanf.

#include<stdio.h>
int main(void) {
  
  char str[100];
  // reading multline string with '.' as a delimiter
  scanf("%[^.]",str);
  
  printf("%s",str);
  
  return 0;
}

            
            
// 140. Program to find day on a particular date

#include<stdio.h>

int isLeapYear(int year){
    if(year%4==0){
        if(year%100==0 && year%400!=0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}

int main() {
    int year;
    int refYear=1600, leap=0;
    int diff, totalDays,day,month, oddDays;
    int lYear[]={3,1,3,2,3,2,3,3,2,3,2,3};
        int nYear[]={3,0,3,2,3,2,3,3,2,3,2,3};
    char  week[7][10]={"sunday",
                   "monday",
                   "tuesday",
                   "wednesday"
                   ,"thursday"
                   ,"friday",
                   "saturday"};
     printf("Enter a date between  1600 to 3000\n");
      scanf("%d%d%d",&day,&month,&year);
    diff = year - refYear;
    while(refYear < year){
        if(isLeapYear(refYear))
            leap++;
        refYear++;
    }
    totalDays = leap*366 + (diff-leap)*365;
    oddDays = totalDays%7;
     
    if(isLeapYear(year)){
        for(int i=0;i<month-1;i++){
            oddDays+=lYear[i];
        }
        oddDays+=day%7;
    }
    else{
        for(int i=0;i<month-1;i++){
            oddDays+=nYear[i];
        }
        oddDays+=day%7;
    }
    printf("Day on %d/%d/%d ",day,month,year);
    printf("%s",week[(5+oddDays)%7]);
    return 0;
}      
            

            
/*  141. WAP to multiply and add two complex numbers

Input :
5
-4
4
6

Output :
Sum is 9 + 2i
Product is 44 + 14i                 */

#include<stdio.h>
#include<conio.h>

typedef struct {
  int real;
  int imag;
} complex;

void getdata (complex *);
void display (complex);
complex sum(complex,complex);
complex mult(complex,complex);

main() {
 complex c1,c2,c3,c4;
 getdata(&c1);
 getdata(&c2);
 
 c3=sum(c1,c2);
 printf("Sum is ");
 display(c3);
 
 c4=mult(c1,c2);
 printf("Product is ");
 display(c4);
 
 getch();
}

void getdata(complex *p) {
 printf("Enter real  ");
 scanf("%d",&p->real);
 printf("Enter imag ");
 scanf("%d",&p->imag);
}

complex sum(complex c1,complex c2) {
 complex t;
 t.real=c1.real+c2.real;
 t.imag=c1.imag+c2.imag;
 return t;
}

complex mult(complex c1,complex c2) {
 complex t;
 t.real=c1.real*c2.real-c1.imag*c2.imag;
 t.imag=c1.real*c2.imag+c2.real*c1.imag;
 return t;
}

void display {
 if(c.imag>=0)
 printf("%d+%di\n",c.real,c.imag);
 else
 printf("%d%di\n",c.real,c.imag);
}

            
            
// 142. Program to concatenate two strings using pointer.

#include <stdio.h>

void concatenator(char *str, char *substr) {

    while (*str)
        str++;

    while (*substr) {
        *str = *substr;
        substr++;
        str++;
    }

    *str = '\0';
}

int main() {

    char str[100], substr[100];

    printf("Enter the source string : ");
    gets(str);

    printf("\nEnter string to concatenate : ");
    gets(substr);

    concatenator(str, substr);

    printf("String after concatenation is \"%s\"\n", str);

    return 0;
}

            
            
// 143. Program to allocate memory using malloc() and free memory using free().

#include<stdio.h>
#include<stdlib.h>

int main() {

    int n, i, *ptr, sum = 0;
    printf("Enter total number of elements : ");
    scanf("%d", &n);

    ptr = (int *) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error! Memory not allocated.");
        return 0;
    }

    printf("Enter elements of array : \n");
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Elements are :\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}

            
            
// 144. Circular Link List.

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} node;

void insert(node *pointer, int data)
{
    node *start = pointer;

    while (pointer->next != start)
    {
        pointer = pointer->next;
    }
    
    pointer->next = (node *)
    malloc(sizeof(node));
    pointer = pointer->next;
    pointer->data = data;
    pointer->next = start;
    printf("%d entered.\n", data);
}

int find(node *pointer, int key)
{
    node *start = pointer;
    pointer = pointer->next;
    while (pointer != start)
    {
        if (pointer->data == key)
        {
            return 1;
        }
        pointer = pointer->next;
    }
    return 0;
}

void delete(node *pointer, int data)
{
    node *start = pointer;
    while(pointer->next!=start &&
    (pointer->next)->data != data)
    {
        pointer = pointer->next;
    }
    if(pointer->next==start)
    {
        printf("Element %d is not present in the list\n",data);
        return;
    }
    node *temp;
    temp = pointer->next;
    printf("%d deleted.\n",data);
    pointer->next = temp->next;
    free(temp);
    return;
}

void print(node *start, node *pointer)
{
    if (pointer == start)
    {
        return;
    }
    printf("%d ", pointer->data);
    print(start, pointer->next);
}

int main()
{
    node *start, *temp;
    start = (node *) malloc(sizeof(node));
    temp = start;
    temp->next = start;
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Print\n");
    printf("4. Find\n");
    while (1)
    {
        int query;
        scanf("%d", &query);
        if (query == 1)
        {
            int data;
            scanf("%d", &data);
            insert(start, data);
        }
        else if (query == 2)
        {
            int data;
            scanf("%d", &data);
            delete (start, data);
        }
        else if (query == 3)
        {
            printf("The list is ");
            print(start, start->next);
            printf("\n");
        }
        else if (query == 4)
        {
            int data;
            scanf("%d", &data);
            int status = find(start, data);
            if (status)
            {
                printf("Element Found\n");
            }
            else
            {
                printf("Element Not Found\n");
            }
        }
    }
}            
