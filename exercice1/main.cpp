#include <iostream>

using namespace std;

int main()
{
    float m;
    cout << "saisir un reel:"<<endl;
    cin>>m;
    if(m>0&&m<20)
    {
        cout<<"le reel saisi compris ]0,20["<<endl;
    }
    else{
        cout<<"le reel saisi ne pas compris [0,20]"<<endl;
    }
    return 0;
}
