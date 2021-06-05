class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        bool a[52]={false};
        for(int i=0;i<jewels.size();i++){
            if((int)jewels[i]>=65 && (int)jewels[i]<=90){
                a[(int)jewels[i]-65]=true;
            }else{
                a[(int)jewels[i]-97+26]=true;
            }
        }
        for(int i=0;i<stones.size();i++){
            if((int)stones[i]>=65 && (int)stones[i]<=90){
                if(a[(int)stones[i]-65]) c++;
            }else{
                if(a[(int)stones[i]-97+26]) c++;
            }
        }
        return c;
    }
};