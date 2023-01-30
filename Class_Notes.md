            #################################################################
            # C Language Lectures from CodeWithHarry's Channel              #
            # This File is for Making Notes & Important Code Snaippet       #
            #                                                               #
            #################################################################



                <---------------Lecture 1 --------------->
        
C language was developed in 1972 at Bell Laboratory by Dennis Ritchie. It was successor of B language which was developed by Ken Thompsons.
Reason : Why C language was developed?
Answer :It was developed to be used in writing operating systems for minicomputers. To maintain kernel of UNIX operating system.
C language was widely used in 1980s and it was standardised by ANSI(American National Standards Institute) in 1989.
Extension of any C program file is ( .c ).

                <---------------Lecture 2 --------------->
BreakDown of C program we Compiled 

    #include <stdio.h> 
This statement stdio.h is a header file which has the necessary information to include the input/output related functions in our program. Example printf, scanf etc.
If we want to use printf or scanf function in our program, we should include the stdio.h header file in our source code.
Otherwise, our program doesn’t know what is the definition of printf or scanf and it will throw error/warning saying that implicit declaration of built-in function ‘printf’

    int main(int argc, char const *argv[]) 
    This is a function, We can create multiple functions to perform multiple tasks. main function is a special function because programs begins from this function. All of the functions inside this function will be called. Int here signifies that it will return integer as return whenever it will be called. 
        {
            Parenthesis used to include content of functions inside it 
     
    printf("Hello World\n");
        printf funtions is used to print desired content in the console by the compiler on encountering it, It is included in the header file we imported ( i.e stdio.h)
    
     return 0; 
     Returns 0 to the USER/Operating System
    }
As a result this Code Snippet will print Hello World in the Consle.

For Detailed behind the scenes of compilation of C program check out this article from GeeksForGeeks <- https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/ ->
    **In Short during Compialtion Program is Pre-Processed then Compilation then Program is changed to Assembly code Then linking **
    