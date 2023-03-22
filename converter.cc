#include <iostream>
#include <vector>
 
using namespace std;

class SingletonConverter
{
    public:
        static SingletonConverter* getInstance( ) {

            return instance;

        };
        ~SingletonConverter( );
        float fromFtoC(float temp) {
            return ((temp-32)/1.8);
        };

    private:
        SingletonConverter( );
        inline static SingletonConverter* instance;
};

int main() {

    SingletonConverter *c = SingletonConverter::getInstance();

    std:vector<float> allTemps;

    while (1) {
        cout << "Temperature? or -1 to stop entering ";


        float temp;

        std::cin >> temp;

        if (temp == -1.0) { break; }

        float convertedTemp = c->fromFtoC(temp);

        allTemps.push_back(temp);

        cout << convertedTemp << '\n';
    }
    cout << allTemps.size() << " temperatures stored!";

    float avgTemp = 0;
    for (int i = 0; i < allTemps.size(); i++) {
        avgTemp += allTemps[i];
    }
    avgTemp = avgTemp / allTemps.size();

    cout << "avg temp: " << avgTemp << "\n";
};
