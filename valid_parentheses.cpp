bool isValidParenthesis(string s)

{

    stack<char>st;

    int i=0;

    while(i<s.size()){

      if (s[i] == '(' || s[i] == '[' || s[i] == '{') {

        st.push(s[i]);

        }else if(!st.empty() && (st.top()=='(' && s[i]==')'|| st.top()=='[' && s[i]==']'||

        st.top()=='{'&& s[i]=='}')){

            st.pop();

        }else return false;

        i++;

    }

    if(st.empty())return true;

    else return false;

}