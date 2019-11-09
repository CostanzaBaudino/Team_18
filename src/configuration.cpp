#include "sample.h"

void Configuration::parse(int argc, char **argv) {
   
    //tclap
    /* TCLAP::ValueArg<double> threshold("t", "threshold","Seuil score de vraisemblance" ,  false, 0, "double");
    cmd.add(threshold);
    xoradd fichierF matriceM mutuellement exlusifs?
    TCLAP::ValueArg<std::string> matriceM ("m", "matrice", "Matrice file name", false, "", "string");  //sans switcharg
    cmd.add(cfile);
    
    cmd.parse(argc, argv);
    */
 


    //load_matrix ou load_positions
    std::string conf(cfile.getValue());
    if (conf.empty()) {
    //lire fichierF et faire load_position maybe
	} else {
    load_matrix(conf)
    //motiF.set_threshold(threshold.getvalue());
      }
 
}

void Configuration::load_matrix(const std::string &infile) {//counts the lines to get motif length
   double length_motif(0.0);
   try {
        std::ifstream confstr(infile);
        if (confstr.is_open()) {
            std::string line,value;
            std::array<double, 4> pos_motif;
            
            while(std::getline(confstr, line)) {
				std::stringstream ss(line);
				
				while (std::getline(ss,value,' ')) {
				pos_motif.push_back(stod(value));
				}
				motiF.set_PWM(pos_motif);
				pos_motif.erase(pos_motif.begin(), pos_motif.end());
				++length_motif;
			}
	motiF.set_length(length_motif);
	confstr.close();
        } else {
            throw std::ifstream::failure ("Could not open configuration file " + infile);
        }
    } catch(std::ifstream::failure &e) {
       std::cerr<<e.what() <<std::endl;
    }
}

void Configuration::load_positions(const std::string &infile);

void Configuration::run(); 

//Peut etre definir globalement _usage1_/_usage2_ pour utiliser
//#ifdef _usage1_     
//#elif defined _usage2_ 


//outputs ? à quel niveau écrit on les resultats dans les fichiers voulus?
//les resultats sont de type positions ds le 1er mode d utilisation
//de type motif dans le 2e
