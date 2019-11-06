
#include <tclap/CmdLine.h>
#include <sample.h>
#include <motif.h>


class Configuration {

/*!
  Uses [TCLAP](http://tclap.sourceforge.net/html/index.html) to parse user inputs.
 */
    void parse(int, char**);
/*!
  Construct a motif with the matrix specified in the configuration file
  \param infile (string): filename
 */
    void load_matrix(const std::string &infile);
    
/*!
	Construct 
	\param infile (string): filename
*/
	void load_positions(const std::string &infile);
    

/*!
  The main operation of this class: reads and analysis samples of the whole genome.
  Each iteration load a new sample from the FASTA file.
 */
	//debut du nouveau fragment = fin de l ancien - longueur du motif + 1
	//fin de l ancien fragment = premiere position non comprise ds l ancien motif
    
    void run(); 
									
	Sample current_sample; //arbitrary length 100?
	container<FoundMotif> positions; // jsp pr 
	Motif motiF;
	
	
};


