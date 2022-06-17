#include<iostream>
using namespace std;

void swap(int *a,int *b);

int main() {
<<<<<<< HEAD
    cout<<"hello world";
    cout<<"himanshu";
=======
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
>>>>>>> 01501de19954b8686d76e4e5968093077a882386
}