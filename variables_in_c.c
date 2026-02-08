#include <stdio.h>
#include<stdbool.h> //standard boolean headder file

int main() {
    //variable is a reusable cointainer for a value which can be of various datatypes
    //it behaves as if it were the value it contains

    //data type int
    int age = 24; //int represents a data of type integer
    int year= 2026;

    printf("you are %d years old\n", age); // %d is the format specifier for decimal
    printf("the year is %d\n", year);

    // data type float
    float gpa = 7.12; //float is youse to store a decimal value
    float pi = 3.14159; //float can only store about 7 values after decimal point 
    // data type double, extention of float.
    double precision = 4.123456789; //double is simular to float but it can store 16 values after decimal point which is used for more precision.

    printf("your gpa is %f\n", gpa);  // %f is the format specifier for a floating point number
    printf("the value of pi is %.2f\n", pi); //.nf in this n specifies how many values to print after decimal point.
    printf("the value is %.15lf\n", precision); //lf is the format specifier for double.

    //data type char
    char grade = 'S'; //for character you can only use ''(single quote) not ""(double quote).
    char symbol = '#'; //every char can onlybe of 1byte, is we store any char more then 1 byte throws an error.
    char currency = '$';

    printf("your grade is %c\n",grade);
    printf("your char is %c\n",symbol);
    printf("your currency is %c\n",currency);

    //there is no string data type in c so we can use dynamic array of char
    char my_string[] = "hi there how are you doing!"; //when you use array of char you have to use ""(double quotes)
    char INR[] = "₹"; //the character ₹ is ob 3 bytes!

    printf("my string is %s\n",my_string); //for array of char i.e string we should use %s format specifier.
    printf("your currency is %s\n",INR);

    //boolean data type , to work with boolean data type we have to include stdbool.h headder file.
    bool is_online = 1; //think of bool as "bit data type in verilog and sv".
    bool condition_a = false; // not only the bool data type variables can be assigned with 1/0 (binary) values they can also be assigned with true (1) or false (0) aswell.

    printf("%d\n",is_online);
    printf("%d\n",condition_a);
    
    return 0;
}