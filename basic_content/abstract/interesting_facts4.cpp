/**
 * @file interesting_facts4.cpp
 * @brief 抽象类可以有构造函数
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */
// 派生类 可以继承 派生类么？

#include<iostream> 
using namespace std; 

// An abstract class with constructor 
class Base 
{ 
    protected: 
        int x; 
    public: 
        virtual void fun() = 0; 
        Base(int i) { x = i; } 
}; 

class Derived: public Base 
{ 
    public: int y; 
    public: 
    Derived(int i, int j):Base(i) { y = j; } 
    public:
    virtual void fun() { cout << "Derived = " << x << ", y = " << y<<"\n"; } 
}; 
//关注 f 的变化！！！！！
class Derived2: public Derived {
public: int f; //注意设置为public 不然无法获取 f 的值。
Derived2(int i,int j,int &f): Derived(i,j) {
    // 注意一定要区分不能将b设置成f，结果会错，
    //f=b; // output : correct 
    cout << "Derived2 = " << f<< "  1----"<<"\n";
    f = f; //output: Derived = 4, y = 5 Derived2 = 4 / 1871327840
    cout << "Derived2 = " << f<< "  2----"<<"\n";
    } 
public:
void fun() { 
    f=29; //如果不在这里设置29，会得到一个garbage value.
    cout << "Derived2 = " << y << " / "<<f<<"\n"; } 
};


int main(void) 
{ 
    Derived d(4, 5); 
    int val=5;
    // Derived2 d2(3,4,val); //output : Derived = 4, y = 5Derived2 = 4 / 49463392
    Derived2 d2(3,4,val);
    d.fun(); 
    d2.fun();
    d2.f=356;
    cout << "Derived2 = " << d2.f << "\n";
    return 0; 
} 
