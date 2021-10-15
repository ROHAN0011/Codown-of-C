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
