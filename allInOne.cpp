// //this shows how to start with #define in c++
// #include<iostream>
// using namespace std;
// int main()
// {
// int x=3;
// x=+4;
// cout<<x;
// }


// //the following code demonstrates arthimetic operation in c++
//  #include<iostream>
//  #include<iomanip>
//  using namespace std;
//  int main()
//  {
//  	int x,y,z,w,n,m;
//  	cout<<"enter the first number"<<endl;
//  	cin>>x;
//  	cout<<"enter the second number"<<endl;
//  	cin>>y;
//  	x+=y;
//  	z=x-y;
//  	w=x/y;
//  	n=x*y;
//  	m=x%y;
//  	cout<<"operation      "<<setw(10)<<"result"<<endl;
//     cout<<"sum            "<<setw(10)<<x<<endl;
//     cout<<"substraction   "<<setw(10)<<z<<endl;
// 	cout<<"division       "<<setw(10)<<w<<endl;
// 	cout<<"multiplication "<<setw(10)<<n<<endl;
// 	cout<<"modulo         "<<setw(10)<<m;
//  }


//  //the following code shows an array
//  #include <iostream>
// using namespace std;
// int main(){
// /*double x[3]={0,100,2};
// cout<<x[1];
//     return 0;
//  */   int array[5];
//     cout<<"Enter the number"<<endl;
//     for(int i=0;i<=4;i++){
//     for(int j=0;j<=4;j++){
//         cin>>array[i][j];}
//         cout<<endl;
//     }
//     for(int i=0;i<=4;i++){
//     for(int j=0;j<=4;j++){
//       cout<<array[i][j]<<" ";}
//         cout<<endl;
// }


// //the folowing code shows exchanging the place of variables without declaringg third variable 
// #include<iostream>
// using namespace std;
// int main()
// {
	
// int p,o;
// cout<<"enter the value of p"<<endl;
// cin>>p;
// cout<<"enter the value of o"<<endl;
// cin>>o;
// p=p+o;
// o=p-o;
// p=p-o;
// cout<<"the value of p is "<<p<<endl;
// cout<<"the value of o is "<<o<<endl;
// return 0;
// }


// //the following code demontrates the how to use break
// #include<iostream>
// using namespace std;
// int main()
// {
// /*	int i=0;
// 	while(i<10){
// 		cout<<i<<endl;
// 		i++;
// if(i==4){
// 	break;
// }
// 	}
// */
//     for(int i=1;i<=10;i=i+2){
//         cout<<i<<" ";
//         if(i==7)
//         break;
// //        cout<<i<<" ";
//     }
// 	return 0;
// }


// //the folowing shows how to use bitwise operator
// #include <iostream>
// using namespace std;
// int main() {
//     int x=9, y=12, z=10;
//     cout <<"9&12="<<(x&y)<<endl;
//     cout <<"9|12="<<(x|y)<<endl;
//     cout <<"9^12="<<(x^y)<<endl;
//     cout <<"~9="<<~x<<endl;
//     cout <<"9>>1="<<(x>>1)<<endl;
//     cout <<"10<<2="<<(z<<2)<<endl;
//     return 0;
// }


// //the foolowing code displays dollar in the shape of christmas tree
// #include<iostream>
// using namespace std;
// int main()
// {
// 	for(int i=1;i<=4;i++){
// 		for(int k=1;k<=4-i;k++){
// 			cout<<" ";
// 		}
// 			for(int j=1;j<=2*i-1;j++)
		 
// 	cout<<'$';
// cout<<endl;	
// 	}
// 	return 0;


// //the folowing code calculates the area and circumference of circle
// #include <iostream>
// using namespace std;
// int main() {
//     int r;
//     float pie=3.14,area,height,volume;//pia as π not exercised
//     cout <<"inter the radius of the circle\n";
//     cin>>r;
//     cout<<"insert the height of the circle\n";
//     cin>>height;
//     area=r*r*pie;
//     cout << "The area of the cicle is "<<area<<endl;
//     volume=area*height;
//     cout<<"The volume of the circle is "<<volume<<endl;
//     return 0;
// }


// //the folowing code fragment dispays what you enter
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
// 	float b;          
// 	char y;
// 	string name;
// 	cout<<"inter your float number"<<endl;
// 	cin>>b;
// 	cout<<"inter any char value"<<endl;
// 	cin>>y;
// 	cout<<"inter any name"<<endl;
// 	cin>>name;
//     cout<<"inter any number"<<endl;
//     cin>>x;
//     cout<<x<<endl;
// 	cout<<b<<endl;
// 	cout<<y<<endl;
// 	cout<<name<<endl;
// 	return 0;
// }


// //the following shows how to recieve two values at once
// #include <iostream>
// using namespace std;
// int main() {
//     int g=2,h=3;
//     //int l,w,area;
//     //int x,y,sum,sub,mult,div,mod;
//     //cout << "Bereket Million"<<endl<< "computing collage"<< "\n1st year\n"<<1<<endl;
//  /*   cout << "Enter two numbers"<<endl;
//     cin >>x>>y;
//     sum=x+y;
//     cout <<"The sum is "<<sum<<endl;
//     sub=x-y;
//     cout << "The substaction is "<<sub<<endl;
//     mult=x*y;
//     cout << "The multiplication is "<<mult<<endl;
//     div=x/y;
//     cout << "The division is "<<div<<endl;
//     mod=x%y;
//     cout <<"The modules is "<<mod;
//     return 0; 
//     cout << "inset the width "<<endl;
//     cin >>w;
//     cout << "inset the legth "<<endl;
//     cin>>l;
//     area=l*w;
//     cout << "The area is "<<area; */
//     g=g+h;
//     h=g-h;
//     g=g-h;
//     cout <<g<<endl<<h;
// }


// ///the folowing code shows how to combine arthimetic operator and assignment operator
// #include<iostream>
// using namespace std;
// int main()
// {
// int x=5,y=12;
// x+=y;
// cout<<x<<endl;
// x-=y;
// cout<<x<<endl;
// x*=y;
// cout<<x;
// }


// //the following shows ternary expression in c++
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cout<<"enter the first number\n";
//     cin>>a;
//     cout<<"enter the second number\n";
//     cin>>b;
//     cout<<((a>b)?a:b);
// //    cout<<(a>b)?3:2;
//     return 0;
// }


// //the following code shows how to use continue
// #include<iostream>
// using namespace std;
// int main()
// {
// 	for(int i=1;i<=10;i++){
// //   cout<<i<<" ";
// 		if(i%2==1)
// 			continue;
// 	    cout<<i<<" ";
// 	}
// 	return 0;
// }


// //the following code shows how to use both break and continue in one
// #include <iostream>
// using namespace std;
// int main() {
//     int i;
//     for(i=1;i<=30;i++)
//     if(i%2==0||i==7)
//     continue;
//     else if(i==15)
//     break;
//     else
//     cout<<i<<endl;
//     return 0;
// }


// //the folowing code displays what you inserted
// #include <iostream>
// using namespace std;
// int main(){
// int x;
// char ca;
// float fa;
// string name;
// cout<<"inter your name"<<endl;
// cin>>name;	
// cout<<"inter your age"<<endl;
// cin>>x;	
// cout<<"inter your a letter"<<endl;
// cin>>ca;	
// cout<<"inter your cgpa"<<endl;
// cin>>fa;
// cout<<name<<endl;
// cout<<x<<endl;
// cout<<fa<<endl;
// cout<<ca;
// }


// //the folowing code shows how to use #define iin c++
// #include <iostream>
// #define length 10
// #define width 5
// #define NEWLINE '\n'
// using namespace std;
// int main() {
//     int num=3;
//     cout<<"The number = "<<num<<"\n";
//     float fa = 11.3;
//     cout << "Real number = "<<fa<<"\n";
//     char ca = 'A';
//     cout<<"The character = "<<ca<<"\n";
//     string name="you";
//     cout<<"string = "<<name<<"\n";
//     int area = length*width;
//     cout<<NEWLINE;
//     cout<<"area="<<area;
//     //cout<<NEWLINE;
// }


// ///the folowing program show how to use do while loop
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int a,b,sum;
// 	char ch;
// 	do{
// 		cout<<"enter the first number"<<endl;
// 		cin>>a;
// 		cout<<"enter the second number"<<endl;
// 		cin>>b;
// 		sum=a+b;
// 		cout<<"the sum of the two numbers is   "<<sum<<endl;
// 		cout<<"do you want to continiue?\n enter y if you want to continue, else n"<<endl;
// 		cin>>ch;
// 	}while(ch=='y');
// 	return 0;
// }


// //another sample of do while loop
// #include <iostream>
// using namespace std;
// int main() {
//     int i=5;
//     do{
//         cout<<i<<'\n';
//         i+=5;
//     }while(i<=25);
//     return 0;
// }//demo for do while loop L23


// //demostration of error in coding.the compiler doesn't stop.
// #include <iostream>
// using namespace std;
// int main() {
//     int x=2;
//     while(x<20000)
//     cout<<x<<" ";
//     x=x+4;
//     return 0;
// }



// //for loop
// #include <iostream>
// using namespace std;
// int main() {
//     int k,sum=0;
//     for(int k=1; k<=100; k++)
//     {
//      sum=sum+k;
//         cout<<sum<<endl;
//     }
//     //cout<<sum;
//     return 0;
// }
// // for loop demo



// #include<iostream>
// using namespace std;
// double sum(double x,double y){
//     int sum=x+y;
//     return x+y;
// }
// double sub(double x,double y){
//     int sub=x-y;
//     return x-y;
// }
// double div(double x,double y){
//     int div=x/y;
//     return x/y;
// }
// double mult(double x,double y){
//     int mult=x*y;
//     return x*y;
// }
// int main()
// {
// int a,b;
// cout<<"Enter the numbers "<<endl;
// cin>>a>>b;
// cout<<"The sum of the numbers is "<<sum(a,b)<<endl;
// cout<<"The subtraction of the numbers is "<<sub(a,b)<<endl;
// cout<<"The division of the numbers is "<<div(a,b)<<endl;
// cout<<"The multiplication of the numbers is "<<mult(a,b)<<endl;
// }



// #include <iostream>
// using namespace std;
// int fun(int d, int e, int f);
// int main() {
//     int a,b,c;
//    cout<<" Enter three number"<<endl;
//     cin>>a>>b>>c;
//     cout<<fun(a,b,c);
//     return 0;
// }
// int fun(int x, int y, int z){
//     int sum=x+y+z;
//    return x+y+z;
// }



// #include<iostream>include
// using namespace std;
// double sum(double x,double y){
// 	cout<<"The sum of the numbers is "<<x+y<<endl;
// }
// double sub(double x,double y){
// 	cout<<"The subtraction of the numbers is "<<x-y<<endl;
// }
// double div(double x,double y){
// 	cout<<"The division of the numbers is "<<x/y<<endl;
// }
// double mult(double x,double y){
// 	cout<<"The multiplication of the numbers is "<<x*y<<endl;
// }
// int main()
// {
// int x,y;
// cout<<"Enter the numbers "<<endl;
// cin>>x>>y;
// sum(x,y);
// sub(x,y);
// div(x,y);
// mult(x,y);
// }




// #include <iostream>
// #include<cmath>
// using namespace std;
// void display();
// void show();
// int main() {
//  //   int x=4;
// //    cout<<sqrt(x)<<endl;
// //    cout <<pow(4,2)<<endl;
//     display();
//     show();
//     return 0;
// }
// void display(){
//     cout<<"Hello world\n";
// }
// void show(){
//     int a;
//     cout<<"Enter a number\n";
//     cin>>a;
//     cout<<pow(a,2)<<endl;
//     cout<<sqrt(a)<<endl;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     int i=20;
//     loop:
//     cout<<i<<" ";
//     i=i-2;
//     if(i>=2)
//     goto loop;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     for(i=1;i<=4;i++)
//         {
//         for(j=1;j<=4;j++)
//             {
//                 if (i%2!=0)
//                 {
//                     if(j%2!=0)
//                    cout<<'#'<<" ";
//                     else
//                     cout<<'*'<<" ";
//                 }
//                 else
//                 {
//                     if(j%2==0)
//                     cout<<'*'<<endl;
//                     else
//                     cout<<'#'<<endl;
//                 }
//             }
// /*            cout<<endl;
// */
//         }
//     return 0;
// }




// #include <iostream>
// int main() {
//     int y=3;
//     std::cout <<y++;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int x, y;
//    cout<<"insert two numbers" <<endl;
//     cin>>x>>y;
//     if(x>y)
//     cout<<"x is greater"<<endl;
//     else if(x<y)
//     cout<<"y is greater"<<endl;
//     else
//     cout<<"They are equal"<<endl;
// }// if else statement L14



// #include<iostream>
// using namespace std;
// int main(int argc, char** argv)
// {
// 	int x=4, y=5, c;
// 	c=x++ + ++y+ ++x +--y;
// 	cout<<c;
// 	return 0;
// }




//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//  	int a,b,c,d,e,f;
//  	a=10,b=15, c=20;
//  	d=a++ +b;
//  	e=++c + a;
//  	f=c+d-e--;
//  	cout<<"a="<<a<<endl;
// //11
//  	cout<<"b="<<b<<endl; //15
//  	cout<<"c="<<c<<endl;
//  //21
//  	cout<<"d="<<d<<endl;
//  //25
//  	cout<<"e="<<e<<endl;
//  //27
//  	cout<<"f="<<f<<endl;
//  //21
//  }




// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout << "Enter three numbers"<<endl;
//     cin>>a>>b>>c;
//     if (a>b)
//     {
//         if (a>c)
//         cout<<"The greatest number is: "<<a;
//         else
//         cout<<"The greatest number is: "<<c;
//     }
//     else
//     {
//         if (b>c)
//         cout<<"The greatest number is: "<<b;
//         else
//         cout<<"The greatest number is: "<<c;
//     }
//     return 0;
// }




// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main()
// {
// 	cout <<"name     \t"<<"id     \t"<<"departement\t"<<"age"<<endl;
// 	cout <<"bereket  \t"<<"1501040\t"<<"computing  \t"<<"19"<<endl;
// 	cout <<"besufekad\t"<<"1501050\t"<<"computing  \t"<<"21"<<endl;
//     cout <<"ermiyas  \t"<<"1501172\t"<<"computin  g\t"<<"20"<<endl;
// 	return 0;		
}



// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=4;i++)
//         {
//         for(j=1;j<i;j++){
//             for(k=1;k<4;k++)
//         }
//             {
//         cout<<j<<" ";
//             }
//     cout<<endl;
//         }
//     return 0;
// }



// //Nested if else L16
// #include <iostream>
// using namespace std;
// int main() {
//     int x,y,z;
//     cout << "Enter three numbers"<<endl;
//     cin>>x>>y>>z;
//     if(x>y)
//     {
//         if(z>x)
//         cout<<"The greatest number is : "<<z<<endl;
//         else if(x>z)
//         cout<<"The greatest number is : "<<x<<endl;
//         else 
//         cout<<"The greatest number is : "<<x<<endl;
//     }
//     else if(y>x)
//     {
//         if(z>y)
//         cout<<"The greatest number is : "<<z<<endl;
//         else if(y>z)
//         cout<<"The greatest number is : "<<y<<endl;
//         else
//         cout<<"The greatest number is : "<<z<<endl;
//     }
//     else
//     cout<<"They are equal";
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     for(i=1;i<=4;i++)
//         {
//         for(j=4;j>=i;j--)
//             {
//         cout<<i<<" ";
//             }
//     cout<<endl;
//         }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter any number"<<endl;
//     cin>>n;
//  int Sum=0; 
//  int i=0; 
//  for( ; ; ) 
//  {
//  if(i<=n)
//  break; 
//  else
//  Sum=Sum+i; 
//  i++; 
//  }
//     return 0;
// }



// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main()
// {
// 	cout <<"name     "<<setw(10)<<"id"    <<setw(20)<<"departement"<<setw(10)<<"age"<<endl;
// 	cout <<"bereket  "<<setw(10)<<"150140"<<setw(20)<<"computing"<<setw(10)<<"19"<<endl;
// 	cout <<"besufekad"<<setw(10)<<"1501050"<<setw(20)<<"computing"<<setw(10)<<"21"<<endl;
//     cout <<"ermiyas  "<<setw(10)<<"1501172"<<setw(20)<<"computing"<<setw(10)<<"20"<<endl;
// 	return 0;	
// }	



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=4, b=2, sum, diff,mult, qotient, rem;  
//     sum=a+b;
//     diff=a-b;
//     mult=a*b;
//     qotient=a/b;
//     rem=a%b;
//     cout<<sum<<endl<<diff<<endl<<mult<<endl<<qotient<<endl<<rem;
//     return 0;
// } 



// #include<iostream>
// int main(){
// 	cout<<sizeof(char);
// cout<<sizeof(double); 
// cout<<sizeof(log double);
// }




// #include <iostream>//ifelse and swich operation
// using namespace std;
// int main() {
//     int x,y;
//     char d;
//     cout<<"Enter two numbers"<<endl;
//     cin>>x>>y;
//     cout<<"Enter the operator"<<endl;
//     cin>>d;
//   switch(d)
//     {
//         case '+':
//         cout << x+y;
//         break;
//         case '-':
//         cout <<x-y;
//         break;
//         case '*':
//         cout <<x*y;
//         break;
//         case '/':
//         cout <<x/y;
//         break;
//         case '%':
//         cout <<x%y;
//         break;
//         default:
//         cout<<"Enter correct operator"; 
//     }
//       /*  if (d=='+')
//         cout << x+y;
//         else if(d=='-')
//         cout <<x-y;
//         else if(d=='*')
//         cout <<x*y;
//        else if(d=='/')
//         cout <<x/y;
//         else if(d=='%') 
//         cout <<x%y;
//         else
//         cout<<"Enter correct operator"; */
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int x=1,y=2,z=3,w=4;
//     cout <<!(x>y)<<endl;
//     cout<<((x<y)||(z>w))<<endl;
//     return 0;
// }


// //overloading
// #include <iostream>
// using namespace std;
// int volume(int x){
// cout<<x*x*x<<endl;}
// double illegal(double r,int h){
// cout<<3.14*r*r*h<<endl;}
// int main() {
//      illegal(3.5,6);
//      volume(8);
//     return 0;
// }


// //parameter passing
// #include<iostream>
// using namespace std;
// // A function with default arguments, it can be called with
// // 2 arguments or 3 arguments or 4 arguments.
// int sum(int x=10,int y=7,int z= 3,int w=2)
// {
// return x+y+z+w;
// }
// int main(){
// cout<<sum()<<endl;
// cout<<sum(10,15)<<endl;
// cout<<sum(10,15,25)<<endl;
// cout<<sum(10,15,25,30)<<endl;
// return 0;
// }




// //parameter passing
// #include<iostream>
// using namespace std;
// // A function with default arguments, it can be called with
// // 2 arguments or 3 arguments or 4 arguments.
// int sum(int x=10,int y=7,int z= 3,int w=2)
// {
// return x+y+z+w;
// }
// int main(){
// cout<<sum()<<endl;
// cout<<sum(10,15)<<endl;
// cout<<sum(10,15,25)<<endl;
// cout<<sum(10,15,25,30)<<endl;
// return 0;
// }



//pointer
// #include <iostream>
// using namespace std;
// int main() {
//     float number;
//     char ch;
//     int x=10;
//     int*a;
//     a=&x;
//  //   cout<<a;
//     *a=50;
//    cout<<x<<endl;
//     cout<<"adress of x is "<<&x<<endl;
//     cout<<"adress of number  is  "<<&number<<endl;
//     cout<<"adress of ch is  "<<&ch<<endl;
//     return 0;
// }
// /*to assign adress of variable
// & reference operator*/




// ///quadratic equation in c++
// #include <iostream>
// using namespace std;
// int main(){
//     float a,b,c,d,x1,x2,x3;
//     cout<<"Enter a"<<endl;
//     cin>>a;
//     cout<<"Enter b"<<endl;
//     cin>>b;
//     cout<<"Enter c"<<endl;
//     cin>>c;
//     d=b*b-4*a*c;
//     x1=(-b+sqrt(d))/2*a;
//     x2=(-b-sqrt(d))/2*a;
//     x3=-b/2*a;
//     if(d > 0)
//     cout<<"The solutions are  "<<x1<<"  and  "<<x2;
//     else if(d==0)
//     cout<<"The solution is"<<x2;
//     else
//     cout<<"The equation has no solution";
//     return 0;
// }


////recursive function
// #include <iostream>
// using namespace std;
// int fun(){
//     int x;
//     if(x==0||x==1)
//     return 1;
//     else
//     return fun()*(x-1);
// }
// int main() {
//     int x;
//     cout << "Enter a number\n";
//     cin>>x;
//     cout<<fun();
//     return 0;
// }



// //pass by reference
// #include <iostream>
// using namespace std;
// void fun(int &x, int y);
// int main() {
//     int a=3,b=4;
//     fun(a,b);
//     cout<<a<<endl;
//     cout<<b<<endl;
//     return 0;
// }
// void fun(int &x, int y){
//     x=x+10;
//     y=y+2;
//     cout<<x<<endl<<y<<endl;
// }




// //pass by reference
// #include <iostream>
// using namespace std;
// void fun();
// int x=5;
// int main() {
// fun();
//     return 0;
// }
// void fun(){
//     int x=10;
//     cout<<::x<<endl;
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=4;i++)
//         {
//             for(k=1;k<=4-i;k++)
//             cout<<" ";
//            for(j=1;j<=i;j++)
//             cout<<'*';
//     cout<<endl;
//         }
//     return 0;
// }


////static variable
// #include <iostream>
// using namespace std;
// void fun();
// int main() {
//     fun();
//     fun();
//     fun();
//     return 0;
// }
// void fun(){
//     static int x=0;
//     x++;
//     cout<<x<<endl;
// }


// //another sample of static variable
// #include <iostream>
// using namespace std;
// void fun();
// int main() {
//     fun();
//     fun();
//     fun();
//     return 0;
// }
// void fun(){
//     static int x=0;
//     x++;
//     cout<<x<<endl;
// }



// //string concatination
// #include <iostream>
// #include<cstring>//for scrpy
// using namespace std;
// int main() {
//    // char str[10]="c++abebe";
//   //  cout<<str;
// //    char str[100];
// //    string str;
//     char name[10]="Hanac";
//     char name2[]="Hanaf";
//     char name1[]="Tadesse";
//    string name3="you";
//  //   int len= strlen(name1);
// //   cout<<"Enter a string: ";
// //   cin.get(str, 100);
// //   getline(cin,str);
// //    cout<<"You entered: "<<str<<endl;
//  //   cout<<name3.size()<<endl;//for stardard stri
// //    cout<<name3.length()<<endl;//for standard stri
// //    cout<<strlen(name);//for c style string 
// //    cout<<strcpy(name,name1)<<endl;
// //    cout<<strcat(name1,name)<<endl;//concatination
//    cout<<strcmp(name,name1)<<endl;
// //    cout<<name<<endl;
// //    cout<<name1<<endl;
// //    cout<<name3<<endl;
// //    cout<<len;
//     return 0;
// }
// //c string demo



// //swaping with third variable
// #include<iostream>
// using namespace std;
// int main()

// {
// int x,y,z;
// cout<<"enter the value of x"<<endl;
// cin>>x;
// cout<<"enter the value of y"<<endl;
// cin>>y;
// z=x;
// x=y;
// y=z;
// cout<<"the value of x is"<<x<<endl;
// cout<<"the value of y is"<<y<<endl;
// return 0;
// }




// //swich
// #include <iostream>
// using namespace std;
// int main() 
// {
//    int d;
//     cout<<"enter a number ";
//     cin>>d;
//     switch(d)
//     {
//         case 1:
//         cout << "monday";
//         break;
//         case 2:
//         cout << "Tuesday";
//         break;
//         case 3:
//         cout << "Wednesday";
//         break;
//         case 4:
//         cout << "Thursday";
//         break;
//         case 5:
//         cout << "Friday";
//         break;
//         default:
//         cout<<"You entered wrong number";
//     }
//     return 0;
// }


// //ternary operation
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cout<<"enter the first number\n";
//     cin>>a;
//     cout<<"enter the second number\n";
//     cin>>b;
//     cout<<((a>b)?a:b);
// //    cout<<(a>b)?3:2;
//     return 0;
// }



////post incremet
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=2, b=4, x, y, z;
//     x=a++;
//     y=b++ + 10;
//     z=++b + 10;
//     a%=2;
//     cout<<((a==2)||(b!=4))<<endl
//         <<x<<endl
//         <<y<<endl
//         <<z<<endl
//         <<a<<endl;
//     return 0;
// }



////pre increment
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=2, b=4, x, y, z;
//     x=++a;
//     y=b++ + 10;
//     z=++b + 10;
//     a %=2;
//     cout<<((a==2)||(b!=4))<<endl
//         <<x<<endl
//         <<y<<endl
//         <<z<<endl
//         <<a<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
// 	for(int i=1;i<=4;i++){
// 		for(int k=1;k<=4-i;k++){
// 			cout<<" ";
// 		}
// 			for(int j=1;j<=i;j++)
		 
// 	cout<<'$';
// cout<<endl;	
// 	}
// 	return 0;
// }



////size of variables
// #include <iostream>
// using namespace std;
// int main() {
//     cout <<sizeof(char)<<endl;
//     cout <<sizeof(float)<<endl;
//     cout <<sizeof(double)<<endl;
//     cout <<sizeof(int)<<endl;
//     cout <<sizeof(unsigned int)<<endl;
//     cout <<sizeof(signed int)<<endl;
//     return 0;
// }



// //how to use
// #include<iostream>
// void main() 
// { 
//  cout<<”\n In main function”; 
//  demoFunction(); 
//  cout<<”\n Back in main function”; 
//  getch(); 
// } 
// void demoFunction() 
// { 
//  cout<<”\n demoFunction”; 
// } 



// //while loop
// #include <iostream>
// using namespace std;
// int main() {
//     int i=15;
//     while(i<=35)
//     {
//         cout<<i<<" ";
//         i+=5;
//     }
//     return 0;
// }//demo for do while loop L20 & L21