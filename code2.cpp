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
// MAKING 2D ARRAYS WITH VECTORS
// #include <iostream>
// #include <vector>
// using namespace std;

// int main (){
//     vector<vector<int>>arr(4,vector<int>(3,23));

//     int rowSize = arr.size();//tells size of rows
//     int colSize = arr[0].size();// tells size of column

//     for(int i = 0; i<rowSize; i++){
//         for(int j = 0; j<colSize; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;      
// }

#include <iostream>
#include <vector>
using namespace std;

bool search2DArray(vector<vector<int>> arr, int target) {
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int target = 40;
    vector<vector<int>> arr(4, vector<int>(3));

    int rowSize = arr.size();
    int colSize = arr[0].size();

    cout << "Enter elements of the 2D array (4x3): " << endl;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cin >> arr[i][j];
        }
    }

    bool found = search2DArray(arr, target);

    if (found) {
        cout << "Target " << target << " found in the array." << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
//Again
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
// MAKING 2D ARRAYS WITH VECTORS
// #include <iostream>
// #include <vector>
// using namespace std;

// int main (){
//     vector<vector<int>>arr(4,vector<int>(3,23));

//     int rowSize = arr.size();//tells size of rows
//     int colSize = arr[0].size();// tells size of column

//     for(int i = 0; i<rowSize; i++){
//         for(int j = 0; j<colSize; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;      
// }

#include <iostream>
#include <vector>
using namespace std;

bool search2DArray(vector<vector<int>> arr, int target) {
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int target = 40;
    vector<vector<int>> arr(4, vector<int>(3));

    int rowSize = arr.size();
    int colSize = arr[0].size();

    cout << "Enter elements of the 2D array (4x3): " << endl;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cin >> arr[i][j];
        }
    }

    bool found = search2DArray(arr, target);

    if (found) {
        cout << "Target " << target << " found in the array." << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
