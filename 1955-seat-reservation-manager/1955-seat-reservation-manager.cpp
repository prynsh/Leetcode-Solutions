class SeatManager {
public:
    set<int> st; 
    SeatManager(int n) {
        for(int i=1;i<=n;i++) st.insert(i); 
    }
    
    int reserve() {
        int val = *st.begin(); 
        st.erase(val);
        return val;
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber);
    }
};