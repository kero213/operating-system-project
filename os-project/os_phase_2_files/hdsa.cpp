#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

int seek_time = 0;
vector<int> seek_sequence;

int HSSTF(vector<int> RQ, int head){
    int SST,index;
    
    for(int i=0; i<RQ.size(); i++){
        index = 0;
        SST = INT_MAX;
 
        for(int j=0; j<RQ.size(); j++){
            if(abs(head - RQ[j]) < SST && abs(head - RQ[j])>=0) {
                index = j;
                SST = abs(head - RQ[j]);
            }
        }
      
        seek_time += SST;
        head = RQ[index];
        seek_sequence.push_back(RQ[index]);
        RQ[index] = INT_MIN;
    }
    return head;
}

void HDSA(vector<int> RQ, int head){
    vector<int> left, right;
    
    for (int i = 0; i < RQ.size(); i++) {
        if (RQ[i] <= head)
            left.push_back(RQ[i]);
        if (RQ[i] > head)
            right.push_back(RQ[i]);
    }
 
    int x = head - *min_element(left.begin(), left.end());
    int y = *max_element(right.begin(), right.end()) - head;  
    
    if (x < y) {
         head = HSSTF(left, head);
         HSSTF(right, head);
    }
    else {
         head = HSSTF(right, head);
         HSSTF(left, head);
    }
    
    cout << "Total seek time = " << seek_time << endl;
    cout << "Track Sequence is " << endl;   
    for(int i = 0; i < RQ.size(); i++){
        cout << seek_sequence[i] << "   ";
    }
    cout<<endl<<endl;
}

