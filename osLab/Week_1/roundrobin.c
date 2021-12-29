// #include<stdio.h>
// int main(){
//       int i,limit,total=0,x,counter=0,time_quantum;
//       int wait_time=0,turnaround_time=0,arrival_time[10],burst_time[10],temp[10];
//       float average_wait_time, average_turnaround_time;
//       printf("Enter Total Number of Processes : ");
//       scanf("%d",&limit);
//       x = limit;
//       for(i=0;i<limit;i++){
//             printf("Enter Details of Process[%d]", i + 1);
//             printf("Arrival Time: ");
//             scanf("%d", &arrival_time[i]);
//             printf("Burst Time:");
//             scanf("%d", &burst_time[i]);
//             temp[i] = burst_time[i];
//       }
//       printf("Enter Time Quantum:");
//       scanf("%d", &time_quantum);
//       printf("Process ID Burst Time Turnaround Timet Waiting Time");
//       for(total=0,i=0;x!=0;){
//             if(temp[i] <= time_quantum && temp[i] > 0){
//                   total = total + temp[i];
//                   temp[i] = 0;
//                   counter = 1;
//             }
//             else if(temp[i] > 0){
//                   temp[i] = temp[i] - time_quantum;
//                   total = total + time_quantum;
//             }
//             if(temp[i] == 0 && counter == 1){
//                   x--;
//                   printf("Process[%d]%d %d %d", i + 1, burst_time[i], total - arrival_time[i], total - arrival_time[i] - burst_time[i]);
//                   wait_time = wait_time + total - arrival_time[i] - burst_time[i];
//                   turnaround_time = turnaround_time + total - arrival_time[i];
//                   counter = 0;
//             }
//             if(i == limit - 1)
//                   i = 0;
//             else if(arrival_time[i + 1] <= total)
//                   i++;
//             else
//                   i = 0;
//       }
//       average_wait_time = wait_time * 1.0 / limit;
//       average_turnaround_time = turnaround_time * 1.0 / limit;
//       printf("Average Waiting Time:t%f\n",average_wait_time);
//       printf("Avg Turnaround Time:t%f\n",average_turnaround_time);
//       return 0;
// }
#include <stdio.h>

void main()
{
      // initlialize the variable name
      int i, NOP, sum = 0, count = 0, y, quant, wt = 0, tat = 0, at[10], bt[10], temp[10];
      float avg_wt, avg_tat;
      printf(" Total number of process in the system: ");
      scanf("%d", &NOP);
      y = NOP; // Assign the number of process to variable y

      // Use for loop to enter the details of the process like Arrival time and the Burst Time
      for (i = 0; i < NOP; i++)
      {
            printf("\n Enter the Arrival and Burst time of the Process[%d]\n", i + 1);
            printf(" Arrival time is: \t"); // Accept arrival time
            scanf("%d", &at[i]);
            printf(" \nBurst time is: \t"); // Accept the Burst time
            scanf("%d", &bt[i]);
            temp[i] = bt[i]; // store the burst time in temp array
      }
      // Accept the Time qunat
      printf("Enter the Time Quantum for the process: \t");
      scanf("%d", &quant);
      // Display the process No, burst time, Turn Around Time and the waiting time
      printf("\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time ");
      for (sum = 0, i = 0; y != 0;)
      {
            if (temp[i] <= quant && temp[i] > 0) // define the conditions
            {
                  sum = sum + temp[i];
                  temp[i] = 0;
                  count = 1;
            }
            else if (temp[i] > 0)
            {
                  temp[i] = temp[i] - quant;
                  sum = sum + quant;
            }
            if (temp[i] == 0 && count == 1)
            {
                  y--; //decrement the process no.
                  printf("\nProcess No[%d] \t\t %d\t\t\t\t %d\t\t\t %d", i + 1, bt[i], sum - at[i], sum - at[i] - bt[i]);
                  wt = wt + sum - at[i] - bt[i];
                  tat = tat + sum - at[i];
                  count = 0;
            }
            if (i == NOP - 1)
            {
                  i = 0;
            }
            else if (at[i + 1] <= sum)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
      // represents the average waiting time and Turn Around time
      avg_wt = wt * 1.0 / NOP;
      avg_tat = tat * 1.0 / NOP;
      printf("\n Average Turn Around Time: \t%f", avg_wt);
      printf("\n Average Waiting Time: \t%f", avg_tat);
      getch();
}