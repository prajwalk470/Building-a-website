#include <iostream>

using namespace std;

void swap_alter(int num[],int siz)
{
    int i=0;
    while(i<siz)
    {
        for(int j=0;j<i+1;j++)
        {
            int temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
        }
        i=i+2;
    }
}

int main()
{
   int siz;
   cin>>siz;

   int num[50];

   for(int i=0;i<siz;i++)
   {
       cin>>num[i];
   }
  /* swap_alter(num,siz);
   for(int i=0;i<siz;i++)
   {
       cout<<num[i];
   }*/
for(int i=0;i<siz;i+=2)
   {
       if((i+1)<siz)
       {
           swap(num[i],num[i+1]);
       }
   }
   for(int i=0;i<siz;i++)
   {
       cout<<num[i];
   }
    return 0;
}

