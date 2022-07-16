class Solution {
public:
    typedef long long ll;
    int countHousePlacements(int n) {
        ll mod=1e9+7;
        ll hs=1,spc=1;
        ll tot=hs+spc;
        for(int i=2;i<=n;i++)
        {
            hs=spc;
            spc=tot;
            tot=(hs+spc)%mod;
        }
        return (tot*tot)%mod;
    }
};
