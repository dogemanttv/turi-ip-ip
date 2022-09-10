#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
 
#include <iostream>
#include <cstdlib>
using namespace std;
string msdelay;
int main() {
    start:
    cout << "Please enter ms delay (keep blank if you want default): ";
    getline(cin, msdelay);
    if (msdelay.empty()) {
        msdelay = "100";
    }
    cout << "\n";
    loop:
    cout << "turi\n";
    Sleep(stoi(msdelay));   
    cout << "ip\n";
    Sleep(stoi(msdelay));  
    cout << "ip\n";
    Sleep(stoi(msdelay));  
    cout << "ip\n";
    Sleep(stoi(msdelay));  
    cout << "ip\n";
    Sleep(stoi(msdelay));  
    goto loop;
}

