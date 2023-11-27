#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised

//---------------------VOID NON PARAMETERISED FUNCTION--------------------------------
// void printName(){ // since printname does not carry any parameter inside the paranthesis
//     cout << "Heyy Aparna!!";
// }

// int main(){
//     printName();
//     return 0;
// }

//----------------PARAMETERISED FUNCTION--------------------------------
// void printName(string name){
//     cout << "Heyy "<< name << endl;
// }

// int main(){
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }

//----Take two parameters and print its sum
// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }
// int main(){
//     int num1, num2;
//     cin >> num1>>num2;
//     int res = sum(num1, num2);
//     cout << res << endl;
//     return 0;
// }

//----------------------------------------------------------------
// int main(){
//     int num1, num2;
//     cin >> num1>>num2;
//     int minimun = min(num1, num2);
//     cout << minimun << endl;
//     return 0;
// }

//----------------------------------------------------------------
// int maxx(int num1, int num2){
//     if(num1 < num2) {
//         return num1;
//     }
//     return num2; //always make sure to write the return value
// }
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum << endl;
//     return 0;
// }

//-------------------------PASS BY VALUE---------------------------------
// void doSomething(int num){
//     cout << num << endl;
//     num+=5;
//     cout << num << endl;
//     num+=5;
//     cout << num << endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }
//IN PASS BY VALUE A COPY OF VALUE GOES TO THE FUNCTION; THE ORIGINAL NUMBER DOES NOT GO

//-------------------PASS BY REFERENCE----------------------------------
// void doSomething(string &s){
//     s[0]= 't';
//     cout << s << endl;
// }
// int main(){
//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }

//----------------------------------------------------------------
// ARRAYS ALWAYS GOES WITH REFERENCE--------------------------------
void doSomething(int arr[], int n){
    arr[0] +=100;
    cout << "Value inside function: " << arr[0] << endl;
}
int main(){
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}