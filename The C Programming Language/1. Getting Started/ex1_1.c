// Run the "hello, world" program on your system. Experiment with 
// leaving out parts of the program, to see what error messages you get.

#include <stdio.h>
int man()
{
    printf("Hello, Worlds\n");
}
// int main()
// {
//     printf("Govinda");
// }

//------Errors List--------
/*
1. Wrong library name
    #include <sdio.h>
    -> Fatal error, No such file or directory
       Compilation terminated


2. Leaving the ending angle bracket while specifying the library name
    -> Missing terminating > character

3. Leaving the starting angle brackets while specifying the library name
    -> #include expects "FILENAME" or <FILENAME>

4. Misspelling "include" 
    -> Invalid preprocessing directive #includ(misspelled); did you mean include?

5. Removed the # hash symbol 
    -> Expected '=', ',', ';', 'asm', or '__attribute__' before '<' token

6. Removing the hash symbol and angle brackets
    -> Unknown type name include

7. 
*/