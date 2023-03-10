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

                    <---------------Lecture 3 --------------->

C is case sensitive Programming Language 
Every statment in C language ends with a semicolon ( ; ). Keep a track of semicolons to avoid error in programs.
A token is the smallest element of a program that is meaningful to the compiler. Tokens can be classified as follows:  

#   Keywords
#   Identifiers
#   Constants
#   Strings
#   Special Symbols
#   Operators
1.Keywords: Keywords are pre-defined or reserved words in a programming language. Each keyword is meant to perform a specific function in a program. Since keywords are referred names for a compiler, they can’t be used as variable names because by doing so, we are trying to assign a new meaning to the keyword which is not allowed. You cannot redefine keywords. However, you can specify the text to be substituted for keywords before compilation by using C/C++ preprocessor directives. C language supports 32 keywords which are given below: 
################################################
# auto     #  double   #  int      # struct    #
# break    #  else     #  long     # switch    #
# case     #  enum     #  register # typedef   #
# char     #  extern   #  return   # union     #
# const    #  float    #  short    # unsigned  #
# continue #  for      #  signed   # void      #
# default  #  goto     #  sizeof   # volatile  #
# do       #  if       #  static   # while     #
################################################
2.Identifiers: Identifiers are used as the general terminology for the naming of variables, functions and arrays. These are user-defined names consisting of an arbitrarily long sequence of letters and digits with either a letter or the underscore(_) as a first character. Identifier names must differ in spelling and case from any keywords. You cannot use keywords as identifiers; they are reserved for special use. Once declared, you can use the identifier in later program statements to refer to the associated value. A special kind of identifier, called a statement label, can be used in goto statements. 
There are certain rules that should be followed while naming c identifiers: 
 

    They must begin with a letter or underscore(_).
    They must consist of only letters, digits, or underscore. No other special character is allowed.
    It should not be a keyword.
    It must not contain white space.
    It should be up to 31 characters long as only the first 31 characters are significant.
    main: method name.
    a: variable name.

3.Constants: Constants are also like normal variables. But, the only difference is, their values can not be modified by the program once they are defined. Constants refer to fixed values. They are also called literals. 
Constants may belong to any of the data type

Syntax:
const data_type variable_name; (or) const data_type *variable_name; 
Types of Constants: 
 

    Integer constants – Example: 0, 1, 1218, 12482
    Real or Floating-point constants – Example: 0.0, 1203.03, 30486.184
    Octal & Hexadecimal constants – Example: octal: (013 )8 = (11)10, Hexadecimal: (013)16 = (19)10
    Character constants -Example: ‘a’, ‘A’, ‘z’
    String constants -Example: “GeeksforGeeks”

4.Strings: Strings are nothing but an array of characters ended with a null character (‘\0’). This null character indicates the end of the string. Strings are always enclosed in double-quotes. Whereas, a character is enclosed in single quotes in C and C++.Declarations for String: 
    char string[20] = {‘g’, ’e’, ‘e’, ‘k’, ‘s’, ‘f’, ‘o’, ‘r’, ‘g’, ’e’, ‘e’, ‘k’, ‘s’, ‘\0’};
    char string[20] = “geeksforgeeks”;
    char string [] = “geeksforgeeks”;
    when we declare char as “string[20]”, 20 bytes of memory space is allocated for holding the string value.
    When we declare char as “string[]”, memory space will be allocated as per the requirement during the execution of the program.

5.Special Symbols: The following special symbols are used in C having some special meaning and thus, cannot be used for some other purpose.[] () {}, ; * = # 
 

    Brackets[]: Opening and closing brackets are used as array element reference. These indicate single and multidimensional subscripts.
    Parentheses(): These special symbols are used to indicate function calls and function parameters.
    Braces{}: These opening and ending curly braces mark the start and end of a block of code containing more than one executable statement.
    Comma (, ): It is used to separate more than one statements like for separating parameters in function calls.
    Colon(:): It is an operator that essentially invokes something called an initialization list.
    Semicolon(;): It is known as a statement terminator.  It indicates the end of one logical entity. That’s why each individual statement must be ended with a semicolon.
    Asterisk (*): It is used to create a pointer variable and  for the multiplication of variables.
    Assignment operator(=): It is used to assign values and for the logical operation validation.
    Pre-processor (#): The preprocessor is a macro processor that is used automatically by the compiler to transform your program before actual compilation.

6.Operators: Operators are symbols that trigger an action when applied to C variables and other objects. The data items on which operators act upon are called operands. 
Depending on the number of operands that an operator can act upon, operators can be classified as follows: 
 

    Unary Operators: Those operators that require only a single operand to act upon are known as unary operators.For Example increment and decrement operators
    Binary Operators: Those operators that require two operands to act upon are called binary operators. Binary operators are classified into : 
        Arithmetic operators
        Relational Operators
        Logical Operators
        Assignment Operators
        Bitwise Operator
    Ternary Operator: The operator that require three operands to act upon are called ternary operator. Conditional Operator(?) is also called ternary operator. 
    Syntax: (Expression1)? expression2: expression3;

                
                                                    <---------------Lecture 3 --------------->
Datatypes and Variables in  C language.
Variables in C are associated with data type. Each data type requires an amount of memory and performs specific operations. int − Used to store an integer value.
What is Variables in C language?
A name given to a memory location. 
Declared by writing {       datatype variable_name = value ;        }
                Example : int a = 43 ; // Here the variable is not only declared but also Initialised. 
                Example : int a ,b ,c ,d ; // Here variable is declared only  , not initialised.

#   Rules for declaring  Variable in C language:
    # Can contain alphabet , digits  , underscores.
    # A variable's name can start with an alphabet and underscore only.
    # Can't start with a digit.
    # No whitespaces & Reserved keywords is allowed.
    Valid Variable names: int harshit ; float harhit188 ; char iamharshit_188 ;
    Invalid Variable names : int 188Harshit ; char long : // These can't be used to name a variabke in C language.

# Datatypes in C language.
Basic DataTypes 
int , char , float , double ;
Derived DataTypes : array , pointer , structure , union .
Enumeration DataTypes : emum 
Void DataType : void // void means null in ck= language.
