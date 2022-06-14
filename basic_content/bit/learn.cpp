#include<iostream>

using namespace std;
struct stuff 
{
    unsigned int field1: 30; //30 bits
    unsigned int       : 2; //2 bits fill gap for 32b memeory
    unsigned int field2: 4;// start another field, takes 4 bits
    unsigned int       : 29;//no fills,这个空洞可以用之前提到的未命名的位域成员填充，我们也可以使用一个宽度为 0 的未命名位域成员令下一位域成员与下一个整数对齐。
    unsigned int field3: 30; //3 bits
};
int main(){
    struct stuff s={1,3,5};
    cout<<s.field1<<endl; //1
    cout<<s.field2<<endl; //3
    cout<<s.field3<<endl;//5
    cout<<sizeof(s)<<endl; //16!!! 4个32bit 的内存， 4*4= 16 bytes
    return 0;
}
