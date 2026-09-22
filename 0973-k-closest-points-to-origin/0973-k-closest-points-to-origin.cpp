class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> pq;
        vector<vector<int>> answer;
        for(int i=0;i<points.size();i++){
          int distance=  (points[i][0]*points[i][0]+points[i][1]*points[i][1]);
          pq.push({distance,i});
          if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            answer.push_back(points[pq.top().second]);
            pq.pop();
        }
        return answer;
    }
};