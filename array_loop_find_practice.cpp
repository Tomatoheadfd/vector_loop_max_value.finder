#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
    
    vector<double> bee_count = {1002, 1231, 2100, 700, 1873, 3400};

double most_bees = bee_count[0];
        
        for (int i = 0; i < bee_count.size(); i++)  {
        
            if (bee_count.at(i) > most_bees) {
                most_bees = bee_count.at(i);
                                            }
        
        
        
        
                                                    }


cout << most_bees << endl;





return 0;
}