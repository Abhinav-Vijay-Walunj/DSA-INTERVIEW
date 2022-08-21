class Solution {
public:
    int countTriples(int n) {
        int ans = 0;

		for(int i=1 ; i<=n ; i++){
			for(int j=i+1 ; j<=n ; j++){

				int temp = i*i + j*j;
				int sq = sqrt(temp);

				if(sq*sq == temp && sq <= n){
					ans += 2;
				}
			}
		}
        
       
        return ans;
        
    }
};