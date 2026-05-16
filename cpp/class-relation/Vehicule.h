class Vehicule
{
protected:
    float poids;
    float vitesse;

public:
    Vehicule();
    ~Vehicule();
    void accelerer();
    void stopper();
    void tourner(char direction);
    void setPoids(float poids);
    float getPoids();
    void setVitesse(float vitesse);
    float getVitesse();
};