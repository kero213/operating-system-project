#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

void CLOOK(vector<int> RQ, int head, string direction){
    int seek_time = 0, cur_track;
    vector<int> left, right, seek_sequence;
    
    for (int i = 0; i < RQ.size(); i++) {
        if (RQ[i] <= head)
            left.push_back(RQ[i]);
        if (RQ[i] > head)
            right.push_back(RQ[i]);
    }
 
    std::sort(left.begin(), left.end());
    std::sort(right.begin(), right.end());
    
    for (int run=0; run<2; run++) {
        if (direction == "inwards") {
            for (int i = 0; i < left.size(); i++) {
                cur_track = left[i];          
                seek_sequence.push_back(cur_track);
                seek_time += abs(cur_track - head);
                head = cur_track;
            }
            direction = "outwards";
        }
        else if (direction == "outwards") {
            for (int i = 0; i < right.size(); i++) {
                cur_track = right[i];
                seek_sequence.push_back(cur_track);
                seek_time += abs(cur_track - head);
                head = cur_track;
            }
            direction = "inwards";
        }
    }
 
    cout << "Total seek time = " << seek_time << endl;
    cout << "Track Sequence is " << endl;    
    for(int i = 0; i < seek_sequence.size(); i++){
        cout << seek_sequence[i] << "   ";
    }
    cout<<endl<<endl;
}

