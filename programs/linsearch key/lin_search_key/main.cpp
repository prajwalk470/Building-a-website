#include <iostream>

using namespace std;
void swap_(int st,int en,int num[],int siz)
{
    st=0;
    en=siz-1;
    for(int i=0;i<siz;i++)
    {
        if(st>=en)
        {
            int temp=num[i];
            num[i]=num[siz-i-1];
            num[siz-i-1]=temp;
        }
        st++;
        en--;
}
for(int i=0;i<siz;i++)
{
cout<<" "<<num[i];
}}
int main()
{ int num[100];  int siz;
    int st=num[0];
    int en=num[siz-1];

    cin>>siz;


    for(int i;i<siz;i++)
    {
        cin>>num[i];
    }
swap_(st,en,num,siz);
    return 0;
}
