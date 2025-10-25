<b>[1] What is meant by the term prompt? </b> </br>
Prompt is the message that encourages users to input
</br>

<b>[2] Which operator do you use to read into a variable? </b>
</br>
we use ">>" operator
</br>

<b>[3] What notations can you use to initialize an object? </b>
</br>
we have 4 ways
- "=": int a = 4; // narrow conversion
- "{}": int a {4}; // dont allow narrow conversion
- "={}": int a = {4}; // dont allow narrow conversion
- "()": int a (4);
</br>

<b>[4] If you want the user to input an integer value into your program for a variable named number, what are two lines of code you could write to ask the user to do it and to input the value into your program? </b>
</br>
```c++
    int number = -1;
    cin >> number;
```
</br>

<b> [5] What is \n called and what purpose does it serve? </b>
</br>
its called new line character. It brings the cursor to a new line.
</br>

</b>[6] What terminates input into a string? </b>
</br>
whitespace: space, tab characters
</br>

<b>[7] What terminates input into an integer?</b>
whitespace: space, tab characters
</br>

<b>[8] How would you write the following as a single line of code: </b>
```c++
    cout << "Hello, ";
    cout << first_name;
    cout << "!\n";
```
</br>
This is the signle line of code:

```c++
    cout << "Hello, " << first_name << "!\n";
```
</br>

<b>[9] What is an object? </b>
</br>
An object is a region of memory that is given a type. 
</br>

<b>[10] What is a literal? </b>
</br>
its a value that is typed directly to the code. For example int i = 4; 4 is an int literal.
</br>

<b>[11] What kinds of literals are there?</b>
</br>
There are 5 main types: int literal eg: 5, floating-point literal eg: 3.5, character literal eg: 'c', string literal eg: "Hello", and bool literal eg: true
</br>

<b>[12] What is a variable? </b>
<br>
A variable is a named object
</br>

<b> [13] What are typical sizes for a char, an int, and a double?</b> 
</br>
char: 8 bits byte </br>
int: 4 bytes </br>
double: 8 bytes </br>
</br>

<b> [14] What measures do we use for the size of small entities in memory, such as ints and strings? </b>
</br>
We use bits
</br>

<b> [15] What is the difference between = and ==? </b>
</br>
"=" is an assignment operator </br>
"==" is an equal operator 
</br>

<b> [16] What is a definition? </b>
</br>
A definition is a statement to define a variable
</br>

<b>[17] What is an initialization and how does it differ from an assignment? </b>
</br>
Initialization is the initial default value of a variable when we define it. Assignment is when we replace a new value to an old value of a variable. 
</br>

<b>[18] What is string concatenation and how do you make it work in C++? </b>
</br>
String concatenation is a way to combine multiple strings into 1. We make it work in C++ by using "+" operator which is concatenation operator. 
</br>

<b>[19] What operators can you apply to an int?</b>
</br>
add, substract, assignment, multiply, division, mod, equal, less than, less than or equal, greater than, greater than or equal, read from ">>", write to "<<", composite operations: +=, -=, *=, /=, ++, --

<b>[20] Which of the following are legal names in C++? If a name is not legal, why not? </b>
<br>
This_little_pig, This_1_is fine, 2_For_1_special, latest thing, George@home, _this_is_ok, MineMineMine, number, correct?, stroustrup.com, $PATH
</br>

Answer: invalid names: This_1_is fine (space in name), 2_For_1_special (starts with number), latest thing (space in name), George@home (@ in name), correct? (? in name), stroustrup.com (. in name)
<br>

<b> [21] Give five examples of legal names that you shouldn’t use because they are likely to cause confusion. </b>
</br>
Answer: names that start with underscore such as _foo. Because they are used specifically for system entities.

<b>[22] What are some good rules for choosing names? </b>
</br>
- meaningful names that can help people understand
- not too long name
- avoid using abbreviation

<b>[23] What is type safety and why is it important? </b>
</br>
Type safety is when we follow rules defined by types when we use objects.

Its important because if we dont ensure type safety, it can lead to unpredictable behaviours and unreliable programs. 
</br>

<b>[24] Why can conversion from double to int be a bad thing?</b>
</br>
when we convert double to int, we are facing narrow conversion problem that make losing information.
</br>

<b>[25] Define a rule to help decide if a conversion from one type to another is safe or unsafe.</b>
</br>
Checking if losing information before doing the conversion. 

</br>

<b>[26] How can we avoid undesirable conversions? </b>
</br>
 - follow compiler warnings
 - using {} or ={} for initialization

</br>

<b>[27] What are the uses of auto?</b>
</br>
 - obvious type from the initilizer
 - we don't want any conversion. 
