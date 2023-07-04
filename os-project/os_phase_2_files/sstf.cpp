#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

void SSTF(vector<int> RQ, int head){
    int seek_time =0,SST,index,seek_sequence[RQ.size()];
    
    for(int i=0; i<RQ.size(); i++){
        index = 0;
        SST = INT_MAX;
 
        for(int j=0; j<RQ.size(); j++){
            if(abs(head - RQ[j]) < SST) {
                index = j;
                SST = abs(head - RQ[j]);
            }
        }
      
        seek_time += SST;
        head = RQ[index];
        seek_sequence[i] = RQ[index];
        RQ[index] = INT_MIN;
    }
    
    cout << "Total seek time = " << seek_time << endl;
    cout << "Track Sequence is " << endl;   
    for(int i = 0; i < RQ.size(); i++){
        cout << seek_sequence[i] << "   ";
    }
    cout<<endl<<endl;
}
