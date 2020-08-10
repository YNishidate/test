#include <iostream>
#define N 4
using namespace std;
class Vector{
public:
    Vector(int s);
    double& operator[](int i);
    int size();
private:
    double* elem;
    int sz;
};
Vector::Vector(int s)
    :elem {new double[s]}, sz{s}
{
}
double& Vector::operator[](int i)
{
    return elem[i];
}
int Vector::size()
{
    return sz;
}
double read_and_sum(int s);
int main(){
    double sum = read_and_sum(N);
    cout << "Sum of vector is " << sum << "\n";
    return 0;
}
double read_and_sum(int s){
    Vector v(s);
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
