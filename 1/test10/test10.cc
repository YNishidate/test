#include <iostream>
#include "test10.hh"
#define N 5
using namespace std;
int main(){
    double sum = read_and_sum(N);
    cout << "Sum of vector is " << sum << "\n";
    return 0;
}
