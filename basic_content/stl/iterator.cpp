
#include <iostream>
#include <vector>
#include <string>

//run -----./a.out inputa inputb inputc 
int main (int argc , char * argv[]){

    std::vector <std::string> projects;
for(int i = 1;i<argc ; ++i){
    projects.push_back(std::string(argv[i]));
}

    for (std::vector<std::string>::iterator j = projects.begin(); j!=projects.end(); ++j ){
        std::cout << *j << std::endl;
    }
    return 0;
}