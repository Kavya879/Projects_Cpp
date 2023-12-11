#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    luffy:
    cout<<"Welcome to rock paper and scissors"<<endl;
    int n;
    cout<<"Enter Number Of Points"<<endl;
    cin>>n;
    
    int play=0,comp=0;
    int p,c;
    cout<<"Instructions - rock=1 paper=2 scissors=3"<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cout<<"Enter Your Input"<<endl;
        king:
        cin>>p;
        if(p>3 || p<1)
    {
        cout<<"Invalid Input Entered  , Kindly Enter Again"<<endl;
        goto king;
    }
        if(p==1)
        {
            cout<<"Your Input - Rock"<<endl;
        }
        else if(p==2)
        {
            cout<<"Your Input - Paper"<<endl;
        }
        else if(p==3)
        {
            cout<<"Your Input - Scissors"<<endl;
        }
        c=rand()%3+1;
        if(c==1)
        {
            cout<<"Computer's Output - Rock"<<endl;
        }
        else if(c==2)
        {
            cout<<"Computer's Output - Paper"<<endl;
        }
        else if(c==3)
        {
            cout<<"Computer's Output - Scissors"<<endl;
        }
        if(p==c)
        {
            cout<<"Your Current Score:"<<play<<endl;
        }
        else if(p==1 && c==3 || p==2 && c==1 || p==3 && c==2)
        {
            play++;
            continue;
            cout<<"Your Current Score:"<<play<<endl;
        }
        else if(c==1 && p==3 || c==2 && p==1 || c==3 && p==2)
        {
            comp++;
            cout<<"Your Current Score:"<<play<<endl;
            continue;
        }
        else
        {
            cout<<"Your Current Score:"<<play<<endl;
            continue;
        }
    }
    cout<<"Your score is:"<<play<<endl;
    cout<<"Computer score is:"<<comp<<endl;
    if(play>comp)
    {
        cout<<"You win"<<endl;
    }
    else if(comp>play)
    {
        cout<<"Computer Wins"<<endl;
    }
    else if(comp==play)
    {
        cout<<" Tie"<<endl;
    }
    cout<<"Do you want to play again , Enter 1-YES 2-NO"<<endl;
    int i;
    cin>>i;
    if(i==1)
    {
        goto luffy;
        
    }
    else{
    cout<<"Thank You For Playing"<<endl;
    }
      return 0;
}
