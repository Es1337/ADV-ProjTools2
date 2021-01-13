#include <iostream>
#include <string>

class Sample
{
public:
	Sample() { label = "Empty"; }
	Sample(std::string setLabel) : label{setLabel} {}
	
	Sample& operator=(Sample other)
	{
		label = other.label;
		return *this;
	}

	std::string getLabel() { return label; }
	void displayDoge() { 
		std::cout << R"(
                   ∩┐╜              ∩┐╜
                  ▌▒∩┐╜           ∩┐╜▀▒∩┐╜
                  ▌▒∩┐╜∩┐╜        ∩┐╜▀▒∩┐╜∩┐╜∩┐╜
                 ∩┐╜∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
               ∩┐╜∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜█▒∩┐╜∩┐╜█▒∩┐╜
             ∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▀▒∩┐╜
            ▐▒∩┐╜∩┐╜∩┐╜▄▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▄▒∩┐╜∩┐╜
            ▌░∩┐╜∩┐╜∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▄▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜█▒∩┐╜
           ▐░∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
           ▌░∩┐╜∩┐╜∩┐╜∩┐╜▄▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
          ▌▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▄░▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
          ▐▒∩┐╜∩┐╜∩┐╜∩┐╜▀▒∩┐╜∩┐╜▄▒▄▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
          ▐▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▄▒∩┐╜∩┐╜▄▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
           ▌▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
           ▐▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▄▒∩┐╜∩┐╜
            ∩┐╜▄▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▄▒∩┐╜∩┐╜∩┐╜∩┐╜
              ∩┐╜▄▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
                ∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜▀▒∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜
                   ∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜∩┐╜)" << '\n';
	
	}

private:
	std::string label;
};