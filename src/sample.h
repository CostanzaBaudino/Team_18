#include "sample.h"
#include "motif.h"
#include "position.h"
#include <string>

/*! \class Sample
  
 */

class Sample {
    

public:

    Sample(std::string, size_t);
    
    void find_positions(const Motif&, fichier output);
    
    void find_motif(const Position&, fichier output);
    

private:

/*! 
 */
 
	std::string SampleSequence;
	size_t actualPosition0;//si on veut ecrire le resultats dans le fichier a ce niveau 
							//il nous faut une position globale dans le genome et pas relative au sample
	
	void set_sample(const std::string& seq) 
		{SampleSequence = seq;}
	
};

