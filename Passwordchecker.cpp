#include<bits/stdc++.h>
using namespace std;

int main()
{
      string s1;
      cout<<"Enter a Password: ";
      getline(cin,s1);
      
      int len = s1.size();
      int spcl_char = 0, one_num=0,lowercase = 0,uppercase=0;

      for (int i = 0; i <len; i++)
      {    
            if(s1[i]>=97 && s1[i]<=122)        { lowercase=1;}
            else if(s1[i]>=65 && s1[i]<=90)    { uppercase=1;}
            else if(s1[i]>=48 && s1[i]<=57)    {one_num=1;}
            else if((s1[i]>=33 && s1[i]<=47) || (s1[i]>=58 && s1[i]<=64))  { spcl_char=1;}
      }
      

      if(len>=8 && spcl_char==1 && one_num==1 && lowercase==1 && uppercase==1)
      { 
          cout<<"Strong password";
      }
      else if(len<8 && len>4)
      {
          cout<<"Weak Password";
      }
      else
      {    
          cout<<"Input another Password \n Password must be of: \n 1.Atleast 8 characters \n 2.Atleast one Special character \n 3.Atleast one number \n 4.Atleast one Upper and Lower case character";
      }


return 0;
}