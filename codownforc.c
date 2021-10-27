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
