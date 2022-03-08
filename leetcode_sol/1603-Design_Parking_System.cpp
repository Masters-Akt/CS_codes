class ParkingSystem {
private:
    vector<int> b;
    vector<int> m;
    vector<int> s;
    int bp = 0, mp = 0, sp = 0;
public:
    ParkingSystem(int big, int medium, int small) {
        b.resize(big);
        m.resize(medium);
        s.resize(small);
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(bp<b.size()){
                bp++;
                return true;
            }
            return false;
        }
        if(carType==2){
            if(mp<m.size()){
                mp++;
                return true;
            }
            return false;
        }
        if(sp<s.size()){
            sp++;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */