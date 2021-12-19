class ProductOfNumbers {
public:
    vector<int> p = {1};
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num==0) p = {1};
        else p.push_back(p.back()*num);
    }
    
    int getProduct(int k) {
        if(k>=p.size()) return 0;
        return p.back()/p[p.size()-1-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */