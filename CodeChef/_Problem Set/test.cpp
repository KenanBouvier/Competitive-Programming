    set<int> s(nums.begin(),nums.end());
    vector<int> v(s.begin(),s.end());
    int last = v[v.size()-1];
    int second = v[v.size()-2];
    if(last == second||v.size()<2){
        return false;
    }
    if(second*2<=last){
        return true;
    }
    return false;