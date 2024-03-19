#include <iostream>
#include <string>

using namespace std;

string createPhoneNumber(const int arr []){
  string cad = "(";
  int arr2[10];
  
  for (int i = 0; i < 12; i++){
    arr2[i] = arr[i] + 48;
  }
  
  for (int i = 0; i < 15; i++){
    cad = cad + char(arr2[i]);
  }
  
  string cadAux = cad;
  
  cad[4] = ')';
  cad[5] = ' ';
  for (int i = 6; i < 13; i++){
    cad[i] = cadAux[i-2];
  }
  
  cad[9] = '-';
  for (int i = 10; i < 14; i++){
    cad[i] = cadAux[i-3];
  }
  cout << cad;
  return cad;
}

int main(){
    int arr1[10];
    
    arr1[0] = 1;
    arr1[0] = 2;
    arr1[0] = 3;
    arr1[0] = 4;
    arr1[0] = 5;
    arr1[0] = 6;
    arr1[0] = 7;
    arr1[0] = 8;
    arr1[0] = 9;
    arr1[0] = 0;

    createPhoneNumber(arr1);
    
    return 0;
}
