#include <iostream>
#define N 4
using namespace std;
struct vec{
    int sz;
    double *elem;
};
void vector_init(vec& v, int s);
double read_and_sum(int s);
int main(){
    double sum = read_and_sum(N);
    cout << "Sum of vector is " << sum << "\n";
    return 0;
}
void vector_init(vec& v, int s){
    v.elem = new double[s];
    v.sz=s;
}
double read_and_sum(int s){
    vec v;
    vector_init(v, s);
    int i;
    double sum=0.0;
    for(i=0; i<s; i++){
        cout << "Please put no."<< i+1 <<" element.\n";
        cin >> v.elem[i];
    }
    for(i=0; i<s; i++){
        sum+=v.elem[i];
    }
    return sum;
}
