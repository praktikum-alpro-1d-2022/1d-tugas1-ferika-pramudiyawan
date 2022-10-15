#include<iostream>
using namespace std;
int main (){
    int x=10, y=12, temp;
    cout << "Nilai awal x=" << x << " dan y=" << y << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "setelah di tukar x=" << x << " dan y=" << y << endl;
    cout << endl;
    return 0;

}
