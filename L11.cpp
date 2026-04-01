#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxArea(vector<int>& height){
    int n=height.size();
    int MaxW=0;
    int low=0;
    int high=n-1;

    while(low<high){
        int width=high-low;
        int ht=min(height[low],height[high]);
        int currentSum=width*ht;

        MaxW=max(currentSum,MaxW);

        if(height[low]<height[high]){
            low++;
        }
        else{
            high--;
        }

    }
    return MaxW;


    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int width=j-i;

    //         int ht=min(height[i],height[j]);
    //         int current_Sum=width*ht;

    //         MaxW=max(current_Sum,MaxW);

    //     }
    // }
    // return MaxW;
}
int main(){
    vector<int> height={1,1};

    cout<<maxArea(height);
}
