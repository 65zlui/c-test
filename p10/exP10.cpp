#include<iostream>
using namespace std;
void Log(const char* message){
    std::cout<<message<<std::endl;
}
int main(){
    Log("hello kitty");
    std::cin.get();
}