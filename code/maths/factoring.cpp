#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a number and this code will show you all the factors of this number.\n>";
    int n;
    cin>>n;
    cout<<"\nThinking...\n";
    vector<int> factors;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<"Because "<<n<<"="<<i<<"*"<<(n/i)<<", "<<i;
            if(i*i!=n){
                cout<<" and "<<(n/i)<<" are factors ";
                factors.push_back(n/i);
            }
            else cout<<" is a factor ";
            cout<<"of "<<n<<endl;
            factors.push_back(i);
        }
    }
    for(int i=0; i<factors.size(); i++){
        for(int j=i+1; j<factors.size(); j++){
            if(factors[i]>factors[j]){
                swap(factors[i], factors[j]);
            }
        }
    }
    cout<<endl<<n<<"'s factors are: "<<endl;
    for(int i=0; i<factors.size(); i++){
        cout<<factors[i];
        if(i<factors.size()-1) cout<<", ";
    }
    cout<<' '<<endl;
    return 0;
}
