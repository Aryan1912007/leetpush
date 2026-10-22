class StockSpanner {
public:
    class node{
    public:
    int price;
    int span;};
    stack<node> st;

    StockSpanner() {
        
    }
    
    int next(int price) {
       
        int span =1;
        while(st.size()>0&& st.top().price<=price){
            span+=st.top().span;

            st.pop();
        }
        st.push({price,span}); 
        return span;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */