// To check whether given year is leap year or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    bool check1, check2;
    cout<<"Enter year"<<endl;
    cin>>n;
    check1 = (n%4 == 0) && (n%100 != 0);
    check2 = (n%400 == 0); 
    if(check1 || check2){
        cout<<n<<" is a leap year.";
    }
    else{
        cout<<n<<" is not a leap year.";
    }
    return 0;
}
