class ParkingSystem {
public:
    unordered_map<int,int> park;
    ParkingSystem(int big, int medium, int small) {
        park[1]=big;
        park[2]=medium;
        park[3]=small;
    }
    
    bool addCar(int cartype) {
        if(park[cartype]==0)
            return false;
        park[cartype]--;
        return true;
    }
};