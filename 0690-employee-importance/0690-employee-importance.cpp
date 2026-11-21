/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
    private:
        unordered_map<int, Employee*> mp;
public:
    int getImportance(vector<Employee*> employees, int id) {
        for(auto &e : employees)
            mp[e->id] = e;
        return dfs(id);
    }
    int dfs(int id)
    {
        Employee* emp = mp[id];
        int sum = emp->importance;
        for(auto& eid : emp->subordinates)
            sum += dfs(eid);
        return sum;
    }
};