using namespace std;

class BrazoRobotico{
    private:

        double x, y, z;
        bool Sujetar;

    public:
        BrazoRobotico(){
            x = 0;
            y = 0;
            z = 0;
            Sujetar = false;
        }

        void Coger(){
            Sujetar = true;
        }

        void Soltar(){
            Sujetar = false;
        }

        void Mover (double x, double y, double z){
            this -> x = x;
            this -> y = y;
            this -> z = z;
        }
};