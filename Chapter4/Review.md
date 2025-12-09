<b>[1] Name four major types of errors and briefly define each one. </b>
- compile-time error: syntax, type
- link-time error: errors found by linker
- run-time error: errors detected by hardwares, libraries, etc
- mistmatch between requirement vs implementation
</br>

<b>[2] What kinds of errors can we ignore in student programs?</b>
- Hardware misbehaves
- Errors by system softwares (eg: OS)
</br>

<b>[3] What guarantees should every completed project offer?</b>
- produce expected output with legal inputs
- throw error messages with illegal inputs
</br>

<b>[4] List three approaches we can take to eliminate errors in programs and produce acceptable software.</b>
- organize our program properly so that bugs can't hide
- testing and debugging to eliminate most of errors
- make sure the remaining bugs are not critical
</br>

<b>[5] Why do we hate debugging? </b>
Because its a tedious and time-consuming task in programming. 
</br>

<b>[6] What is a syntax error? Give five examples. </b>
Syntax errors are when we dont conform to language specification.
eg: missing semicolon by the end of a statement, missing parenthesis, using comma instead of semicolon to seperate parts in for loop, using Int instead of int.

<b>[7] What is a type error? Give five examples.</b>
The error report the mismatch between defined type and assigned type to variables or functions 
eg: defined function area but used arena name instead, define area function with 2 arguments but use area(1) (with 1 argument), define a function with 2 int arguments but pass in 1 int and 1 string, defined a variable with float and use modulo operator on it, defined a variable with type int and add it with a string variable. 

<b>[8] What is a linker error? Give three examples</b>

linker errors are errors found by linker when it combines object files into executable
example: 
(1) we declear a function and use a function in main but the function has not been defined anywhere else. (2) define types and declared types are different even the same name, eg int area(int a, int b) {} but we declare double area(double a, double b) {}. (3) Defined 2 arguments but declared 3 arguments. 

<b>[9] What is a logic error? Give three examples.</b>

The program runs but does not produce any output or the output is wrong. 
Example: (1) expect passing 3 to squre function and receive 9 but somehow receive 8. (2) Define area function receive width and length in int type but somehow pass float into it. (3) we want to get the value of the third element of a vector v, but we wrote v[3].

<b>[10] List four potential sources of program errors discussed in the text.</b>
- specification/requirement is not clear
- imcomplete program: we're aware but haven't completed/handled that cases yet
- unexpected arguments: if a function is given arguments that we dont handle, we have problems
- unexpected inputs: we expect user to type in number, but they type in string
- unexpected state: we have data around to use in different parts of a program, but the data is wrong for some reasons. 
- logical error: program runs but it produces wrong outputs.

<b>[11] How do you know if a result is plausible? What techniques do you have to answer such questions? </b>

We base on common sense and simple math to say that our result is not rediculous. we use Estimation to answer such questions (guessing and combining with calculating)

<b>[12] How do you test if an input operation succeeded?</b>

we use if(cin) {// this is okay } else {//fail}

<b>[13] Compare and contrast having the caller of a function handle a run-time error vs. having the called function handle the run-time error.</b>
- inside caller: 
    + Good: (1) in case we can't touch the callee's code, this is a good practice to make our program reliable
    + Bad: (1) Every caller call a callee must implement the check (2) when need to change, we need to search the whole repo to adapt the change. (3) in case we can't control the change of callee implementation, adapt the handler with the change is not easy (eg framed_area = area - 10. this is the implementation of framed_area, we can't touch the code or know it. And some day it change to area - 20, we have to find and adapt the handler accordingly)
- inside callee: 
    + Good: (1) single place to handle
    + Bad: (1) Don't know what to do with the error. (2) Dont have a full context to report the error in useful detail. (2) It can hit performance.

<b>[14] When is throwing an exception preferable to returning an “error value”? </b>

when we 

<b>[15] When is returning an “error value” preferable to throwing an exception? </b>