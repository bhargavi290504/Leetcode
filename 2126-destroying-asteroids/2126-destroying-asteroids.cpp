class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
         long long m = mass;
        sort(ast.begin(),ast.end());
        for(auto i: ast)
        {
            if(i<=m)
                m += i;
            else
                return false; 
        }
        return true;
    }
};