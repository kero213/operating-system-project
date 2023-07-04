#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

int disk_size = 200;

int main(int argc, char** argv){
     //101,67,50,95,160,159,152,16,102,23
     //52, 141,35,153,53,57,109,185,80,115
    vector<int> arr = {101, 67, 50, 95, 160, 159, 152, 16, 102, 23};
    string direction = "outwards";
    int head = atoi(argv[1]);
        
    srand(time(NULL));
    /*for(int i=0; i<10; i++){
        int random = rand()%disk_size;
        arr.push_back(random);
    }*/
    
    cout<< "----------FCFS----------"<<endl;
    FCFS(arr, head); 
    
    cout<< "----------SCAN----------"<<endl;
    SCAN(arr, head, direction, disk_size);
    
    cout<< "----------CSCAN----------"<<endl;
    CSCAN(arr, head, direction, disk_size);
    
    cout<< "----------LOOK----------"<<endl;
    LOOK(arr, head, direction);
    
    cout<< "----------CLOOK----------"<<endl;
    CLOOK(arr, head, direction);
    
    cout<< "----------IFCFS----------"<<endl;
    IFCFS(arr, head); 
    
    cout<< "----------SMCC----------"<<endl;
    SMCC(arr, head); 
    
    cout<< "----------HDSA----------"<<endl;
    HDSA(arr, head); 
    
    cout<< "----------SSTF----------"<<endl;
    SSTF(arr, head);
    
    return 0;
}
