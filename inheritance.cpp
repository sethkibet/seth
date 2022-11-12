//c++ program for single inheritance
#include<iostream>
using namespace std;
//base class
class industry{
public:
void workers(){
cout<<"1t has workers:"<<endl;
}
void machines(){
cout<<"It has machines:"<<endl;
}
};
//derived class
class factory: public industry{
public:
void tea(){
cout<<"It has tea:"<<endl;
}
};
//creating object of factory class
int main(){
factory factory1;
//calling members of base class 
factory1.workers();
factory1.machines();
//calling members of derived function  
factory1.tea();
return 0;
}