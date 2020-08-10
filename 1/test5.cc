#include <iostream>
using namespace std;
bool accept();
int main(){
    cout << accept() << "\n";
    return 0;
}
bool accept(){
    cout << "Do you want to proceed (y or n)?\n";
    char answer {0};
    cin >> answer;
    if(answer == 'y'){
        return true;
    }else{
        return false;
    }
}
