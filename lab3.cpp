#include<iostream>
#include<list>
using namespace std;
#define SIZE 10
int main(){
	int hashTable[SIZE];
	
	//Intialise table with -1
	for (int i=0;i<SIZE;i++)
	hashTable[i]=-1;
	 
	 //Elements to insert
	 int arr[]={25,35,15,42};
	 
	 //Insert
	 for(int i=0;i<4;i++)
	 {
	 	int key=arr[i];
	 	int index=key%SIZE;
	 	
	 	while(hashTable[index]!=-1){
	 		index=(index+1)%SIZE;
	 		}
	 		hashTable[index]=key;
	 }
	 //Dispaly
	 cout<<"Hash Table\n";
	 for(int i=0;i<SIZE;i++)
	 {
	 	cout<<i<<"-->";
	 	if(hashTable[i]==-1)
	 	cout<<"NULL";
	 	else
	 	 cout<<hashTable[i];
	 	cout<<endl; 
	 }
	 //Search
	 int key=35;
	 int index=key%SIZE;
	 
	 while(hashTable[index] !=-1)
	 {
	 	if(hashTable[index]==key)
	 	{
	 		cout<<"\n35 Found";
	 		break;
		 }
		 index=(index+1)%SIZE;
	}
	//Delete
	index=key%SIZE;
	while(hashTable[index]!=-1)
	{
		if(hashTable[index]!=key)
		{
			hashTable[index]=-1;
			cout<<"\n 35 Deleted";
			break;
		}
		index=(index+1)%SIZE;
	}
	return 0;
}
