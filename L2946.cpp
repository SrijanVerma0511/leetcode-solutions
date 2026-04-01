#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool areSimilar(vector<vector<int>>& mat, int k){
    int m=mat.size();
    int n=mat[0].size();
    vector<vector<int>> res=mat;

    k=k%n;

    for(int i=0;i<m;i++){
        if(i%2==0){
            rotate(res[i].begin(),res[i].begin()+k,res[i].end());
        }
        else{
            rotate(res[i].begin(),res[i].end()-k,res[i].end());

        }
    }
    if(res==mat){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};

    int k=4;

    cout<<areSimilar(mat,k);
}