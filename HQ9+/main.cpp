#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    for(int i=0 ; i<str.size() ; i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
