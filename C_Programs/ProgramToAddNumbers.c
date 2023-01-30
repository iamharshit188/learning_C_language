#include <stdio.h>                     // This is preProcessor Statement which signals the compiler to include input/output header file
int main(int argc, char const *argv[]) // Main Function from where programs execution begins
{
    int a, b; // Declared two Integer Datatype , we will be discussing datatype later.
    printf("Enter Number a\n");
    scanf("%d", &a); // scanf is included in stdio.h file this is used to take input from the user
                     // & --> The ampersand is the address of operator.
    printf("Enter Number b\n");
    scanf("%d", &b);

    // \n It is New line character
    printf("Sum of A and  B is %d\n", a + b);

    return 0; // returns 0 to User/Operating System
}
