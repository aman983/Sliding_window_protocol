#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
#include<cstdlib>

// For linux systems
#include<unistd.h>

//for windows systems
//#include<windows.h>


using namespace std;

int main(){
	int f;
	int t;
	int r;
	cout<<"Enter the number of  frames to send"<<endl;
	cin>>f;
	cout<<"Enter the Time out "<<endl;
	cin>>t;
	
	for (int i = 1; i<=f; i++){
		
		srand(time(0));
		r = rand()%f +1;
		
		cout<<"Sending frame"<<i<<endl;
		sleep(1);
		
	} 
   for (int j = 1; j<=f ; j++){
        
		srand(time(0));
        r = rand()%f +1;
        if (r<=t){
        	cout<<"Aknowledgement recived for "<<j<<" Frame"<<endl;
		}
        else{
        	cout<<"Aknowledgement not recived for " <<j<<" Frame"<<endl;
			sleep(1);
			cout<<"Sending frame "<<j<<endl;
			do{
				srand(time(0));
                r = rand()%f +1;
				
				int c = c+1;
				cout<<"sending frame j for "<<c<<endl;
			} 
			 while(r>=t);
		}
	}
}

