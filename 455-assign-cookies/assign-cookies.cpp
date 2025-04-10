class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort( g.begin() , g.end() );//Sorted greed array
        sort( s.begin() , s.end() );//Sorted Size array
        int n = g.size();
        int m = s.size();
        int cnt = 0; 
        int i = 0 , j = 0;// i will point at g[] and j will at s[] .
        while( i < n && j < m ){
            if( s[j] >= g[i] ){ //condition when cookie is given
                cnt++;
                i++;
                j++;
            }
            else j++; // condition when cookie is not given
        }
        return cnt;
    }
};