#include <stdio.h>
int main() {
    char c;
    printf("Do you want to run this program?Y or N: ");
    scanf("%c", &c);

    if ((c >= 'y' || 'n')  )
    {
        printf("Yes", c);
    }
    else
    {
        printf("No", c);
    }

    return 0;
}