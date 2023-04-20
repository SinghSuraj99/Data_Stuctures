#include<iostream>
using namespace std;

int main(){

char grade = 'A';
int ID = 10;
int *ptID= &ID;
char *ptgrade = &grade;
cout<<&ID<<"\n";
cout<<*ptID<<"\n";
cout<<grade<<"\n"<<ptgrade<<"\n";
std::cout<< &grade<<std::endl;
}
