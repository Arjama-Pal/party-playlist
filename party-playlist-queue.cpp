#include<iostream>
#include<string.h>
using namespace std;
const int N=100;
int top=-1, stack[100], n=0;
string playlist[100];
string song, artist;
void input()
{
    if(top==N-1)
    {
        cout<<"Playlist full!"<<endl;
    }
    else
    {
        cout<<"Enter song name (use - in place of space for more than 1 word): ";
        cin>>song;
        cout<<"\nEnter artist name (use - in place of space for more than 1 word): ";
        cin>>artist;
        top++;
        n++;
        stack[top]=n;
        playlist[top]=song;
        cout<<"\n\nSong "<<song<<" is added to the queue!"<<endl;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"Playlist empty!"<<endl;
    }
    else
    {
        for(int i=top; i>=0; i--)
        {
            cout<<"Songs in queue: "<<playlist[i]<<endl;
        }
        cout<<endl;
    }
}
void playing()
{
    if (top==-1)
    {
        cout<<"Playlist empty!"<<endl;
    }
    else
    {
        cout<<"Now playing: "<<song<<" by "<<artist<<endl<<endl;
    }
}
int main()
{
    char ch='Y';
    int choice;
    cout<<"\n\nWELCOME TO PARTY PLAYLIST!"<<endl;
    cout<<"\n1. Add a party song to the queue"<<endl;
    cout<<"2. Show the currently playing song"<<endl;
    cout<<"3. Display Party playlist"<<endl;
    while (ch=='Y'|| ch=='y')
    {
        cout<<"Enter your choice (1/2/3): ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1: input();
                    break;
            case 2: playing();
                    break;
            case 3: display();
                    break;
        }
        cout<<"\nMore choice? (y/n): ";
        cin>>ch;
        cout<<endl;
    }
    return 0;
}
