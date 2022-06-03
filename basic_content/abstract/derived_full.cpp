/**
 * @file derived_full.cpp
 * @brief 完整示例！抽象类由派生类继承实现！
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */
// 派生类必须实现抽象类的virtual function 才可以用，跟java不同（java 的子类可以直接call 父类的方法）
#include<iostream> 
using namespace std; 

class Base 
{ 
    int x; 
    public: 
    virtual void fun() = 0; 
    virtual int getX() { return x; } 
}; 

class Derived: public Base 
{ 
    public:
    int y; 
    public: 
    void fun() { cout << "fun() called"; }  // 实现了fun()函数
    public:
     int getX(){
        return y;
    }
}; 

int main(void) 
{ 
    Derived d; 
    d.y=2000;
    d.fun(); 
    int out=d.getX();
    std::cout<<d.y<<std::endl;
    std::cout<<out<<std::endl;
    return 0; 
} 
