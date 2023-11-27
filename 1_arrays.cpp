#include<bits/stdc++.h>
using namespace std;
//array elements are stored in consecutive memory address but not sure where the first one is
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] +=10;
    cout << arr[3];
    return 0;
}