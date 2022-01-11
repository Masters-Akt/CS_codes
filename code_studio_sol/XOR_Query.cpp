//TLE
vector<int> xorQuery(vector<vector<int>> &queries)
{
	// Write your code here
    vector<int> ans;
    for(int i=0;i<queries.size();i++){
        if(queries[i][0]==1){
            ans.push_back(queries[i][1]);
        }else{
           for(int j=0;j<ans.size();j++){
               ans[j]^=queries[i][1];
           } 
        }
    }
    return ans;
}