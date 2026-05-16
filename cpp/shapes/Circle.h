class Circle{

    private:
        float radius;
    public:
        // float radius;
        float circumference();
        float area ();
        void changeRadius(float new_r);

        Circle(float r);
        ~Circle();

};