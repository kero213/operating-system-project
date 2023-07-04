#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

void IFCFS(vector<int> RQ, int head){
    int seek_time = 0;
    vector<int> seek_sequence, sorted_RQ, temp;
      
    for (int i = 0; i < RQ.size(); i++) {
         sorted_RQ.push_back(RQ[i]);
    }
    std::sort(sorted_RQ.begin(), sorted_RQ.end());
    
    while(!RQ.empty()) {
         int request = RQ[0];
         int difference = head - request;
         
         //going outwards
         if (difference<0) {
              for(int f = 0; f < sorted_RQ.size(); f++) {
                   if(sorted_RQ[f]>=head && sorted_RQ[f]<request) {
                        int served = sorted_RQ[f];
                        seek_sequence.push_back(served);
                        temp.push_back(served);
                   }
              }
         }
         //going inwards
         else if (difference>0){
              for(int f = sorted_RQ.size()-1; f >=0; f--) {
                   if(sorted_RQ[f]<=head && sorted_RQ[f]>request) {
                        int served = sorted_RQ[f];
                        seek_sequence.push_back(served);
                        temp.push_back(served);
                   }
              }
         }
         
         seek_sequence.push_back(request);
         head = request;
         seek_time += abs(difference);
         temp.push_back(request);
         
         RQ.erase( remove_if( begin(RQ),end(RQ),
                 [&](auto x){return find(begin(temp),end(temp),x)!=end(temp);}), end(RQ));
                 
         sorted_RQ.erase( remove_if( begin(sorted_RQ),end(sorted_RQ),
                 [&](auto x){return find(begin(temp),end(temp),x)!=end(temp);}), end(sorted_RQ));
    }
   
    cout << "Total seek time = " << seek_time << endl;
    cout << "Track Sequence is " << endl;
    for(int i = 0; i < seek_sequence.size(); i++){
        cout << seek_sequence[i] << "   ";
    }
    cout<<endl<<endl;
}

