#include<iostream>
using namespace std;
class Complex{
private :
    int real;
    int img;
public:
    Complex(int a,int b){
        real=a;
        img=b;
    }

    Complex operator +(Complex c){
        Complex result;
        result.real=real+c.real;
        result.img=img+c.img;
        return result;
    }
    friend Complex operator +(Complex &a,Complex &b){
        Complex result;
        result.real=a.real+b.real;
        result.img=a.img+b.img;
        return result;
    }
}
void display(Complex &obj){
    cout<<"Complex Number : "<<obj.real<<" + i("<<obj.img<<")";
}
int main(){
    Complex A(20,30);
    Complex B(12,4);
    Complex C;
    C=A+B;
    display(C);

}
