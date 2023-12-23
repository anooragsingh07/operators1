#include <iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"Enter a alphabet: ";
    cin>>alphabet;

    switch(alphabet){
        case 'a':
        cout<<"It is a vovel"<<endl;
        break;
         case 'e':
        cout<<"It is a vovel"<<endl;
        break;
         case 'i':
        cout<<"It is a vovel"<<endl;
        break;
         case 'o':
        cout<<"It is a vovel"<<endl;
        break;
         case 'u':
        cout<<"It is a vovel"<<endl;
        break;
        default:
        cout<<"It is a consonant"<<endl;
        break;
    }

}