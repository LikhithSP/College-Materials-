#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void print_word(int num) {
    switch(num) {
        case 1: printf("one\n"); break;
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;
        case 4: printf("four\n"); break;
        case 5: printf("five\n"); break;
        case 6: printf("six\n"); break;
        case 7: printf("seven\n"); break;
        case 8: printf("eight\n"); break;
        case 9: printf("nine\n"); break;
        default:
        break;
    }
}

int main() 
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9) 
        {
            print_word(i);
        } 
        else 
        {
            if (i % 2 == 0) 
            {
                printf("even\n");
            } else 
            {
                printf("odd\n");
            }
        }
    }

    return 0;
}
