#include<iostream>
using namespace std;
class Complex{
private :
    int real;
    int img;
public:
    Complex(){
        cout<<"Enter Real part of Complex Number : ";
        cin>>real;
        cout<<"Enter Imaginary part of Complex Number : ";
        cin>>img;
    }
    Complex(int n){
        real=n;
        img=n;
    }
    Complex(int a,int b){
        real=a;
        img=b;
    }

    friend Complex add(Complex &obj1,Complex &obj2);
    friend void display(Complex &obj);
};
int main(){
    Complex A;
    Complex B(12,4);
    Complex C=add(A,B);
    display(C);

}

Complex add(Complex &obj1,Complex &obj2){
    int r=obj1.real+obj2.real;
    int i=obj1.img+obj2.img;
    Complex sum(r,i);
    return sum;
}

void display(Complex &obj){
    cout<<"Complex Number : "<<obj.real<<" + i("<<obj.img<<")";
}
