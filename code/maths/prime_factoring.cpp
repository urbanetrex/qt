#include <iostream>
using namespace std;
bool prime(int nu){
    for(int i=2; i<nu; i++){
        if(nu%i==0) return 0;
    }
    return 1;
}
int main() {
    cout<<"Enter a number and this code will show all it's prime components. \nWARNING: Not for large numbers larger than 2147483647 or it's prime factors larger than 100000.\n>";
    int n;
    cin>>n;
    cout<<n<<" = ";
    if(n<2)cout<<n<<endl;
    else {
        int now_number=2;
        int nownum_num=0;
        while (!prime(now_number) || n%now_number!=0){
            now_number++;
        }
        while(n-1){
            if(n%now_number==0){
                nownum_num++;
                n/=now_number;
            } else if(nownum_num){
                if(nownum_num-1){
                    cout<<now_number<<'^'<<nownum_num;
                } else {
                    cout<<now_number;
                }
                cout<<" * ";
                nownum_num=0;
                do {
                    now_number++;
                } while (!prime(now_number) || n%now_number!=0);
            }
        }
        if(nownum_num-1){
            cout<<now_number<<'^'<<nownum_num;
        } else {
            cout<<now_number;
        }
        cout<<endl;
    }
    return 0;
}
