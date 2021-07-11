class MedianFinder {
public:
    /** initialize your data structure here. */
    vector<vector<int>*> v;
    int t_size;
    MedianFinder() {
        t_size = 0;
        v.push_back(new vector<int>());
    }
    
    void addNum(int num) {
        vector<int>* cr = NULL;
        int target;
        for(int i=0;i<v.size();i++){
            if(v.size()==1||(i==0 && num<=v[i]->back())||(i==v.size()-1&&num>=v[i]->at(0))||(v[i]->at(0)<=num&&num<=v[i]->back())||(num>v[i]->back()&&num<v[i+1]->front())){
                cr = v[i];
                target = i;
                break;
            }
        }
        t_size++;
        cr->push_back(num);
        sort(cr->begin(), cr->end());
        const int msize = 30;
        int l = cr->size();
        if(l>msize){
            vector<int> *h1 = new vector<int>(cr->begin(), cr->begin()+l/2);
            vector<int> *h2 = new vector<int>(cr->begin()+l/2, cr->end());
            delete cr;
            v[target] = h2;
            v.insert(v.begin()+target, h1);
        }
    }
    
    double findMedian() {
        if(t_size==0) return 0;
        int m1 = t_size/2;
        int m2 = m1+1;
        int lCount=0;
        double first, second;
        for(auto r:v){
            if(lCount<m1&&m1<=lCount+r->size()) first = r->at(m1-lCount-1);  
            if(lCount<m2&&m2<=lCount+r->size()){
                second = r->at(m2-lCount-1);
                break;
            }
            lCount+=r->size();
        }
        if(t_size%2) return second;
        else return (first+second)/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */