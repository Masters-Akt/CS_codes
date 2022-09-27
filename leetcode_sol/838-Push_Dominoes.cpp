class Solution {
public:
    string pushDominoes(string dominoes) {
        int N = dominoes.size(), right = -1;
        for(int i=0;i<N;i++){
            if(dominoes[i]=='L'){
                if(right==-1){ 
                    // Step 2
                    for(int j=i-1; j>=0 && dominoes[j]=='.'; j--) dominoes[j] = 'L';      
                }else{
                    // Step 8
                    for(int j=right+1, k=i-1; j<k; j++, k--){
                        dominoes[j] = 'R';
                        dominoes[k] = 'L';
                    } 
                    right = -1;
                }
            }else if(dominoes[i]=='R'){
                if(right!=-1){
                    for(int j=right+1; j<i; j++) dominoes[j] = 'R';
                }
                right = i;
            }
        }
        if(right!=-1){
            for(int j=right+1; j<N; j++) dominoes[j] = 'R';
        }
        return dominoes;
    }
};