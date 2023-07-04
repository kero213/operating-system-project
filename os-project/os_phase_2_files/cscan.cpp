#include <bits/stdc++.h>
#include "schedulingAlgorithms.h"
using namespace std;

void CSCAN(vector<int> RQ, int head, string direction, int disk_size){
    RQ.push_back(0);
    RQ.push_back(disk_size - 1);
        
    CLOOK(RQ, head, direction);
}

