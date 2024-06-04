//#include <iomanip>
//#include <iostream>
//using namespace std;
//int c = 45;
//int main() {

  // cout<<("hello c")<<endl;
/* int a, b, c;
   cout<<("enter the value of a");
  cin>>a;
  cout<<("enter the value of b");
  cin>>b;
  c=a+b;
  cout<<("the value of c is:\n")<<c;
  cout<<("the global value of c is:\n")<<::c;*/

  /*cout<<"the size of the value is"<<sizeof(34.4)<<endl;
   cout<<"the size of the value is"<<sizeof(34.4l)<<endl;
   cout<<"the size of the value is"<<sizeof(34.4L)<<endl;
   cout<<"the size of the value is"<<sizeof(34.4f)<<endl;
   cout<<"the size of the value is"<<sizeof(34.4F)<<endl;*/

  /* float x=455;
   float & y=x;
   cout<<x<<endl;
   cout<<y<<endl;*/

  /* const int a=6;
   cout<<a;
   a=5;*/

  // int a=1, b=12, c=123, d= 1234, e = 12345;
  /*cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
  cout<<e<<endl;*/

  /*  cout<<setw(5)<<a<<endl;
    cout<<setw(5)<<b<<endl;
    cout<<setw(5)<<c<<endl;
    cout<<setw(5)<<d<<endl;
    cout<<setw(5)<<e<<endl;*/
  /*int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch(age)
      {
        case 18:
        cout<<"you are 18 yrs old"<<endl;
        break;
        case 21:
        cout<<"you are 21 yrs old"<<endl;
        break;
        case 1:
        cout<<"you are 1 yrs old"<<endl;
        break;
        default:
        cout<<"no special cases"<<endl;
      }*/
  // for(int i=0; i<=5; i++)
  //  {
  //    cout<<i<<endl;
  //  }
  //  int i=1,j=6;
  // do{
  // cout<<"6*1="<<j*i<<endl;
  // i++;
  //}
  // while(i<=10);

  /* for (int i =1; i<=5; i++)
     {
       cout<<i<<endl;
       if(i==3)
       {
         break;
       }

     }*/
  /* for(int i=1; i<=5; i++)
     {
       if(i==3)
       {
         continue;
       }
        cout<<i<<endl;
     }*/
  /*int a=3;
  int* b= &a;
  cout<<b<<endl;
  cout<<&a<<endl;

  cout<<*b<<endl;*/
/* int marks[4] = {45, 50, 60, 90};
  int mathmarks[4];
  mathmarks[0]=100;
    mathmarks[1]=200;
    mathmarks[2]=300;
    mathmarks[3]=400;
  cout<<mathmarks[0]<<endl;
  cout<<mathmarks[1]<<endl;
  cout<<mathmarks[2]<<endl;
  cout<<mathmarks[3]<<endl;
  
  cout<<marks[0]<<endl;
  cout<<marks[1]<<endl;
  cout<<marks[2]<<endl;
  cout<<marks[3]<<endl;
  int* p= marks;
  cout<<"the value of marks[0] is"<<*p<<endl;
  cout<<"the value of marks[0] is"<<*p+1<<endl;
  cout<<"the value of marks[0] is"<<*p+2<<endl;
  cout<<"the value of marks[0] is"<<*p+3<<endl;
  */






// #include<iostream>
// using namespace std;

/* struct employee
{
  int eId;
  char favchar;
  float sallery;
};*/




/* typedef struct employee
{
  int eId;
  char favchar;
  float sallery;
}us;




int main()
{*/





/*struct employee utsab;
  utsab.eId = 1;
  utsab.favchar = 'U';
  utsab.sallery = 1000000;
  cout<<utsab.eId<<endl;
  cout<<utsab.favchar<<endl;
  cout<<utsab.sallery<<endl;*/

  /* us utsab;
  utsab.eId = 1;
  utsab.favchar = 'U';
  utsab.sallery = 1000000;
  cout<<utsab.eId<<endl;
  cout<<utsab.favchar<<endl;
  cout<<utsab.sallery<<endl;
*/





  /* union utsab;
  {
    int rice;
    char car;
    float sall;
 }
*/





  /* enum Meal{Breakfast, lunch, dinner};
  {
    cout<<Breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
  }

  return 0;
} */




/* #include<iostream>
using namespace std;
int sum(int a, int b)
{
  int c = a+b;
  return c;
}

int main()
{
  int num1, num2;
  cout<<("enter the first value")<<endl;
  cin>>num1;
  cout<<("enter the secomd value")<<endl;
  cin>>num2;
  cout<<("the sum is")<<sum(num1, num2)<<endl;
  return 0;
}
*/ 


//**********Function Prototype********

/* #include<iostream>
using namespace std;

int sum(int a, int b);

int main()
{
  int num1, num2;
  cout<<("enter the first value")<<endl;
  cin>>num1;
  cout<<("enter the secomd value")<<endl;
  cin>>num2;
  cout<<("the sum is")<<sum(num1, num2)<<endl;
  return 0;
}
  int sum(int a, int b)
  {
    int c = a+b;
    return c;
  }
*/



// *********call by reference********
/*

#include<iostream>
using namespace std;
int swap(int* a, int* b);

int main()
{
  int x = 4, y = 5;
  cout<<("original number of x was\t")<<x<<("\toriginal number of y was")<<y<<endl;
  swap(x,y);
  cout<<("after swapping value of x is\t")<<x<<("\tafter swapping value of y is")<<y<<endl;

  return 0;
  
}

int swap(int* a, int* b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;

  return temp;
}
*/






// using reference variable

/*#include<iostream>
using namespace std;
int & swap(int &a, int &b);

int main()
{
  int x = 4, y = 5;
  cout<<("original number of x was\t")<<x<<("\toriginal number of y was")<<y<<endl;
  swap(x,y);
  cout<<("after swapping value of x is\t")<<x<<("\tafter swapping value of y is")<<y<<endl;

  return 0;

}

int & swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  return a;
}*/



//************inline function*********

/*#include<iostream>
using namespace std;

inline int product(int a, int b)
{
  return a*b;
}
int main()
{
  int a,b;
  cout<<("enter the value")<<endl;
  cin>>a>>b;
  cout<<product(a, b)<<endl;
  cout<<product(a, b)<<endl;
  cout<<product(a, b)<<endl;
  cout<<product(a, b)<<endl;
  cout<<product(a, b)<<endl;
  cout<<product(a, b)<<endl;
}*/ 


//*******deafult arguments*******

//************inline function*********

/* #include<iostream>
using namespace std;

 float product(int money, float factor = 1.04)
{
  return money * factor;
}
int main()
{
  int money = 100000;

  cout<<("normally")<<product(money)<<endl;
  cout<<("for vips")<<product(money, 1.10)<<endl;
return 0;
}*/





//**********factorial***********

/* #include<iostream>
using namespace std;

int fact(int n)
{
  if(n<=1)
  {
    return 1;
  }
  return n * fact(n-1);
}
int main()
{
  int a;
  cout<<("enter the value")<<endl;
  cin>>a;
  cout<<fact(a)<<endl;
  return 0;
}
*/