#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

void SCAN(vector<int> RQ, int head, string direction, int disk_size){
    if (direction == "inwards")
        RQ.push_back(0);
    else if (direction == "outwards")
        RQ.push_back(disk_size - 1);
        
    LOOK(RQ, head, direction); 
}


