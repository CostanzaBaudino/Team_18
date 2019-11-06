#include "simulation.h"
#include "random.h"

int main(int argc, char **argv) {
  
    try {
        Configuration Config(argc, argv);
        Config.run();
    } catch() {}
		
    return 0;
}
