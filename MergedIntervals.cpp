// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>> mergedInterval; // creating a 2d vector
        if(intervals.size()==0){
            return mergedInterval;
        }
        sort(intervals.begin(),intervals.end()); // sorting the vector
        vector<int> tempintervals=intervals[0]; // creating a int vector to store temp array
        for(auto it :intervals){
            if(it[0]<=tempintervals[1]) //comparing first elemrnt of array to 2nd element of another array
                tempintervals[1] = max(it[1],tempintervals[1]); // swaping the array
            else{
                mergedInterval.push_back(tempintervals); //pushing 
                tempintervals=it;
            }
        }
        mergedInterval.push_back(tempintervals);
        return mergedInterval;
    }
};