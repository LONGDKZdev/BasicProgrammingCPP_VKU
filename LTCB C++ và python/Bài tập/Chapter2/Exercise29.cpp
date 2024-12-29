#include <iostream>
using namespace std;
int main()
{
    float goc1, goc2,goc3;
    cout<<"Enter value goc1 = ";
    cin>>goc1;
    cout<<"Enter value goc2 = ";
    cin>>goc2;
    goc3= 180 -(goc1 +goc2);
    if(goc3 < 0 || goc3 > 180 )
    cout<<"Error\n";
    else
    cout<<"gia tri cua goc con lai la = "<<goc3<<endl;
}