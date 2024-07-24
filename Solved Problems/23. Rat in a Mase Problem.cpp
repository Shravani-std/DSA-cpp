#include<iostream>
using namespace std;

class Solution{
	private:
		bool isSafe(int x,int y,int n, vector<vector<int>> visited, vector<vector<int>>nums){
			if( (x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && nums[x][y] == 1){
				return true;
			}
			else{
				return false;
			}
		}
		void solve(vector<vector<int>> &nums , vector<vector<int>>&ans, int x,int y , vector<vector<int>> visited, string path, int n){
			//base case
			if ( x == n-1 && y == n-1){
				ans.push_back(path);
			}
			visited[x][y] = 1;
			//Down
			int newx = x+1;
			int newy = y;
			if( isSafe(x,y,n,visited,nums)){
				
				path.push_back('D');
				solve(nums,ans,newx,newy,visited,path,n);
				path.pop_back();
			}
			
			//left
			newx = x;
			newy = y-1;
			if( isSafe(x,y,n,visited,nums)){
				path.push_back('L');
				solve(nums,ans,newx,newy,visited,path,n);
				path.pop_back();
			}
			
			//Right
			newx = x;
			newy = y+1;
			if( isSafe(x,y,n,visited,nums)){
				path.push_back('R');
				solve(nums,ans,newx,newy,visited,path,n);
				path.pop_back();
			}
			//Up 
			newx = x-1;
			newy = y;
			if( isSafe(x,y,n,visited,nums)){
				path.push_back('U');
				solve(nums,ans,newx,newy,visited,path,n);
				path.pop_back();
			}
			
			
			
			visited[x][y] = 0;
			
		}
		
	public:
		vector<string> main(vector<vector<int>> &nums,int n){
			vector<int> ans;
			if( nums[0][0] == 0){
				return ans;
			}
			int start_x = 0;
			int start_y = 0;
			
			vector<vector<int>> visited = nums;
			for(int i = 0; i<n ; i++){
				for(int j = 0 ; j<n ; j++){
					visited[i][j] = 0;
				}
			}
			string path = "";
			solve(nums,ans,start_x,start_y,visited,path,n);
			sort(ans.begin(),ans.end());
			return ans;
		}
};
