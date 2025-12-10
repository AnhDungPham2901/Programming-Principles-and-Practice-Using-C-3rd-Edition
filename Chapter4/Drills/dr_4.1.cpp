#include "../../PPPHeaders.h"

int main()
try{
        //[1] Cout << "Success!\n"; syntax error: cout not Cout
        // cout << "Success!\n";
        //[2] cout << "Success!\n; syntax error because of missing " end of the statement
        // cout << "Success!\n"; //
        // [3] cout << "Success" << !\n"; Missing " before the !\n" syntax error
        // cout << "Success" << "!\n"; 
        // [4] cout << success << ’\n’; This is error because success is interpreted as a variable not a string. but the variable has not defined. this is link-time error
        // cout << "success" << '\n';
        // [5] string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; there are 2 errors: strong res but assign int to it, and vector<int> but assign res is string to it.
        // int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        //[6] vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n"; error at using wrong vector subscript notiation. it should be [] not ()
        // vector<int> v(10); v[5] = 7; if(v[5] != 7) cout << "Success!\n";
        // [7] if (cond) cout << "Success!\n"; else cout << "Fail!\n"; error because cond expression has not. defined
        // if (1) cout << "Success!\n"; else cout << "Fail!\n";
        // [8] bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; this is a logic error: we want to print out Success instead.
        // bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
        // [9] string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n"; bool not boo and logical error that c is false that makes it not print out Successs
        // string s = "ape"; bool c = "fool">s; if (c) cout << "Success!\n";
        // [10] string s = "ape"; if (s=="fool") cout << "Success!\n"; logical error because it prints nothing as expected
        // string s = "fool"; if (s=="fool") cout << "Success!\n";
        // [11] string s = "ape"; if (s=="fool") cout < "Success!\n"; logical error + syntax error; logical because never true condition and << not <
        // string s = "fool"; if (s=="fool") cout << "Success!\n";
        // [13] vector<char> v(5); for (int i = 0; 0<v.size(); ++i) ; cout << "Success!\n"; there is empty statement that does nothing and logical error where condition 0 < v.size() that makes it loop infinitely
        // vector<char> v(5); for (int i = 0; i<v.size(); ++i); cout << "Success!\n";
        // [14] vector<char> v(5); for (int i = 0; i<=v.size(); ++i) ; cout << "Success!\n"; NO ERROR
        // vector<char> v(5); for (int i = 0; i<=v.size(); ++i); cout << "Success!\n";
        // [15] string s = "Success!\n"; for (int i = 0; i<6; ++i) cout << s[i]; no error but there is % end of the output display and missing !. should be <9 to remove it and have "Success!"
        // string s = "Success!\n"; for (int i = 0; i<9; ++i) cout << s[i]; 
        // [16] if (true) then cout << "Success!\n"; else cout << "Fail!\n"; SYSTAX ERROR: cause there is no if then
        // if (true) cout << "Success!\n"; else cout << "Fail!\n";
        // [25] cin << "Success!\n"; ERROR: cout not cin man
        // cout << "Success!\n";
        // [24] int x = 4; double d = 5/(x−2); if (d=2*x+0.5) cout << "Success!\n"; ERROR: == not = 
        int x = 4; double d = double(5)/(x-2); if (d==2+0.5) cout << "Success!\n";
        return 0;
}
catch (exception& e){
         cerr << "error: " << e.what() << '\n';
         return 1;
}
catch (...) {
         cerr << "Oops: unknown exception!\n";
         return 2;
}