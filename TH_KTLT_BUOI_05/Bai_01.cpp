#include<iostream>
using namespace std;


void towerOfHanoi(int n, char from_peg, char to_peg, char aux_peg) {
    
    if (n == 1) {
        cout << "Di chuyen dia 1 tu cot " << from_peg << " den cot " << to_peg << endl;
        return;
    }

    
    towerOfHanoi(n - 1, from_peg, aux_peg, to_peg);

    
    cout << "Di chuyen dia " << n << " tu cot " << from_peg << " den cot " << to_peg << endl;

    
    towerOfHanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    int n; 
    cout << "Nhap so luong dia: ";
    cin >> n;

    
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}