#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	
   srand(time(0));
   
   int mat1[2][3];
   int mat2[3][2];
   
   for(int i=0;i<2;++i){
    for(int j=0;j<3;++j){
    	mat1[i][j]=rand()%10+1;
	}
   }

   for(int i=0;i<3;++i){
   	for(int j=0;j<2;++j){
   		mat2[i][j]=rand()%10+1;
	   }
   }
   
   cout<<"Primera matriz original:\n";
   
   for(int i=0;i<2;++i){
   	for(int j=0;j<3;++j){
   		cout<<mat1[i][j]<<" ";
	   }
	   cout<<endl;
   }
   
   for(int i=0;i<2;++i){
   	for(int j=0;j<3;++j){
   		if(mat1[i][j]>5){
   			mat1[i][j]=1;
		   }
	   }
   }
   
   cout<<"\nPrimera matriz modificada:\n";
   for(int i=0;i<2;++i){
   	for(int j=0;j<3;++j){
   		cout<<mat1[i][j]<<" ";
	   }
	   cout<<endl;
   }
   
   for(int i=0;i<3;++i){
   	for(int j=0; j<2;++j){
   		if(mat2[i][j]<6){
   			mat2[i][j]=0;
		   }
	   }
   }
   
   
   cout<<"\nSegunda matriz modificada:\n";
   for(int i=0;i<3;++i){
   	for(int j=0;j<2;++j){
   		cout<<mat2[i][j]<<" ";
	   }
	   cout<<endl;
   }
   
   return 0;
   
}
   
   
   
   
   
   
   
   
   
   
   
   
