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