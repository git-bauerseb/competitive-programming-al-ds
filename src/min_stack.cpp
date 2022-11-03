#include <vector>
#include <cmath>

class MinStack {
    public:
        MinStack() : m_size(0) {}

        void add(int e) {

            int n_min = empty() ? e : std::min(m_stack[m_size-1], e);
            m_stack.push_back({e, n_min});
            m_size++;
        }

        bool empty() {
            return m_stack.size() == 0;
        }

    private:
        std::vector<std::pair<int,int>> m_stack;
        int m_size;
};