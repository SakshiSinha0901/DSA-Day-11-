#include <iostream>
using namespace std;

bool search_2D_array(int arr[][4], int rowSize, int colSize,int target){
    for (int i=0; i<rowSize; i++){
        for (int j=0; j<colSize; j++ ){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    // agr target nhi mila tab
    return false;
}
int main(){
    int arr [3][4]= {
        {10,11,12,13},
        {20,21,22,23},
        {31,32,44,55}
        };

    int rowSize= 3;
    int colSize= 4;
    int target = 44;    

    bool ans = search_2D_array(arr,rowSize,colSize,target);
    cout<<" Ans is:" << ans << endl;
}