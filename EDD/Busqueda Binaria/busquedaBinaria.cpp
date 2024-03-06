#include <iostream>

using namespace std;

void leerArr (int a[],int n){
    for (int i = 0; i < n; i++)
	    cin >> a[i];
}

int busquedaBi (int arr[], int max, int min, int b){
    int g = (max + min) / 2;
    
    if (arr[g] == b)
        return g;
        
    else{
        if (arr[g] > b)
            busquedaBi (arr,g,min,b);
        else{
            if (arr[g] < b)
                busquedaBi (arr,max,g,b);
            else
                return -1;
        }
    }
}

int main(){
    int n, b, a[1000];
    cout << "N";    cin >> n;
    cout << "B";    cin >> b;
    leerArr(a,n);
    if (b > a[n-1] || b < a[0])
        return -1;
    else
    	cout << busquedaBi(a,n-1,0,b);
    
    
    return 0;
}
