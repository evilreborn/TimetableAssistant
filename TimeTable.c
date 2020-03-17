#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct node {
   char data[100];
   struct node *next;
};
 
struct node *start[7],*traverse;
void insert_at_end(char x[100],int i);

void display(int a) // Function to display the linked list
{ 
	traverse=start[a];
	while (traverse!= NULL) 
	{ 
		printf("%s", traverse->data); 
		traverse = traverse->next; 
	} 
}
 
int main () {
   int i;
   
	#define MAXCHAR 1000
	FILE *fp;
	char str[MAXCHAR],stemp[1000];
	
	for(i=0;i<7;i++)
		start[i]=NULL;
	/*
   for(i=0;i<1;i++)
   {

			//"Schedule"+(i+48)+".txt";
			char* ch=48;
			//char* filename = "Schedule0.txt";

			char* filename = "Schedule"+ch+".txt";
					 
			fp = fopen(filename, "r");
			if (fp == NULL){
				printf("Could not open file %s",filename);
			}
			while (fgets(str, MAXCHAR, fp) != NULL)
				insert_at_end(str,i);
			fclose(fp);
			
			ch++;
   }
   */
	

char* filename = "Schedule0.txt";
		 
			fp = fopen(filename, "r");
			if (fp == NULL){
				printf("Could not open file %s",filename);
			}
			while (fgets(str, MAXCHAR, fp) != NULL)
				insert_at_end(str,0);
			fclose(fp);
			
filename = "Schedule1.txt";
		 
			fp = fopen(filename, "r");
			if (fp == NULL){
				printf("Could not open file %s",filename);
			}
			while (fgets(str, MAXCHAR, fp) != NULL)
				insert_at_end(str,1);
			fclose(fp);
			
filename = "Schedule2.txt";
		 
			fp = fopen(filename, "r");
			if (fp == NULL){
				printf("Could not open file %s",filename);
			}
			while (fgets(str, MAXCHAR, fp) != NULL)
				insert_at_end(str,2);
			fclose(fp);
			
filename = "Schedule3.txt";
		 
			fp = fopen(filename, "r");
			if (fp == NULL){
				printf("Could not open file %s",filename);
			}
			while (fgets(str, MAXCHAR, fp) != NULL)
				insert_at_end(str,3);
			fclose(fp);
			
filename = "Schedule4.txt";
		 
			fp = fopen(filename, "r");
			if (fp == NULL){
				printf("Could not open file %s",filename);
			}
			while (fgets(str, MAXCHAR, fp) != NULL)
				insert_at_end(str,4);
			fclose(fp);

filename = "Schedule5.txt";
		 
			fp = fopen(filename, "r");
			if (fp == NULL){
				printf("Could not open file %s",filename);
			}
			while (fgets(str, MAXCHAR, fp) != NULL)
				insert_at_end(str,5);
			fclose(fp);
			
filename = "Schedule6.txt";
		 
			fp = fopen(filename, "r");
			if (fp == NULL){
				printf("Could not open file %s",filename);
			}
			while (fgets(str, MAXCHAR, fp) != NULL)
				insert_at_end(str,6);
			fclose(fp);			
	do
	{		
		printf("Which Day TimeTable You Want To see?\n");
		printf("1.Sun\n2.Mon\n3.Tue\n4.Wed\n5.Thur\n6.Fri\n7.Sat\n8.Exit\n");
		printf("Enter Your choice:");
		i=getche()-48; //We dnt have to press Enter after entering the input data from selection menu
		//scanf("%d",&i);
		printf("\nTimeTable is below:\n\n");
		if(i!=8)
				display(i-1);
		printf("\n---------------------\n");
	}while(i!=8);

}
 

 
void insert_at_end(char x[100],int i) {
   struct node *t, *temp;
   
   t = (struct node*)malloc(sizeof(struct node));
   
   if (start[i] == NULL) {
      start[i] = t;
      strcpy(start[i]->data,x);
      start[i]->next = NULL;
      return;
   }
   
   temp = start[i];
   
   while (temp->next != NULL)
      temp = temp->next;  
   
   temp->next = t;
   strcpy(t->data,x);
   t->next    = NULL;
}
 
