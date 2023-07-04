#ifndef schedulingAlgorithms_h
#define schedulingAlgorithms_h

#include <bits/stdc++.h>
using namespace std;

void FCFS(vector<int> RQ, int head);
void LOOK(vector<int> RQ, int head, string direction);
void SCAN(vector<int> RQ, int head, string direction, int disk_size);
void CLOOK(vector<int> RQ, int head, string direction);
void CSCAN(vector<int> RQ, int head, string direction, int disk_size);
void SSTF(vector<int> RQ, int head);
void HDSA(vector<int> RQ, int head);
void IFCFS(vector<int> RQ, int head);
void SMCC(vector<int> RQ, int head);

#endif
