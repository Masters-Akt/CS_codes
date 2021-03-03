#include<iostream>
using namespace std;

struct Process{
    int process_id;
    int cpu_burst_time;
    int arrival_time;
};

void find_waiting_time(Process proc[], int n, int waiting_time[]){
    int remaining_time[n];
    for(int i=0;i<n;i++){
        remaining_time[i] = proc[i].cpu_burst_time;
    }
    int complete = 0, t = 0, minm = INT_MAX, shortest = 0, finish_time;
    bool check = false;
    while(complete!=n){
        for(int i=0; i<n;i++){
            if((proc[i].arrival_time<=t) && (remaining_time[i]<minm) && (remaining_time[i]>0)){
                minm = remaining_time[i];
                shortest = i;
                check = true;
            }
        }
        if(!check){
            t++;
            continue;
        }
        remaining_time[shortest]--;
        minm = remaining_time[shortest];
        if(minm == 0) minm = INT_MAX;
        if(remaining_time[shortest]==0){
            complete++;
            check = false;
            finish_time = t+1;
            waiting_time[shortest] = finish_time - proc[shortest].cpu_burst_time - proc[shortest].arrival_time;
            if(waiting_time[shortest] < 0) waiting_time[shortest] = 0;
        }
        t++;
    }
}

void find_turn_around_time(Process proc[], int n, int waiting_time[], int turn_around_time[]){
    for(int i=0;i<n;i++){
        turn_around_time[i] = proc[i].cpu_burst_time + waiting_time[i];
    }
}

void find_average_time(Process proc[], int n){
    int waiting_time[n], turn_around_time[n], total_waiting_time = 0, total_turn_around_time = 0;
    find_waiting_time(proc, n, waiting_time);
    find_turn_around_time(proc, n, waiting_time, turn_around_time);
    cout<< "Processes "<<" Burst time "<<" Waiting time "<<" Turn around time\n";
    for(int i=0; i<n; i++){ 
        total_waiting_time += waiting_time[i]; 
        total_turn_around_time += turn_around_time[i]; 
        cout<<" "<<proc[i].process_id<<"\t\t"<<proc[i].cpu_burst_time<<"\t\t"<<waiting_time[i]<<"\t\t"<<turn_around_time[i]<<"\n"; 
    } 
    cout<<"\nAverage waiting time = "<<(float)total_waiting_time/(float)n; 
    cout<<"\nAverage turn around time = "<<(float)total_turn_around_time/(float)n;  
}

int main(){
    int n;
    cout<<"Enter number of processes : ";
    cin>>n;
    Process proc[n];
    for(int i=1;i<=n;i++){
        cout<<"For Process "<<i<<":\n";
        cout<<"Enter Process ID : ";
        cin>>proc[i-1].process_id;
        cout<<"Enter CPU burst time : ";
        cin>>proc[i-1].cpu_burst_time;
        cout<<"Enter arrival time : ";
        cin>>proc[i-1].arrival_time;
    }
    find_average_time(proc, n);
    return 0;
}