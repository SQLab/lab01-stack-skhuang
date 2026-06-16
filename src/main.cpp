#include <iostream>
#include <stack>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::stack<int> st;
    for (int i = 0; i < n; ++i) {
        std::string op;
        std::cin >> op;

        if (op == "push") {
            int x;
            std::cin >> x;
            st.push(x);
        } else if (op == "pop") {
            if (st.empty()) {
                std::cout << -1 << '\n';
            } else {
                std::cout << st.top() << '\n';
                st.pop();
            }
        }
    }

    return 0;
}
