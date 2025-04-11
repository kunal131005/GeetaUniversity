#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    // Find the maximum value in nums to determine the size of freq
    int max_val = *max_element(nums.begin(), nums.end());
    vector<int> freq(max_val + 1, 0);

    for(int i = 0; i < n; i++){
        freq[nums[i]]++;
    }

    int result = 0;
    for(int i = 0; i < n; i++){
        if(freq[nums[i]] >= 2){
            cout << freq[nums[i]] << " " << nums[i] << endl;
            result = result ^ nums[i];
            freq[nums[i]] = 0;
        }
    }
    cout << result << endl;  
    cout<<(0^1)<<endl;
}