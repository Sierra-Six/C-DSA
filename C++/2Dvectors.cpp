#include<iostream>
#include<vector>
using namespace std;

// //initialization
// int main(){
//     vector<int> v1 ={1,2,3};
//     vector<int> v2 ={5,4,9};
//     vector<int> v3 ={6,7,8};

//     vector<vector<int>> V={v1,v2,v3};             //2D vector(vector of vector data_type)
// }




//Given an integer n,return the first n rows of pascal triangle.
vector<vector<int>> pascalTriangle(int n){

    vector<vector<int>> pascal(n);

    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);

        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> ans;
    ans = pascalTriangle(n);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}