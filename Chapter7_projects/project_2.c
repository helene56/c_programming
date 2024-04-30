// see page 157 in book
#include <stdio.h>

int main()
{
    int i, n, count = 0;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    for (i = 1; i <= n; i++, count++) {
        if (count == 24) {
            printf("Press Enter to continue");
            if (getchar() == '\n') {
                count = 0;
                continue;
            }

        }
        printf("%10d%10d\n", i, i * i);
        
    }
}
