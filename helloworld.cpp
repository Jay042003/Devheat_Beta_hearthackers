#include<iostream>
using namespace std;

void swap(int *a,int *b);

int main() {
    cout<<"hello world"<<endl;
    cout<<"jay"<<endl;

    int a =1, b=6;

    swap(&a,&b);
    cout<<a<<endl<<b<<endl;

}

void swap(int *a,int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b; 
}