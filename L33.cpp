#include<iostream>
#include<iostream>
using namespace std;
int search(vector<int>& nums, int target){
    int n=nums.size();

    for(int i=0;i<n;i++){
        if(n%2==0){
            int mid=n/2;
            if(nums[mid]==target){
                return mid;
            }
        }
        else{
            int mid=n/2+1;
            if(nums[mid]==target){
                 return mid;
            }
        }
    }
}
int main(){
    vector<int> nums={4,5,6,7,0,1,2,3};
    int target=0;
    cout<<search(nums,target);
}