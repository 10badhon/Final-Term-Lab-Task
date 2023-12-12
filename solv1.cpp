#include<iostream>
using namespace std;

void imatrix(int matrix[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
}

void cmatrix(int matrix[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

}
void dmatrix(int matrix[5][5]){
    int sum=0;
    for(int i=0; i<5; i++){
         sum+=matrix[i][i];
    }
    for(int i=5-1; i>=0; i--){
        sum+=matrix[i][4-i];
    }
    sum-=matrix[5/2][5/2];
    cout<<sum<<endl;
}
void bmatrix(int matrix[5][5]){
    int sum=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if( i==0 || j==0 || j==4 || i==4){
                sum+=matrix[i][j];
            }
        }
    }
    cout<<sum;
}

int main(){
   int matrix[5][5];




   imatrix(matrix);
   cmatrix(matrix);
   
   dmatrix(matrix);

   bmatrix(matrix);
   
   
 return 0;

}
