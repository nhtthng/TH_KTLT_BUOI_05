#include <iostream>
#include <cctype> 
using namespace std;

bool isAllDigits(const string& s) {
    
    for (char ch : s) {
        
        if (!isdigit(ch)) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s;
    cout << "Nhap chuoi: ";
    cin >> s;

    if (isAllDigits(s)) {
        cout << "chuoi chua toan ky tu so." << endl;
    }
    else {
        cout << "chuoi khong chua toan ky tu so." << endl;
    }

    return 0;
}