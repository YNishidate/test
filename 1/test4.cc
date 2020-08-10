#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str1[5] {'a', 'b', 'c'};
//    strcat(str1, '\0');   //before modification
    strcat(str1, "\0");     //after modification
    cout << str1 << "\n";
    return 0;
}
