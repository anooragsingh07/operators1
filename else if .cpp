#include <iostream>
using namespace std;
int main(){
    int score;
    cin>>score;
    if(score>80){
        cout<<"well done"<<endl;
    }
    else if (score>50){
     cout<<"can be improved"<<endl;
    
    }
    else(score<20){
        cout<<"very poor perforamance"<<endl;
    }
    return 0;
}
