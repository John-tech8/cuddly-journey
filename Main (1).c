#include <stdio.h>

int main(void)
{
    char name[50];
    int marks;

    printf("Enter Your Name:");
    scanf("%49s", name);
    printf("Enter your Marks:");
    scanf("%d", &marks);
    if (marks>90)
        printf("Grade : A");
    else if (marks>70)
        printf("Grade: B");
    else if (marks >40)
        printf("Grade: C");
    else
        printf("You are Fail");

    return 0;
     
}