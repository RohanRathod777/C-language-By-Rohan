#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of marks for student :%d\n", i + 1);

        scanf("%d", ptr);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the value of marks for student :%d\n", i + 1, marks[i]);
    }

    return 0;
}