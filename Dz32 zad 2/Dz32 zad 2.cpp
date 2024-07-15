//
#include<iostream>
using namespace std;
void func() {
    cout << "Global namespace func()" << endl;
}


namespace A {
    
    namespace B {
        void func() {
            cout << "A::B namespace func()" << endl;
        }
    }
}

int main() {
    
    func();

    
    A::B::func();

    
    using namespace A::B;

    

    return 0;
}