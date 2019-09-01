#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3],i,j;
	static int b[3][3],c[3][3]; //b[3][4];
	 
	 cout<<"Enter values of Matrix\n";
	//Input a 
	for(i=0;i<3;i++)
	 {
	  cout<<"Enter value of a["<<i+1<<"] ";
	   cin>>a[i];
	  cout<<"\n";
     }
     /*
	//a*a matrix
	for(i=0;i<3;i++)
	 {
	 	b[i][0]=i+1;
	 	for(j=1;j<4;j++)
	 	  b[i][j]=a[j-1];
	 }
	 
	//Display a*a
	for(i=0;i<3;i++)
	{
		for(j=1;j<4;j++)
		 cout<<"( "<<b[i][0]<<" , "<<b[i][j]<<" )";
		cout<<"\n";
	} */
	
	 //Display a*a Alterternative
	 for(i=0;i<3;i++)
	 {
		for(j=0;j<3;j++)
		 cout<<"( "<<a[i]<<" , "<<a[j]<<" )";
		cout<<"\n";
	}
	//Making Relational Matrix
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		 {  if(a[i]<=a[j])
		 	  b[a[i]][a[j]]=1;
		 }
	}
	//Printing Rel matrix
	cout<<"\nRel Matrix is\n\n";
	for(i=0;i<3;i++)
	{
	  cout<<"| ";
	  for(j=0;j<3;j++)
	  {
	 	cout<<b[i][j]<<" ";
	  }
	  cout<<" |\n";
    }
    //Relation matrix Squqare
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		for(int k=0;k<3;k++)
    		 c[i][j]=c[i][j]+b[i][k]*b[k][j];
		}
	}
	
	//Printing Rel Matrix
	
	cout<<"\n Square of Rel Matrix is\n\n";
	for(i=0;i<3;i++)
	{
	  cout<<"| ";
	  for(j=0;j<3;j++)
	  {
	 	cout<<c[i][j]<<" ";
	  }
	  cout<<" |\n";
    }
	
	//Making Rel Matrix
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
        {
		  if(c[i][j]!=0)
		   c[i][j]=1;
         }
   //Printing Rel Matrix
	
	cout<<"\n Square of Rel Matrix^2 is\n\n";
	for(i=0;i<3;i++)
	{
	  cout<<"| ";
	  for(j=0;j<3;j++)
	  {
	 	cout<<c[i][j]<<" ";
	  }
	  cout<<" |\n";
    }
    
    //Rel matrix ^ 2 + rel matrix
    int temp[3][3];
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	   temp[i][j]=b[i][j]+c[i][j];
	
	//Making Rel Matrix
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
        {
		  if(temp[i][j]!=0)
		   temp[i][j]=1;
         }  
	cout<<"\n Square of Rel Matrix^2 + rel matrix is\n\n";
	for(i=0;i<3;i++)
	{
	  cout<<"| ";
	  for(j=0;j<3;j++)
	  {
	 	cout<<temp[i][j]<<" ";
	  }
	  cout<<" |\n";
    }
    
    //Compaare matrixes
    int tempno=0;
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
      if(temp[i][j]!=b[i][j])
        tempno=1;
        
    if(tempno==0)
     cout<<"Given Matrix is transitive";
    else
      cout<<"Given Matrix is not transitive";
	return 0;
 }
