#include <iostream> //

using namespace std;
// program to find max and min in the array //

int max_array(int num[],int n)
{
     int Max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(num[i]>Max)
            Max=num[i];
    }
    return Max;
}
int min_array(int num[],int n)
{
     int Min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(num[i]<Min)
            Min=num[i];
    }
    return Min;
}
int sum_array(int num[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=num[i];
    }
    return sum;
}
int main()
{
    int Size;
    cin>>Size;

    int num[100];

    for(int i;i<Size;i++)

    {
        cin>>num[i];
    }
    cout<<"max value in the array is: "<<max_array(num,Size)<<endl;
    cout<<"min value in the array is: "<<min_array(num,Size)<<endl;
    cout<<"sum of elements in the array is"<<sum_array(num,Size)<<endl;

}
