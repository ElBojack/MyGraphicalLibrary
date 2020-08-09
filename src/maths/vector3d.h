namespace MGLEngine {
    class vector3d {
        private:
        //Attributes
            float x;
            float y;
            float z;
        public:
        //Constructor
            vector3d();
            vector3d(float, float, float);
        //Destructor
            ~vector3d();
        //Copy Constructor
            vector3d(const vector3d &);
            vector3d& operator=(const vector3d &);
        //Print properties
            void print();
        //Operations
            // + Addition
            void add(const vector3d &);
            void operator+=(const vector3d &);
            vector3d operator+(const vector3d &);
            void add(const float);
            void operator+=(const float);
            vector3d operator+(const float);
            // - Substraction
            void sub(const vector3d &);
            void operator-=(const vector3d &);
            vector3d operator-(const vector3d &);
            void sub(const float);
            void operator-=(const float);
            vector3d operator-(const float);
            // * Multiplication
            void mul(const vector3d &);
            void operator*=(const vector3d &);
            vector3d operator*(const vector3d &);
            void mul(const float);
            void operator*=(const float);
            vector3d operator*(const float);
            // / Division
            void div(const vector3d &);
            void operator/=(const vector3d &);
            vector3d operator/(const vector3d &);
            void div(const float);
            void operator/=(const float);
            vector3d operator/(const float);
            // % Modulo
            void mod(const vector3d &);
            void operator%=(const vector3d &);
            vector3d operator%(const vector3d &);
    };
} // namespace MGLEngine