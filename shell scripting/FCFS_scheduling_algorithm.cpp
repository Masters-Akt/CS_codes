//Kumar Ankit
//FCFS Scheduling Algorithm
#include<iostream>
using namespace std;

void find_waiting_time(int processes[], int n, int cpu_burst_time[], int waiting_time[]){
    waiting_time[0] = 0;
    for(int i=1;i<n;i++){
        waiting_time[i] = cpu_burst_time[i-1] + waiting_time[i-1];
    }
}

void find_turn_around_time(int processes[], int n, int cpu_burst_time[], int waiting_time[], int turn_around_time[]){
    for(int i=0;i<n;i++){
        turn_around_time[i] = cpu_burst_time[i] + waiting_time[i];
    }
}

void avg_waiting_time(int processes[], int n, int cpu_burst_time[]){
    int waiting_time[n], turn_around_time[n], total_waiting_time=0, total_turn_around_time=0;
    find_waiting_time(processes, n, cpu_burst_time, waiting_time);
    find_turn_around_time(processes, n, cpu_burst_time, waiting_time, turn_around_time);
    cout<<"Processes   CPU Burst Time   Waiting Time   Turn Around Time\n";
    for(int i=0;i<n;i++){
        total_waiting_time += waiting_time[i];
        total_turn_around_time += turn_around_time[i];
        cout<<"P"<<i+1<<"\t\t"<<cpu_burst_time[i]<<"\t\t"<<waiting_time[i]<<"\t\t"<<turn_around_time[i]<<"\n";
    }
    cout<<"Average Waiting Time of All Processes = "<<(float)total_waiting_time/(float)n<<"\n";
    cout<<"Average Turn Around Time of All Processes = "<<(float)total_turn_around_time/(float)n<<"\n";
}

int main(){
    int n;
    cout<<"Enter number of processes : ";
    cin>>n;
    int processes[n];
    for(int i=1;i<=n;i++) processes[i-1]=i;
    cout<<"Enter CPU burst-time for each process : \n";
    int cpu_burst_time[n];
    for(int i=0;i<n;i++){
        cout<<"Process "<<i+1<<": ";
        cin>>cpu_burst_time[i];
    }
    avg_waiting_time(processes, n, cpu_burst_time);
    return 0;
}