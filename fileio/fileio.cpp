#include "../includes/constants.h"
#include "../includes/fileio.h"

using namespace KP;

namespace KP {

    //attempt to open file 'filename' and read in all data
    //returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
    int load(const char* filename, std::vector<process> &myProcesses){
        return UNIMPLEMENTED;
    }

    //attempt to create or open file 'filename' to write all data to
    //returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
    int save(const char* filename, std::vector<process> &myProcesses){
        return UNIMPLEMENTED;
    }
}