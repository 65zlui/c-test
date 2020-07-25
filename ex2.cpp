#include<iostream>
using namespace std;
int Multiply(int a,int b){
    return a * b;
}
void MultiplyAndLog(int a,int b){
 int result = Multiply(a,b);
  std::cout<< result <<std::endl;
}
int main(){
MultiplyAndLog(250,3);



    int result = Multiply(3,2);
    int result2 = Multiply(8,9);
    int result3 = Multiply(6,4);

  std::cout<< result <<std::endl;
  std::cout<< result2 <<std::endl;
  std::cout<< result3 <<std::endl;
    std::cin.get();
}