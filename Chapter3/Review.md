<b>[1] What is a computation? </b>
Computation is an act of producing an output given an input for example give a square function an input 7 and then it produces 49 as an output. We call the process computation

<b>[2] What do we mean by inputs and outputs to a computation? Give examples. </b>
There are 2 main meanings for inputs and outputs </br>
- Inputs: what enters a computer and another meaning is information enters a part of a program (in this case we often call arguments)
- Outputs: what comes out a computer and another meaning is information produced by a part of a program (in this case we often call results)

</br>
<b>[3] What are the three requirements a programmer should keep in mind when expressing computations? </b>
</br>
Correctly, simply and efficiently.
</br>
</br>

<b>[4] What does an expression do?</b>
an expression computes a value out of operands using operators.

<b> [5] What is the difference between a statement and an expression, as described in this chapter?</b>
The main difference is that expression only computes a value and statement causes some effects to the program's states. 

<b>[6] What is an lvalue? List the operators that require an lvalue. Why do these operators, and not the others, require an lvalue? </b>
Answer: 

<b>[7] What is a constant expression?</b>
constant expression is an symbolic constant that is given value at the compile time. 

<b>[8] What is a literal?</b>
a literal is the simplest expression such as 10 is an int literal, 'c' is a char literal, 23.4 is an floating-point literal, "Hello" is in string literal and true is an bool literal

<b> [9] What is a symbolic constant and why do we use them?</b>
is an named object that has values unchanged during the program. We need to use it because it helps us find and change easier.
</br>

<b> [10] What is a magic constant? Give examples.</b>
Magic constant is using leterals in our code. Example instead of using a pi symbolic constant, we use 3.1415.... in our code. 
</br>

<b>[11] What are some operators that we can use for integers and floating-point values? </b>
Assignments (=), pre-increment/pre-decrement (++/--), addition (+), substraction (-), compound assignment (lval += a), etc
</br>

<b>[12] What operators can be used on integers but not on floating-point numbers?</b>
modulo (remainder - %)

<b>[13] What are some operators that can be used for strings? </b>
concatenation, assignemnt, read from, write to, less than, less than or equal, etc.
</br>

<b> [14] When would a programmer prefer a switch-statement to an if-statement?</b> </br>
When we need to compare to multiple constants. 
</br>

<b> [15] What are some common problems with switch-statements?</b> </br>
- missing break keyword
- switch on float or string type
- use same lables for multiple cases
- cases lable is not a constant expression.
</br>

<b>[16] What is the function of each part of the header line in a for-loop, and in what sequence are they executed? </b> </br>
- first part: inital value for the loop variable or control variable 
- second part: stop condition of the loop
- third part: increment operation.
Already listed as excution order
</br>

<b>[17] When should the for-loop be used and when should the while-loop be used?</b> </br>
Use for loop whenever its clear initial value, termination condition and increment operation. Use while loop if thats not the case.
 
<b>[18] Describe what the line char foo(int x) means in a function definition. </b> </br>
- char is the type of return value
- foo is the funtion identifier or function name
- int x: formal argument or paremer which has type int
</br>

<b> [19] When should you define a separate function for part of a program? List reasons.</b> </br>
When we have to have a name for the separated part. Because
- The named part can be reuse anywhere
- Program text is more structured with a name
- Easy testing the part.
</br>

<b> [20] What can you do to an int that you cannot do to a string?</b>
add, substract, multiple, divide, modulo, pre-increment, pre-decrement.
</br>

<b>[21] What can you do to a string that you cannot do to an int?</b> </br>
concatenation. 


<b> [22] What is the index of the third element of a vector?</b> </br>
the index is: 2
</br>

<b>[23] How do you write a for-loop that prints every element of a vector? </b> </br>
there are 2 ways: using index-based or using element-based (x:v)
- for(int i=0; i < v.size(); ++i) {}
- for(int x:v) {}
</br>

<b>[24] What does vector<char> alphabet(26); do? </b> </br>
it creates a vector named alphabet which can contain 26 chacters.
</br>

<b>[25] Describe what push_back() does to a vector.</b> </br>
it adds a new item to the back of the vector (last element)
</br>

<b>[26] What does vector’s member size() do? </b> </br>
the member function return the length of the vector or how many elements in the vector.
</br>

<b>[27] What makes vector so popular/useful? </b> </br>
we dont need to specify the length or size in advance. create it and add as many items as needed at the run time.
</br>

<b>[28] How do you sort the elements of a vector? </b> </br>
we can use the sort algorithm from the standard library. ranges::sort(name_of_vector);

