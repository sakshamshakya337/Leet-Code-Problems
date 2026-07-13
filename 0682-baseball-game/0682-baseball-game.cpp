class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> st;

        for(string data : operations){  // "-2"
            if(isdigit(data[0])){
                st.push(stoi(data));
            }else if(data[0]=='C'){
                if(!st.empty()){
                    st.pop();
                }
            }else if(data[0]=='D'){
                int top = st.top();
                st.push(top*2);
            }else if(data[0]=='+'){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first+second);
            }else{
                st.push(stoi(data));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        return sum;
    }
};