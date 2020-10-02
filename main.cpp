#include <iostream>

#include <stdlib.h>
using namespace std;
int Max(int a[])
{
    int max2=-1;
    for(int i =0; i<10; i++)
    {
        if(a[i]>max2)
        {
            max2=a[i];
        }
    }
    cout<<"输出最大值:"<<max2<<endl;
    cout<<"最大值比较次数"<<10<<endl;
}
int Min(int a[])
{
    int min2=21;
    for(int i =0; i<10; i++)
    {
        if(a[i]<min2)
        {
            min2=a[i];
        }
    }
    cout<<"输出最小值:"<<min2<<endl;
    cout<<"最小值比较次数"<<10<<endl;
}
int main()
{
    float avg=0.0;
    int t=10;
    while(t--)
    {
        int a [10]= {0};
        for (int i = 0; i<10; i++)
        {
            a[i]=rand()%20+1;
        }
        cout<<"输出随机数:"<<endl;
        for(int i =0; i<10; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        Max(a);
        Min(a);
    }
    cout<<"平均比较次数"<<10<<endl;
    return 0;
}
