#include<iostream>
using namespace std;
int binary_decimal(int n)
{
    int ans=0,y,x=1;
    for (n;n>0;n/=10)
    {
        y=n%10;
        ans+=x*y;
        x*=2;
    }
    return ans;
}
int octal_decimal(int n)
{
    int ans=0,y,x=1;
    for (n;n>0;n/=10)
    {
        y=n%10;
        ans+=x*y;
        x*=8;
    }
    return ans;
}
int decimal_binary(int n)
{
    int x=1;
    int ans=0;
    while (x<=n)
    {
        x*=2;
    }
    x/=2;
    while (x>0)
    {
        int last_digit=n/x;
        n-=last_digit*x;
        x/=2;
        ans=ans*10+last_digit;
    }
    return ans;
}
int decimal_octal(int n)
{
    int x=1;
    int ans=0;
    while (x<=n)
    {
        x*=8;
    }
    x/=8;
    while (x>0)
    {
        int last_digit=n/x;
        n-=last_digit*x;
        x/=8;
        ans=ans*10+last_digit;
    }
    return ans;
}
int hexadecimal_decimal(string n)
{
int ans=0,x=1;
int s=n.size();
for (int i=s-1;i>=0;i--)
{
    if (n[i]>='0'&&n[i]<='9')
    {
        ans+=x*(n[i]-'0');
    }
    else if (n[i]>='A'&&n[i]<='F')
    {
        ans+=x*(n[i]-'A'+10);
    };
    x*=16;
}
return ans;
}
string decimal_hexadecimal(int n)
{
  int x=1;
  string ans="";
  while(x<=n)
  x*=16;
  x/=16;
  while (x>0)
  {
      int last_digit=n/x;
      n-=last_digit*x;
      x/=16;
      if (last_digit<=9)
      ans=ans+to_string(last_digit);
      else
      {
          char c='A'+last_digit-10;
          ans.push_back(c);
      }
  }
  return ans;
}

int main()
{
    int n,i;
    string m;
    cout<<"press '1' ----for binary to decimal conversion"<<endl;
    cout<<"press '2' ----for decimal to binary conversion: "<<endl;
    cout<<"press '3' ----for decimal to octal  conversion:"<<endl;
    cout<<"press '4' ----for octal to decimal conversion:"<<endl;
    cout<<"press '5' ----for hexadecimal to decimal conversion:"<<endl;
    cout<<"press '6' ----for decimal no. to hexadecimal conversion:"<<endl;
    cin>>i;
    if (i==1)    
    {cout<<"enter the binary no. for decimal conversion: ";
    cin>>n;
    cout<<binary_decimal(n);}
    else if(i==2)
    {
        cout<<"enter the decimal no. for binary conversion: ";
        cin>>n;
        cout<<decimal_binary(n);
    }
     else if(i==3)
    {
        cout<<"enter the decimal no. for octal conversion: ";
        cin>>n;
        cout<<decimal_octal(n);
    }
     else if(i==4)
    {
        cout<<"enter the octal no. for decimal conversion: ";
        cin>>n;
        cout<<octal_decimal(n);
    }
     else if(i==5)
    {
        cout<<"enter the hexadecimal no. for decimal conversion: ";
        cin>>m;
        cout<<hexadecimal_decimal(m);
    }
     else if(i==6)
    {
        cout<<"enter the decimal no. for hexadecimal conversion: ";
        cin>>n;
        cout<<decimal_hexadecimal(n);
    }
    else 
    {
        cout<<"please --- there is only six option i.e. 1 to 6 for choise:";
    };
    return 0;
}