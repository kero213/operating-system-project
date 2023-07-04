output: main.o fcfs.o sstf.o scan.o cscan.o look.o clook.o smcc.o hdsa.o ifcfs.o 
	g++ -o output main.o fcfs.o sstf.o scan.o cscan.o look.o clook.o smcc.o hdsa.o ifcfs.o 

main.o: main.cpp schedulingAlgorithms.h
	g++ -c main.cpp
	
fcfs.o: fcfs.cpp schedulingAlgorithms.h
	g++ -c fcfs.cpp
		
sstf.o: sstf.cpp schedulingAlgorithms.h
	g++ -c sstf.cpp
	
scan.o: scan.cpp schedulingAlgorithms.h
	g++ -c scan.cpp
	
cscan.o: cscan.cpp schedulingAlgorithms.h
	g++ -c cscan.cpp
	
look.o: look.cpp schedulingAlgorithms.h
	g++ -c look.cpp		

clook.o: clook.cpp schedulingAlgorithms.h
	g++ -c clook.cpp
			
smcc.o: smcc.cpp schedulingAlgorithms.h
	g++ -c smcc.cpp
	
hdsa.o: hdsa.cpp schedulingAlgorithms.h
	g++ -c hdsa.cpp
	
ifcfs.o: ifcfs.cpp schedulingAlgorithms.h
	g++ -c ifcfs.cpp
				

clean:
	rm -f *.o output
