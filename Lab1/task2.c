//task2 c program to input name, roll, marks and address of n students by user and display the entered details

#include<stdio.h>

struct student
{
    char name[20], address[50];
    int roll, marks;
};

int main()
{
    struct student s[100];
    int n, i;
    printf("Enter the number of students details to be taken: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Address: ");
        scanf("%s", s[i].address);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }
    for(i=0;i<n;i++)
    {
        printf("Name: %s, Roll: %d, Address: %s, Marks: %d\n", s[i].name, s[i].roll, s[i].address, s[i].marks);
    }
    return 0;
}
