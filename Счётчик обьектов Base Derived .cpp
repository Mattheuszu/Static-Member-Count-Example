/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class Base {
private:
    static int count;

public:
    Base() {
        count++;
    }

    static int getCount() {
        return count;
    }
    
};

class Derived : public Base{
    
};

int Base::count = 0;

int main() {
    Base example1;
    Base example2;
    
    Derived derivexample1;
    
    
    std::cout << "Base Count: " << Base::getCount() << std::endl;
    std::cout << "Derived Count: " << Derived::getCount() << std::endl;

    return 0;
}
