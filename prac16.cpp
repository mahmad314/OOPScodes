#include<iostream>
using namespace std;

class Matrix{
	
	int row,column;
	int** dataptr;
	public:
	
	Matrix(int r, int c){
		
		row= r;
		column=c;
		dataptr = new int * [row];
		for(int i=0;i<row;i++){
			dataptr[i]= new int [column];
		}
		
	}
	//////////////////   Copy Constructor
	Matrix (Matrix & mat){
	
row =mat.row;
column=mat.column;	

 dataptr= new int *[row];
for(int z=0;z<row;z++){
	dataptr[z]=new int [column];


for(int k=0;k<row;k++){
	dataptr[z][k]=mat.dataptr[z][k];
	}	
		
}
	}
	
	
/////////////////////////  Operator overloading of assignment operator
	
	Matrix operator = (Matrix & mt){
		
		
		for (int i = 0; i <  row; ++i) {
            delete[] dataptr[i];
        }
        delete[] dataptr;

	
		row=mt.row;
		column=mt.column;
		
		 dataptr= new int *[row];
for(int z=0;z<row;z++){
	dataptr[z]=new int [column];


for(int k=0;k<row;k++){
	dataptr[z][k]=mt.dataptr[z][k];
	}	
		
		
	}
	
	return *this;
}





void 	setZero(){
		
		for(int m=0;m<row;m++){
			for(int n=0;n<column;n++){
				
		dataptr[m][n]=0;
			}
		}
	}
//	
	
	void setIdentity(){
		
		for(int l=0; l<row;l++){
			for (int o=0;o<column;o++){
				if (l==o){
				
					dataptr[l][o]=1;
				}
//				else{
//					
//					dataptr[l][o]=0;
//				}

			}
		}
		
	}
	
                   void getElement(int i, int j){
		
		cout<<dataptr[i][j];
		
	}
	
	void setElement(int i , int j, int val){
		
		dataptr[i][j]=val;
		
	}
	
		
		

	
	
	void display(){
		
			for(int m=0;m<row;m++){
			for(int n=0;n<column;n++){
			cout<<dataptr[m][n]<<" ";
			}
			cout<<endl;
		}
		
		
	}
	
	~Matrix(){
		
			for(int j=0;j<row;j++){
			delete [] dataptr[j];
			
			}
			
			
			delete []dataptr;
			
			cout<<"destroyed\n";
	}
};


int main(){
	
	Matrix M1(5,5);
	M1.setZero();
	
	
M1.setIdentity();


M1.display();
//
//M1.setElement(2,2,6);
//
//	M1.getElement(2,2);
	
	Matrix M2(3,3);
	
	M2.setZero();
	
	
	M2=M1;
	
	M2.display();
	
	
	
	
		return 0;
}