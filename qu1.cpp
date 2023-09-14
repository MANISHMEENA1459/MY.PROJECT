#include<iostream>
using namespace std;
//Creating complex class
class complex
{
   int real;
   int imaginary;
   public:
   complex();
   complex(int x,int y);
   void print();
// Overloading operator of adding
   complex operator + (complex const&obj)
   {
   
    int r=real + obj.real;
    int i=imaginary + obj.imaginary;
    return complex(r,i);
   }
// Overloading operator subtraction
   complex operator - (complex const&obj)
   {
    int r=real - obj.real;
    int i=imaginary - obj.imaginary;
    return complex(r,i);
   }
// Overloading operator multiplying
   complex operator * (complex const&obj)
   {
    complex c;
    int r=(real*obj.real) - (imaginary*obj.imaginary);
    int i=(real*obj.imaginary) + (imaginary*obj.real);
    return complex(r,i);
   }
};

complex :: complex()
{
    int real=0;
    int imaginary=0;
}

complex :: complex(int x,int y)
{
    real=x;
    imaginary=y;
}

void complex :: print()
{
    cout << real << " + i" << imaginary << endl;
}






int main()
{
    int r,i;
    cout << "Enter r,i" << endl;
    cin >> r >> i;
    complex c1(r,i);
    int r1,i1;
    cout << "Enter r1,i1" << endl;
    cin >> r1 >> i1;
    complex c2(r1,i1);
    c1.print();
    c2.print();
//in this we are Adding complex numbers using operator overloading
    complex add=c1+c2;
//in this we are Subtracting complex numbers using operator overloading
    complex sub=c1-c2;
//in this we are Multiplying complex numbers using operator overloading
    complex mult=c1*c2;
// result of addition
    cout << "Printing result of addition" << endl;
    add.print();
// result of subtraction
    cout << "Printing result of subtraction" << endl;
    sub.print();
// result of multiplication
    cout << "Printing result of multiplication" << endl;
    mult.print();
}
	

