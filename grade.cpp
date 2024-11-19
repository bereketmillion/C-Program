#include <iostream> //demo of else if with program giving grade and compound/block statements L14&15
using namespace std;
int main() {
    int mid, final, x;
    cout<<"Enter your mid exam result"<<endl;
    cin>>mid;
    cout<<"Enter your final exam result"<<endl;
    cin>>final;
    x=mid +final;
    if (x>=90)
    {
        cout<<"A+"<<endl;
        cout<<"Excellent"<<endl;
    }
    else if ((x>=85)&&(x<90))
    {
        cout<<"A"<<endl;
        cout<<"very good"<<endl;
    }
    else if ((x>=80)&&(x<85))
    {
      cout<<"A-"<<endl;
        cout<<"good"<<endl;
    }
    else if ((x>=75)&&(x<80))
    {
        cout<<"B+"<<endl;
    }
        else if ((x>=70)&&(x<75))
    {
        cout<<"B"<<endl;
    }
        else if ((x>=65)&&(x<70))
    {
        cout<<"B-"<<endl;
    }
        else if ((x>=60)&&(x<65))
    {
        cout<<"C"<<endl;
    }
    else if((x>=55)&&(x<60))
    cout<<"D"<<endl;
    else
    cout<<"F";
    return 0;
}