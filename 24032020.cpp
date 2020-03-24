#include <iostream>
using namespace std;
//class MyClass {
//     public:
//     string n;
//     void show(){
//     cout<<"n = "<<n<<endl;
//     };
//     void cycle(string a) {
//        for (int i=0;i<10;i++) {
//        n=n+a;
//    };
//    }
//};
//int main(){
//    MyClass a,b;
//    MyClass *p,*q;
//    p=&a;
//    q=&b;
//    p->n="BA";
//    p->cycle("AB");
//    p->show();
//    q->n="BYBY";
//    cout<<"-------------------"<<endl;
//    q->show();
//    cout<<"-------------------"<<endl;
//    return 0;
//}


//class MyClass{
//    public:
//    string n;
//    string m;
//    string k;
//void show(){
//    cout<<"m = "<<m<<endl;
//    cout<<"n = "<<n<<endl;
//};
//void setmn(string m,string n){
//    this->m=m;
//    this->n=n;
//};
//MyClass change(){
//    k=n+m;
//    n=k;
//    return *this;
//};
//};
//
//int main(){
//    MyClass a,b;
//    MyClass *p,*q;
//    p=&a;
//    q=&b;
//    (*p).setmn("babah", "allah");
//    (*p).show();
//    cout<<"-------------------"<<endl;
//    (*q)=(*p).change();
//    (*p).show();
//    cout<<"-------------------"<<endl;
//    (*q).show();
//
//    return 0;
//}

class MyClass{
    public:
    int m;
    double n;
    MyClass(int x,double y){
    m=x;
    n=y;
    }
    void show(bool arg){
    if(arg)
    cout<<"m = "<<m<<endl;
    else
    cout<<"n = "<<n<<endl;
    }
    }a(1,2.5),b(3,4.8);

    int main(){
    int MyClass::*p;
    double *q;
    MyClass *op;
    void (MyClass::*s)(bool arg);
    p=&MyClass::m;
    q=&a.n;
    s=&MyClass::show;
    op=&b;
    cout<<"a.m: "<<a.*p<<endl;
    cout<<"b.m: "<<op->*p<<endl;
    cout<<"a.n: "<<*q<<endl;
    cout<<"a.show():\n";
    (a.*s)(true); cout<<"b.show():\n";
    (op->*s)(false);
    return 0;
}










