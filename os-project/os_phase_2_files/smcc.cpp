#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

void SMCC(vector<int> RQ, int head){
    int seek_time = 0;
    vector<int> seek_sequence;
    
    std::sort(RQ.begin(), RQ.end());
    
    int MPR = RQ[RQ.size() / 2];
    
    if (head < MPR) {
       for (int i = 0; i< RQ.size(); i++){
               seek_sequence.push_back(RQ[i]);   
       }
       seek_time = abs(head - RQ[0]) + abs(RQ[RQ.size()-1] - RQ[0]);
    }
    else if (head > MPR) {
       for (int i = RQ.size()-1; i>=0; i--){
               seek_sequence.push_back(RQ[i]);
       } 
       seek_time = abs(head - RQ[RQ.size()-1]) + abs(RQ[RQ.size()-1] - RQ[0]);
    }
    
    cout << "Total seek time = " << seek_time << endl;
    cout << "Track Sequence is " << endl;   
    for(int i = 0; i < RQ.size(); i++){
        cout << seek_sequence[i] << "   ";
    }
    cout<<endl<<endl;     
}

