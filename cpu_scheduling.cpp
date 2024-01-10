#include<iostream>
using namespace std;


void fcfs()
{
    int n, bt[n], gc[n], wt[n], tat[n], ft[n];

    cout<<"Enter the no of processes : ";
    cin>>n;
    cout<<endl;

    cout<<"Enter the Arrival time for each Proc: "<<endl;

    for(int i = 0; i < n; ++i){
        cin>>bt[i];
    }

    gc[0] = wt[0] = 0;
    for(int i = 1; i < n; ++i)
    {
        gc[i-1] = bt[i];
        wt[i] = bt[i-1];
    }

    for(int i = 0; i < n; ++i){
        cout<<bt[i]<<" ";
    }
}

int main()
{

    fcfs();
    return 0;
}