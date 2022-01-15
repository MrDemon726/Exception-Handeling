#include<iostream>
using namespace std;
void average( double sum ,double totalNum){
    double average{};
    try{
        if(totalNum == 0)
        throw 0;
        average = sum/totalNum;
        cout<<"Average ="<<average<<endl;
    }
    catch(int &range_error){
        cout<<"==>>"<<range_error;
        cerr<<"Can't divide by zero"<<endl;
    }
    catch(...){
        cerr<<"Can't divide by zero"<<endl;
    }
}
int main(){
    average(100 , 10);
    average(100 , 0);
}