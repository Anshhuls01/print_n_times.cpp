#include<iostream>
using namespace std;
void print_name(int n)
{
    if(n==0)return;
    cout<<"anything you want man you can "<<endl;
    n--;
    print_name(n);
}
int main()
{
    int n;
    cin>>n;
    print_name(n);
    return 0;
}