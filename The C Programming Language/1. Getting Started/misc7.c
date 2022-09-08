//String 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];

    scanf("%[^{]%*c", str); // takes input until it encounters {
    printf("%s", str);
    return 0;
}