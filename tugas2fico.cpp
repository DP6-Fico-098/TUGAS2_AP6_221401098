#include <iostream>
using namespace std;
int main(){
    system("cls");
    int nilai[3], *petunjuk;
    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;
    petunjuk = &nilai [0];
    cout<<"nilai "<<*petunjuk<<" ada dialamat memori "<<petunjuk<<endl;
    cout<<"nilai "<<*(petunjuk+1)<<" ada dialamat memori "<<(petunjuk+1)<<endl;
    cout<<"nilai "<<*(petunjuk+2)<<" ada dialamat memori "<<(petunjuk+2);
}