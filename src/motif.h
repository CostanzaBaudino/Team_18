#include <vector>
#include <array>

/*! \class Motif
  
 */


typedef std::vector<std::array<double,4>> PositionWeightMatrix;

class Motif {
    

public:

	Motif();//motif par defaut ds mode dutilisation 2

    Motif(double threshold, double length);
    
    double score(std::string);
    
    out& printPWM(fichier out);

private:

	double Length;
	PositionWeightMatrix PWM;
	double Threshold;
	
	void set_PWM();
};

