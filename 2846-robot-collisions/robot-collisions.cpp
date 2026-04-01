class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<tuple<int,int,char,int>> robots;
        
        for(int i=0;i<n;i++){
            robots.push_back({positions[i], healths[i], directions[i], i});
        }
        
        sort(robots.begin(), robots.end());
        
        stack<int> st;
        vector<int> finalHealth(n, 0);
        
        for(int i=0;i<n;i++){
            auto &[pos, health, dir, idx] = robots[i];
            
            if(dir == 'R'){
                st.push(i);
            } 
            else{
                while(!st.empty() && health > 0){
                    int j = st.top();
                    auto &[pos2, health2, dir2, idx2] = robots[j];
                    
                    if(health2 < health){
                        st.pop();
                        health--;
                        health2 = 0;
                    }
                    else if(health2 == health){
                        st.pop();
                        health = 0;
                        health2 = 0;
                        break;
                    }
                    else{
                        health2--;
                        health = 0;
                        break;
                    }
                }
            }
        }
        
        for(int i=0;i<n;i++){
            auto &[pos, health, dir, idx] = robots[i];
            if(health > 0){
                finalHealth[idx] = health;
            }
        }
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(finalHealth[i] > 0){
                ans.push_back(finalHealth[i]);
            }
        }
        
        return ans;
    }
};