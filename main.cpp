#include <iostream>
#include<string>
using namespace std;

int main(){
string name;
int age;
    cout << "Input your name : ";
    cin >> name;
    cout<< "Enter your age : ";
    cin >> age;
    if (age<18){
    cout<< "Error! You must be above 18 years to vote"<< endl;
    }else{
    cout<< "You can proceed with the voting" <<endl;
    }
    return 0;
}
