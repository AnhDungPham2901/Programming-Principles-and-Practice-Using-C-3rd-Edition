#include "../../PPPHeaders.h"

int main() {
    vector<int> v;
    try {
        for(int i; cin >> i;) {
        v.push_back(i);
    }
    for(int i=0; i<=v.size(); ++i) {
        cout << "v[" << i << ']' << "==" << v[i] << '\n';
    }
    } catch(out_of_range) {
        cerr << "Opps! out of range errr \n";
        return 1;
    } catch(...) {
        cerr << "Exceptions, something went wrong \n";
        return 2;
    }
    return 0;
}