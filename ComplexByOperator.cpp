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
    Complex(){
        real=0;
        img=0;
    }
/*
    Complex operator +(Complex &c){
        Complex result;
        result.real=real+c.real;
        result.img=img+c.img;
        return result;
    }
*/

    void display(){
        if(img>0){
            cout<<real<<"+"<<img<<"i";
        }
        else if(img<0){
            cout<<real<<img<<"i";
        }
        else{
            cout<<real;
        }

    }

    friend Complex operator +(Complex &a,Complex &b);
};

Complex operator +(Complex &a,Complex &b){
    Complex result;
    result.real=a.real+b.real;
    result.img=a.img+b.img;
    return result;
}

int main(){
    Complex A(20,-30);
    Complex B(12,4);
    Complex C;
    C=A+B;
    cout<<"Complex Number : ";
    C.display();

}
