#include <iostream>
#include<cstring>
using namespace std;
int g = 20; // Global variable declaration:
int main (){
    int aray1[3]={123,2,3};
int aray2[3]={163,2,3};
cout<<strcmp(aray1,aray2);
  /*  char array1;
  int aray1[2]  char array2;
    cout<<"Enter a number\n";
     cin>>array1;
    cout<<"Enter second number\n";
     cin>>array2;
    cout<<strcmp(array1,array2);
    char a[4][5];
    cout<<"Enter a number\n";
    for(int i=0;i<4;i++){
for(int j=0;j<5;j++){
cin>>a[i][j];}}
    for(int i=0;i<4;i++){
for(int j=0;j<5;j++){
    cout<<a[i][j]<<" ";}
    cout<<endl;}
    char str[100];
    cout<<"Enter a string"<<endl;
    cin.get(str,100);
    cout<<str;
     char x[]="This is programming exam";
    char y[25];
    char z[25];
    strcpy(y,x);
    strncpy(z,x,11);
    z[11]='\0';
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    int n=15;
    for(;;)
    cout<<n;
   for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++)
        cout<<" ";
           for(int k=1;k<=5-i;k++)
            cout<<"*";
        cout<<endl; 
    } 
  char name[]="abera";
   char nama[]="ali";
    cout<<strcmp(name,nama)<<endl;
    cout<<name;
    int n= 5;
    for(int i=n;i>=1;i--){
        for(int k=n-1;k>0;k--)
        cout<<" ";
        for(int j=1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
   for(int i=4;i>=1;i--){
        for(int k=1;k<=4-1;k++)
        cout<<" ";
          for(int j=1;j<=(2*i)-1;j++)
           cout<<"*";
        cout<<"\n";
    }
    int size=5;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==0||i==size-1){
                cout<<"*";}
            else{
                if(j==0||j==size-1){
                    cout<<"*";}
                else{
                    cout<<"     ";}}}
        cout<<"\n";}
    int a,b;
    int x=4,y=0;
    int a=10,b=15,c=20,d,e,f;
    d=a++ +b;
    e=++c + a;
    f=c+d-e--;
 int  div=x/y;
  double g = 800;  //Local variable declaration:
   cout << g<<endl;
   string name="\"hello world\"";
    cout<<name<<endl<<div;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"f = "<<f<<endl; 
    int x=4,y=5,c;
c=x++ + ++y+ ++x+ --y;
cout<<c<<endl;
cout<<y<<endl;
cout<<x;  
    a=25/5+7%2-2*2;
    float see=5+2*3+((3-2)*7)-9/2;
    cout<<a<<endl<<see; 
  do{
      cout<<a<<endl;
      a++;
      
  }while(a<10);
    cout<<"end";  
    for(int a=5;a>=1;a--){
        for(int b=1;b<=a;b++){
            cout<<a;
        }
        cout<<endl;  
    };
    cout<<a<<". welcome"<<endl;*/
return 0;
} 