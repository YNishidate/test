#include <iostream>
using namespace std;
bool accept();
int main(){
    cout << accept() <<"\n";
    return 0;
}
bool accept(){
    while (1){
        cout << "Do you want to proceed (y or n)?\n";
        char answer = '0';
        cin >> answer;
        switch(answer){
            case 'y': return true;
            case 'n': return false;
            default: cout << "Sorry, I don't understand that.\n";
        }
    }
}
