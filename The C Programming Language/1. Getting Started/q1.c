// Why to write int in "int main" and why to return 0?

#include <stdio.h> //include the standard I/O library

int main() //main is the function from where the execution of the program starts
{
    printf("Govinda");

    return 0; // this given function must return something
}

//Discussing the whole C program
/*
#include <stdio.h>-> #include is a preprocessor directive, and it will include
the file which is within the angle brackets into the current source file.
Here, the file to be included is stdio.h and it is the standard I/O library
and it is the header file which has the necessary information to include
the input output related functions in the programs such as printf(), scanf(),etc.
*/

/*
int main() -> This is where the execution begins from. O.S. starts the 
program execution by invoking the main function and since we have int in place
of return type, it will expect an integer value from the main function. 
This integer returned represents the status of the program. If any System-call
error occur like the file is not found, acces is denied then it returns the 
error code. And if the program is executed successfully, it returns 0. 
*/

/*
{ -> Since C, is a Block Structured Programming Language, the statements are
grouped together to achieve a specific task. The opening curly braces means
the starting point of the block.
*/

/*
printf("Hello, World\n") -> printf() is a function defined in the stdio.h
header file. Using printf() we can print the output on the screen.

; -> Every statement in C must end with a semicolon
*/

/*
return 0 -> This integer represents the status of the program. The zero
indicates the successful execution of the program whereas any non-zero
value indicates the non-successful execution. In main function we always
explicitly return 0 and the program execution will reach the return 0 statement 
if and only if all the above statements are executed without any system
call error.
*/

/*
} -> Indicating the end of the block
*/