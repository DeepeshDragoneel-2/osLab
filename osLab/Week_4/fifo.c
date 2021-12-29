#include<stdio.h>
int i,j,nof,nor,flag=0,ref[50],frm[50],pf=0,victim=-1;
void main(){
	printf("\n Enter no.of frames.... ");
	scanf("%d",&nof);
	printf("Enter number of reference string.. ");
	scanf("%d",&nor);
	printf("\nEnter the reference string.. ");
	for(i=0;i<nor;i++)
		scanf("%d",&ref[i]);
	printf("\nThe given reference string : ");
	for(i=0;i<nor;i++)
		printf("%4d",ref[i]);
	for(i=1;i<=nof;i++)
		frm[i]=-1;
	printf("\n");
	for(i=0;i<nor;i++){
		flag=0;
		printf("\n\tReference np%d->\t",ref[i]);
		for(j=0;j<nof;j++){
			if(frm[j]==ref[i]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			pf++;
			victim++;
			victim=victim%nof;
			frm[victim]=ref[i];
			for(j=0;j<nof;j++)
				printf("%4d",frm[j]);
		}
	}
	printf("\n\n\t\tNo.of pages faults... %d\n",pf);
}
