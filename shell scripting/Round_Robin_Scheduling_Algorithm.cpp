//Kumar Ankit
#include<iostream>
using namespace std;

void find_waiting_time(int processes[], int n, int cpu_burst_time[], int waiting_time[], int quantum){
    int remaining_burst_time[n];
    for(int i=0;i<n;i++){
        remaining_burst_time[i] = cpu_burst_time[i];
    }
    int current_time = 0;
    while(1){ 
        bool done = true; 
        for(int i=0; i<n; i++){ 
            if(remaining_burst_time[i] > 0){ 
                done = false; 
                if(remaining_burst_time[i] > quantum){ 
                    current_time += quantum; 
                    remaining_burst_time[i] -= quantum; 
                }else{ 
                    current_time += remaining_burst_time[i]; 
                    waiting_time[i] = current_time - cpu_burst_time[i]; 
                    remaining_burst_time[i] = 0; 
                } 
            } 
        }
        if(done) break; 
    } 
}

void find_turn_around_time(int processes[], int n, int cpu_burst_time[], int waiting_time[], int turn_around_time[]){ 
    for(int i=0; i<n; i++){
        turn_around_time[i] = cpu_burst_time[i] + waiting_time[i];
    } 
} 

void find_average_time(int processes[], int n, int cpu_burst_time[], int quantum){ 
    int waiting_time[n], turn_around_time[n], total_waiting_time = 0, total_turn_around_time = 0;
    find_waiting_time(processes, n, cpu_burst_time, waiting_time, quantum); 
    find_turn_around_time(processes, n, cpu_burst_time, waiting_time, turn_around_time);
    cout<<"Processes "<<" Burst time "<<" Waiting time "<<" Turn around time\n";  
    for(int i=0; i<n; i++){ 
        total_waiting_time += waiting_time[i]; 
        total_turn_around_time += turn_around_time[i]; 
        cout<<" "<<i+1<<"\t\t"<<cpu_burst_time[i]<<"\t"<<waiting_time[i]<<"\t\t"<<turn_around_time[i]<<"\n"; 
    }  
    cout<<"Average waiting time = "<<(float)total_waiting_time/(float)n; 
    cout<<"\nAverage turn around time = "<<(float)total_turn_around_time/(float)n; 
}

int main(){
    int n;
    cout<<"Enter number of processes : ";
    cin>>n;
    int processes[n];
    int cpu_burst_time[n];
    for(int i=0;i<n;i++){
        cout<<"For Process "<<i+1<<":\n";
        cout<<"Enter Process ID : ";
        cin>>processes[i];
        cout<<"Enter burst time : ";
        cin>>cpu_burst_time[i];
    }
    int quantum;
    cout<<"Enter quantum time : ";
    cin>>quantum;
    find_average_time(processes, n, cpu_burst_time, quantum);
    return 0;
}