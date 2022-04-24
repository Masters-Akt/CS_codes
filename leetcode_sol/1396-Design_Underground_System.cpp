class UndergroundSystem {
private:
    unordered_map<int, pair<string, int>> checkInMap;
    unordered_map<string, pair<double, int>> routeMap;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkInMap[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = checkInMap[id];
        checkInMap.erase(id);
        string routeName = checkIn.first + "_" + stationName;
        routeMap[routeName].first += t - checkIn.second;
        routeMap[routeName].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "_" + endStation;
        auto& route = routeMap[routeName];
        return route.first / route.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */