#include<stdio.h>
struct segment{
    int segno,base,limit;
} s[10];
int main(){
	int n,i,seg,offset,flag=0;
	printf("Enter the no. of segments:\n");
	scanf("%d",&n);
	printf("Enter the segment table:\n");
	for(i=0;i<n;i++){
		printf("Enter segment number and base address and limit:");
		scanf("%d%d%d",&s[i].segno,&s[i].base,&s[i].limit);
	}
	printf("Enter logical address to find physical address:\n");
	printf("Enter segment number and offset:");
	scanf("%d %d",&seg,&offset);
	for(i=0;i<n;i++){
		if(s[i].segno==seg){
		    if(offset<s[i].limit){
			printf("Physical Address:%d\n",(s[i].base)+offset);
			flag=1;
		    }
		}
	}
	if(flag==0)
		printf("Invalid Segment number or offset\n");
	return 0;
}
