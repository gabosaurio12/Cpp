#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    a = 96;
    string h = "h";
    for (int i = 0; i < 26; i++){
        a = a + 1;
        cout << char(a) << endl;
    }
    
    return 0;
}
