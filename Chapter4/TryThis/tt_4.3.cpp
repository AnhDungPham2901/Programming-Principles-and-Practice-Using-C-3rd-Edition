#include "../../PPPHeaders.h"

int area(int length, int width)
    // calculate area of a rectangle;
    // return -1 to indicate a bad argument
    {
         if (length<=0 || width <=0)
                  return - 1;
         return length*width;
    }

void f(int x, int y, int z)
{
    int area1 = area(x,y);
    if (area1<=0)
        error("non−positive area");
    int area2 = area(1,z);
    int area3 = area(y,z);
    cout << "area1: " << area1 << '\n';
    cout << "area2: " << area2 << '\n';
    cout << "area3: " << area3 << '\n';
    double ratio = double(area1)/area3;
    cout << "ratio: " << ratio << '\n';
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    f(x, y, z);
    return 0;
}