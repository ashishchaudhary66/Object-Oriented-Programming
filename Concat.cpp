#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
    char str[100];
    int len;
    public:
    String(){}
    String(char s[])
    {
        strcpy(str,s);
        len=strlen(s);
    }
    String operator +(String s){
        String result;
        result=strcat(str,s.str);
        return result;
    }
    void Print(){
        cout<<str<<endl;
        cout<<len<<endl;
    }
    bool operator ==(String s){
        if(len==s.len){
            return true;
        }
        return false;
    }
    bool operator >(String s){
        if(len>s.len){
            return true;
        }
        return false;
    }
    bool operator <(String s){
        if(len<s.len){
            return true;
        }
        return false;
    }
};

int main(){
    String str1("Ashish"),str2("Shreya"),str3;
    str3=str1+str2;
    str1.Print();
    str3.Print();
    bool res=str1==str2;
    cout<<"isEqual : "<<res<<endl;
    res=str1==str3;
    cout<<"isEqual : "<<res<<endl;
    res=str1<str3;
    cout<<"isLessThan : "<<res<<endl;
    res=str1>str3;
    cout<<"isGreaterThan : "<<res<<endl;


}
