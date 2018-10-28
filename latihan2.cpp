#include<iostream>

using namespace std;

int main(){
int A, B, C;

cout << "Masukan bilangan 1: ";
cin >> A;

cout << "Masukan bilangan 2: ";
cin >> B;

cout << "Masukan bilangan 3: ";
cin >> C;

if (A>B) {
    if (A>C)
        cout << "Bilangan terbesar adalah: " << A << endl;
    else
        cout << "Bilangan terbesar adalah: " << C << endl;
    }else{
        if (B>C)
        cout << "Bilangan terbesar adalah: " << B << endl;
    else
        cout << "Biangan terbesar adalah: " << C << endl;
    }
}
