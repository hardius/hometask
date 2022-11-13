#include <iostream>

using std::cout;
using std::endl;

int main() {
;
    for(int i = 1; i<100; ++i)
    {
        if (i%3 == 0 )
        {
           cout << "Foo";
        }
        if (i%5 == 0 )
        {
            cout << "Bar";
        }
        if (i%3 != 0 && i%5 !=0)
        {
            cout << i;
        }
        cout << endl;
    }
}
