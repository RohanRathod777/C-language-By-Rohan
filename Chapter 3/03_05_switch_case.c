#include <stdio.h>

int main()
{
    int day;
    printf("enter day 1-7 :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("sunday \n");
        break;
    case 2:
        printf("monday \n");
        break;
    case 3:
        printf("tueday \n");
        break;
    case 4:
        printf("wednsday \n");
        break;
    case 5:
        printf("thursday \n");
        break;
    case 6:
        printf("friday \n");
        break;
    case 7:
        printf("saturday \n");
        break;

    default:
        printf("not a valid day !");
    }

    return 0;
}