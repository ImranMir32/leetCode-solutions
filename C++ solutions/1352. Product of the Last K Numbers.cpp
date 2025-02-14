class ProductOfNumbers {
    public:
        vector<long long> p;
        ProductOfNumbers() {
            p.push_back(1);
        }
        
        void add(int num) {
            if (num == 0) {
                p.clear();
                p.push_back(1);
                return;
            }
            p.push_back(p.back() * num);
        }
        
        int getProduct(int k) {
            if (k >= p.size()) return 0;
            return p.back() / p[p.size() - k - 1];
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */