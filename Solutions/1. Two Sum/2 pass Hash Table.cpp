class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Two Pass Hash Table (unordered_map)
        //Time Complexity is O(n)

        /*
        Steps (advised by rahulvarma5297) :
        1. Create an empty hash table to store elements and their indices.
        2. Iterate through the array from left to right.
        3. For each element nums[i], calculate the complement by subtracting it from the target: complement = target - nums[i].
        4. Check if the complement exists in the hash table. If it does, we have found a solution.
        5. If the complement does not exist in the hash table, add the current element nums[i] to the hash table with its index as the value.
        6. Repeat steps 3-5 until we find a solution or reach the end of the array.
        7. If no solution is found, return an empty array or an appropriate indicator.
        */

        int n, i, complement;

        unordered_map <int, int> numMap; //numMap is the user-chosen name of the hash table
        n = nums.size();
        //run for loop to store integers in the hash table - Build Hash Table
        for (i=0; i<n; i++){ 
            numMap [nums[i]] = i;
        }
        //Calculate Complement

        for (i=0; i<n; i++){
            complement = target - nums[i];
            if(numMap.count(complement) && numMap[complement] != i){ 
                return {i, numMap[complement]};
            /*
            1. count -> checks if the key complement exists in the map numMap
                if complement is a key in the map, count(complement) will return 1 (true), otherwise it returns 0 (false).
            2. numMap[complement] != i -> If the key complement exists in the map, this part retrieves its associated value using numMap[complement] and checks if that value is not equal to i.
            3. The comparison != i ensures that you are not comparing the element with itself
            */
            }
        }

        return {}; //else no solution
    }
};