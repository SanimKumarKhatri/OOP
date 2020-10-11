//task1 C program to add two complex numbers using structure
#include<stdio.h>
#include<conio.h>

struct complex
{
	int real;
	int imaginary;
};

int main()
{
	complex c1, c2, c3;
	printf("Enter the real and imaginary part of first comp;lex number: ");
	scanf_s("%d %d", &c1.real, &c1.imaginary);
	printf("\n Enter the real and imaginary part of second complex number: ");
	scanf_s("%d %d", &c2.real, &c2.imaginary);
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
	printf("the sum is : %d+i%d", c3.real, c3.imaginary);
	return 0;
}
