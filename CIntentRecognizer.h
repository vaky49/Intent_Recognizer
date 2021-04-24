
#ifndef INTENT_CINTENTRECOGNIZER_H
#define INTENT_CINTENTRECOGNIZER_H

#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <string>

namespace IntentRecognizer
{


    class CIntentRecognizer
    {

    private:

        std::vector<std::string> m_weatherKeywords;
        std::vector<std::string> m_prepKeywords;
        std::vector<std::string> m_factKeywords;

        void fillVectors();


    public:

        CIntentRecognizer();

        std::string run(std::string i_input);

        ~CIntentRecognizer();

    };

}


#endif //INTENT_CINTENTRECOGNIZER_H
