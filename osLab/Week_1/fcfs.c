#include<stdio.h>
void findwaitingtime(int bt[],int wt[],int n){
	int i ;
	wt[0] = 0;
	for(i=1;i<n;i++)
		wt[i] = wt[i-1] + bt[i-1];
}
void findturnaroundtime(int bt[],int wt[],int tat[],int n){
	int i;
	for(i=0;i<n;i++)
		tat[i]= bt[i]+ wt[i];
}
void findcompletetime(int bt[],int ct[],int n){
	int i;
	for(i=0;i<n;i++)
		ct[i] = bt[i] + bt[i+1];
}
void findavgtime(int bt[], int wt[], int tat[], int ct[], int n){
	int i;
	printf("process\t bt\t wt\t tat\t ct\n");
	int tat_wt=0,tat_tat=0;
	for(i=0;i<n;i++){
		printf("p %d\t %d\t %d\t %d\t %d\n",i+1,bt[i],wt[i],tat[i],ct[i]);
		tat_wt += wt[i];
		tat_tat += tat[i];
	}
	float avg_wt = (float)tat_wt/(float)n;
	float avg_tat = (float)tat_tat/(float)n;
	printf("\n average waiting time : %f\n",avg_wt);
	printf("\n average turn around time : %f\n ",avg_tat);
}
int main(){
	int n,wt[n],tat[n];
	printf("enter number of process: ");
	scanf("%d", &n);
	int bt[n], ct[n], i;
	printf("enter burst time of each priocess :\n");
	for(i=0; i<n; i++){
		printf("p %d: ", i+1);
		scanf("%d", &bt[i]); 
	}
	findwaitingtime(bt,wt,n);
	findcompletetime(bt,ct,n);
	findturnaroundtime(bt,wt,tat,n);
	findavgtime(bt,wt,tat,ct,n);	
	return 0;
}
