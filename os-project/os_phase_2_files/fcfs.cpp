#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

void FCFS(vector<int> RQ, int head){
    int seek_time = 0, cur_track;
 
    for (int i = 0; i < RQ.size(); i++) {
        cur_track = RQ[i];
        seek_time += abs(cur_track - head);
        head = cur_track;
    }
 
    cout << "Total seek time = " << seek_time << endl;
    cout << "Track Sequence is " << endl;
    for(int i = 0; i < RQ.size(); i++){
        cout << RQ[i] << "   ";
    }
    cout<<endl<<endl;
}
