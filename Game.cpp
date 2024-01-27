#include<bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
	random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<> distr(0,100);
    srand((unsigned) time(NULL));
    int a=rand() % 100 + 1;
    int flag=0;
    cout<<"You Can guess 5 times only"<<endl;
    for(int i=0;i<5;i++)
    {
        if(i==4)
            cout<<"This is your last chance"<<endl;
        int b;
        cout<<"Guess a number from 0 to 100 - ";
        cin>>b;
        if(a==b)
        {
            cout<<"Congratulations you won the game"<<endl;
            flag=1;
            break;
        }
        else if(a>b)
            cout<<"Too Low"<<endl;
        else
            cout<<"Too High"<<endl;
    }
    if(flag==0)
    {
        cout<<"Sorry please try your luck next time"<<endl;
        cout<<"The correct number is "<<a<<endl;
    }
}
