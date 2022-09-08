// A program to demonstrate the behaviour of getchar()

#include <stdio.h>

int main()
{
    int c;

    printf("Type a 2 or more letter string here : ");
    c = getchar();

    printf("%c\n", c);
    printf("You got your first letter!\n");

    printf("I have used getchar(), but this time the keyboard buffer has something to read. : ");
    c = getchar();

    printf("%c\n", c);
    printf("which is the next letter of the first input\n");


    return 0;
}