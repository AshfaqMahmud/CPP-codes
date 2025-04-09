#include<iostream>
using namespace std;

// this is an example of function overriding
// It allows a derived class to provide a specific 
// implementation of a function that is already defined in its base class.
// This enable the derived class to extend or change the features

/*
    Core Concepts:
        💥Base Class Function: The function in the base class that is intended to be overridden by a derived class.

        💥Derived Class Function: The function in the derived class that overrides the base class function.

        💥Virtual Function: The function in the base class that is marked with the virtual keyword, enabling dynamic dispatch.

        💥Dynamic Dispatch: The mechanism by which the correct function is called based on the actual type of the object, not the type of the pointer or reference used to call it.

    Key points to remember
        -> function in the derived class should be same as base class
        -> base class function must be declared as virtual to allow overriding
*/

class Animal {
    public:
    // virtual keyword usage allowed the function override

    virtual void sound() {
        cout<<"Animal Sound"<<endl;
    }
};

class Dog : public Animal {
    public:
    void sound()
    {
        cout<<"Dog sound"<<endl;
    }
};

class Cat : public Animal {
    public:
    void sound(){
        cout<<"Cat sound"<<endl;
    }
};

int main()
{
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound();
    animal2->sound();
    Animal animal3;
    animal3.sound();

    Dog dog;
    Cat cat;
    dog.sound();
    cat.sound();

    cout<<&animal1<<" "<<&animal2;
    char *p = (char*) animal1;
    cout << *p << endl;
    *p = 'A';
    cout << *p << endl;
    free(animal1);
    free(animal2);
    cout<<*p<<endl;
    return 0;

}