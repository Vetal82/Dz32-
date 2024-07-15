#include<iostream>
using namespace std;

namespace Namespace1 {
    class Class_1 {
    public:
        void foo() { cout << "Namespace1::Class_1::foo()" << endl; }
    };

    class Class_2 {
    public:
        void bar() { cout << "Namespace1::Class_2::bar()" << endl; }
    };

    class Class_4 {
    public:
        void baz() { cout << "Namespace1::Class_4::baz()" << endl; }
    };
}


namespace Namespace2 {
    class Class_2 {
    public:
        void bar() { cout << "Namespace2::Class_2::bar()" << endl; }
    };

    class Class_3 {
    public:
        void qux() { cout << "Namespace2::Class_3::qux()" << endl; }
    };

    class Class_4 {
    public:
        void baz() { cout << "Namespace2::Class_4::baz()" << endl; }
    };
}

int main() {
    
    Namespace1::Class_1 obj1;
    obj1.foo();

    Namespace1::Class_2 obj2;
    obj2.bar();

    Namespace1::Class_4 obj4;
    obj4.baz();

    
    Namespace2::Class_2 obj2_ns2;
    obj2_ns2.bar();

    Namespace2::Class_3 obj3;
    obj3.qux();

    Namespace2::Class_4 obj4_ns2;
    obj4_ns2.baz();

    return 0;
}