#include <iostream>

class Parent {
    protected:
        int a;

    public:
    Parent() : a(10){
    }
    //virtual keyword add
    void printA(){
        std::cout << a << std::endl;
    }
};

class Child : public Parent {
    public:
        Child() : Parent() {

        }
        void printA(){
            std::cout << "child" <<std::endl;
        }
};

int main()
{
    Parent *p;
    Child c;
    p = &c;

    p->printA();
    c.printA();
}