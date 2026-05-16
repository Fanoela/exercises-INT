class Parallelogram{

    public:
        float base, side, alpha;
    private:
        float perimeter();
        float area();
        void changeDimension(float x, float y, float theta);

        Parallelogram();
        ~Parallelogram();
};