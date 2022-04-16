class ATM {
private:
    vector<long long> notes;
    int mul(int i){
        if(i==0) return 500;
        if(i==1) return 200;
        if(i==2) return 100;
        if(i==3) return 50;
        return 20;
    }
public:
    ATM() {
        notes.resize(5, 0);
    }
    
    void deposit(vector<int> banknotesCount) {
        reverse(banknotesCount.begin(), banknotesCount.end());
        for(int i=0;i<5;i++) notes[i]+=banknotesCount[i];
    }
    
    vector<int> withdraw(int amount) {
        vector<long long> temp = notes;
        vector<int> ans(5, 0);
        for(int i=0;i<5;i++){
            if(temp[i]>0){
                int x = mul(i);
                if((amount/x)<=temp[i]){
                    ans[i] = amount/x;
                    temp[i]-=ans[i];
                    amount-=(x*ans[i]);    
                }else{
                    ans[i] = temp[i];
                    amount-=(x*temp[i]);
                    temp[i] = 0;
                }
            }
        }
        if(amount>0){
            return {-1};
        }
        notes = temp;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */