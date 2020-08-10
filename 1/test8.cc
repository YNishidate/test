#include <iostream>
#define N 6
using namespace std;
class vec{
public:
    vec(int s) :elem{new double[s]}, sz{s} {}
    double& operator[](int i){ return elem[i]; }
    int size() { return sz; }
private:
    double* elem;
    int sz;
};
double read_and_sum(int s);
int main(){
    double sum = read_and_sum(N);
    cout << "Sum of vector is " << sum << "\n";
    return 0;
}
double read_and_sum(int s){
    vec v(s);
    int i;
    double sum=0.0;
    for(i=0; i<s; i++){
        cout << "Please put no."<< i+1 <<" element.\n";
        cin >> v[i];
    }
    for(i=0; i<s; i++){
        sum+=v[i];
    }
    return sum;
}
