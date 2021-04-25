
#ifndef INTENT_CINTENTRECOGNIZER_H
#define INTENT_CINTENTRECOGNIZER_H

#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <string>

#define WEATHER_KEYWORDS_SIZE 10
#define PREPOSITIONS_KEYWORDS_SIZE 8
#define FACT_KEYWORDS_SIZE 8
#define REQUEST_KEYWORDS_SIZE 20

namespace IntentRecognizer  // namespace for Intent Recognizer
{

   /**
    * Class used for Intent Recognition.
    */
   class CIntentRecognizer
    {

    private:

        std::vector<std::string> m_weatherKeywords;     ///< holds the keywords corresponds to weather query in a statement
        std::vector<std::string> m_prepKeywords;        ///< holds the keywords corresponds to prepositions in a statement
        std::vector<std::string> m_factKeywords;        ///< holds the keywords corresponds to fact query
        std::vector<std::string> m_reqKeywords;         ///< holds the keywords corresponds to request in a statement

       /**
        * Member function to fill the data members with keywords
        */
        void fillVectors();


    public:

        /**
         * Constructor for the class
         */
        CIntentRecognizer();

        /**
         * Run function which runs the intent recognition on a string input.
         *
         * @param[in] i_input input query in which intent recognition to be run
         *
         * @return    string representing intent : Get Weather, Get Weather City, Get Facts, No Intent Found
         */
        std::string run(const std::string &i_input);


        /**
         * Destructor for the class
         */
        ~CIntentRecognizer();

    };

}


#endif //INTENT_CINTENTRECOGNIZER_H
