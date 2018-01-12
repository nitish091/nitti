#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void f()
{
delay(100);
}
void game(int x)
{
 int a,i;
 randomize();
 for(a=1;a<20;a++)
 {
  delay(100);
  clrscr();
  cout<<"Enter any no: "<<x;
  cout<<endl<<random(5)+1;
 }
 a=random(5); a++;
 if(a==x)
  {
   for(i=0;i<10;i++)
   {
    delay(100);
    clrscr();
    cout<<"Enter any no: "<<x<<endl<<a;
    delay(100);
    cout<<"\nYou Won....:)";
   }
  }
 else
 {
  for(i=0;i<10;i++)
   {
    delay(100);
    clrscr();
    cout<<"Enter any no: "<<x<<endl<<a;
    delay(100);
    cout<<"\nYou Lose....:(";
   }
 }
}
void main()
{
char s;
int n,a;
loop:
clrscr();
cout<<"Enter any no: ";
cin>>n;
game(n);
cout<<"\n";f();cout<<"W";f();cout<<"a";f();cout<<"n";f();cout<<"t";f();cout<<" ";f();cout<<"t";f();cout<<"o";f();cout<<" ";f();cout<<"p";f();cout<<"l";f();cout<<"a";f();cout<<"y";f();cout<<" ";f();cout<<"a";f();cout<<"g";f();cout<<"a";f();cout<<"i";f();cout<<"n";cout<<"<";f();cout<<"Y";f();cout<<"/";f();cout<<"N";f();cout<<">";f();cout<<":";
cin>>s;
if(s=='y'||s=='Y')
 goto loop;
}
