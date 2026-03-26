#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// void twoSum(vector<int>& nums, int target){
//     int n = nums.size();

//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if((nums[i] + nums[j]) == target){
//                 cout << "indices: [" << i << "," << j << "]" << endl;
//             }
//         }
//     }
// }
// void twoSum(vector<int>& nums, int target){
//     int n=nums.size();

//     int i=0;
//     int j=n-1;
//     while(i<j){
//         int sum=nums[i]+nums[j];
//         if(sum==target){
//             cout<<"output:["<<i<<","<<j<<"]";
//             i++;
//             j--;
//         }
//         else if(sum>target){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
// }
// int main(){
//     vector<int> nums={1,2,7,11,15};
//     int target=9;
//     twoSum(nums,target);

// }
vector<int> twoSum(vector<int>& nums, int target){
    int n=nums.size();
    unordered_map<int,int> m;
    vector<int> ans;

    for(int i=0;i<n;i++){
        int first=nums[i];
        int second=target-first;

        if(m.find(second)!=m.end()){
            ans.push_back(m[second]);
            ans.push_back(i);
        }
        m[first]=i;
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,7,11,15};
    int target = 9;
    vector<int> result=twoSum(nums,target);
    if(result.size() == 2){
        cout << "Indices: [" << result[0] << "," << result[1] << "]";
    } else {
        cout << "No solution found";
    }

    return 0;
}

