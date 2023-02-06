// 1. Write a recursive function to print first N natural numbers
// #include<stdio.h>
// #include<conio.h>
// void natural(int);
// void natural (int num){
//     if(num>1)
//         natural(num - 1);
//     printf("%d ", num);
// }

// int main()
// {
//     int n;
//     printf("Enter a Number");
//     scanf("%d", &n);
//     natural(n);

//     return 0;
// }

// 2. Write a recursive function to print first N natural numbers in reverse order

// #include <stdio.h>
// #include <conio.h>
// void reverseN(int);
// void reverseN(int num)
// {
//     if (num >= 1)
//     printf("%d ", num);
//     reverseN(num - 1);
// }
// int main()
// {
//     int num;
//     printf("enter a numberr");
//     scanf("%d", &num);
//     reverseN(num);
//     return 0;
// }

// 3. Write a recursive function to print first N odd natural numbers
// #include <stdio.h>
// #include <conio.h>
// void Oddnum(int);
// void Oddnum(int n)
// {
//     if (n > 1)
//         Oddnum(n - 1);
//     printf("%d ", 2*n-1);
// }
// int main()
// {
//     int num;
//     printf("enter a number to print");
//     scanf("%d", &num);
//     Oddnum(num);

//     return 0;
// }

// 4. Write a recursive function to print first N odd natural numbers in reverse order

// #include <stdio.h>
// #include <conio.h>
// void Oddrev(int);
// void Oddrev(int n){
//     if(n>=1)
//         printf("%d ", 2 * n - 1);
//     Oddrev(n - 1);
// }
// int main()
// {
//     int num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     Oddrev(num);
//     return 0;
// }
// 5. Write a recursive function to print first N even natural numbers
// #include<stdio.h>
// #include<conio.h>
// void EvenNum(int);
// void EvenNum(int n)
// {
//     if(n>1)
//     EvenNum(n - 1);
//         printf("%d ", 2 * n);
// }
// int main()
// {
//     int num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     EvenNum(num);
//     return 0;

// // 6. Write a recursive function to print first N even natural numbers in reverse order

// #include<stdio.h>
// #include<conio.h>
// void Evenrev(int);
// void Evenrev(int n)
// {
//     if(n>=1)
//         printf("%d ", 2 * n);
//     Evenrev(n - 1);
// }
// int main()
// {
//     int num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     Evenrev(num);
//     return 0;
// }
// 7. Write a recursive function to print squares of first N natural numbers

// #include<stdio.h>
// #include<conio.h>
// void squar(int);
// void  squar(int n)
// {
//     if(n==0)
//         return ;
//     printf("%d ", n * n);
//     squar(n - 1);

// }
// int main()
// {
//     int num;
//     printf("Enter a Number");
//     scanf("%d", &num);
//     squar(num);
//     return 0;
// }

// 8. Write a recursive function to print binary of a given decimal number..
// #include<stdio.h>
// void binaryLSB(int num)
// {
//     if (num==0)
//         return;
//     binary(num >> 1);
//     printf("%d", num &1);
// }
// void binary(int num){
//     if(num==0)
//         return;
//     binary(num / 2);
//     printf("%d", num % 2);
// }

// int main()
// {
//     int n;
//     printf("Enter a decimal number");
//     scanf("%d", &n);
//     binaryLSB(n);
//     printf("\n");
//     binary(n);

//     return 0;
// }

// 9. Write a recursive function to print octal of a given decimal number
// #include <stdio.h>
// void octal(int num)
// {
//     if (num==0)
//         return;
//     octal(num/8);
//     printf("%d", num % 8);
// }
// int main()
// {
//     int num;
//     printf("Enter a number\n");
//     scanf("%d", &num);
//     octal(num);
// }

// // 10. Write a recursive function to print reverse of a given number
// #include <stdio.h>
// int s = 0, r;
// int rev(int a)
// {
//     if (a == 0)
//         return s;
//     r = a % 10;
//     s = (s * 10) + r;
//     rev(a / 10);
//     return s;
// }
// int main()
// {
//     int num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     s = rev(num);
//     printf("%d", s);
//     return 0;
// }
