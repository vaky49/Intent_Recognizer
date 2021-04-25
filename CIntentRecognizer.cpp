#include "CIntentRecognizer.h"
#include <cctype>


IntentRecognizer::CIntentRecognizer::CIntentRecognizer()
{
}


IntentRecognizer::CIntentRecognizer::~CIntentRecognizer()
{
}

void IntentRecognizer::CIntentRecognizer::fillVectors()
{
    // Fill keywords for weather. Modify the reserve value to add more keywords
    m_weatherKeywords.reserve(WEATHER_KEYWORDS_SIZE);
    m_weatherKeywords.push_back("weather");
    m_weatherKeywords.push_back("temprature");
    m_weatherKeywords.push_back("hot");
    m_weatherKeywords.push_back("cold");
    m_weatherKeywords.push_back("rain");
    m_weatherKeywords.push_back("snow");
    m_weatherKeywords.push_back("sun");

    // Fill keywords for prepositions keywords. Modify the reserve value to add more keywords
    m_prepKeywords.reserve(PREPOSITIONS_KEYWORDS_SIZE);
    m_prepKeywords.push_back("in");
    m_prepKeywords.push_back("here");
    m_prepKeywords.push_back("at");
    m_prepKeywords.push_back("of");
    m_prepKeywords.push_back("from");

    // Fill keywords for facts related keywords. Modify the reserve value to add more keywords
    m_factKeywords.reserve(FACT_KEYWORDS_SIZE);
    m_factKeywords.push_back("fact");
    m_factKeywords.push_back("news");
    m_factKeywords.push_back("information");
    m_factKeywords.push_back("knowledge");

    // Fill keywords for Request related keywords. Modify the reserve value to add more keywords
    m_reqKeywords.reserve(REQUEST_KEYWORDS_SIZE);
    m_reqKeywords.push_back("how");
    m_reqKeywords.push_back("How");
    m_reqKeywords.push_back("what");
    m_reqKeywords.push_back("What");
    m_reqKeywords.push_back("get");
    m_reqKeywords.push_back("Get");
    m_reqKeywords.push_back("tell");
    m_reqKeywords.push_back("Tell");
    m_reqKeywords.push_back("provide");
    m_reqKeywords.push_back("Provide");

    m_reqKeywords.push_back("is");
    m_reqKeywords.push_back("Is");

    m_reqKeywords.push_back("want");
    m_reqKeywords.push_back("Want");

    m_reqKeywords.push_back("share");
    m_reqKeywords.push_back("Share");

}



std::string IntentRecognizer:: CIntentRecognizer:: run(const std::string &i_input)
{
    fillVectors();

    // Initialize flags for representing presence of keywords in the query
    bool hasWA = false;
    bool hasLA = false;
    bool hasFact = false;
    bool firstIsReqWord = false;

    // Initialize return string
    std::string intent = "No Intent Found";
    std::stringstream iss(i_input);
    std::string currWord;
    int count = 0;

    // Loop through words in query and check for keywords to set the corresponding flags
    while (iss >> currWord)
    {
        if(count< 3)  // In a most of the grammatically correct statement, request keywords is present in first 3 words
        {
            firstIsReqWord = firstIsReqWord || std::any_of(m_reqKeywords.begin(), m_reqKeywords.end(),
                                         [currWord](const std::string & i_word) { return currWord.compare(i_word) == 0; });
        }
        hasWA =  hasWA || std::any_of(m_weatherKeywords.begin(), m_weatherKeywords.end(),
                                          [currWord](std::string i_word) { return currWord.find(i_word) != std::string::npos; });

        hasLA =  hasLA || std::any_of(m_prepKeywords.begin(), m_prepKeywords.end(),
                                          [currWord](std::string i_word) { return currWord.compare(i_word) ==0; });

        hasFact = hasFact || std::any_of(m_factKeywords.begin(), m_factKeywords.end(),
                                         [currWord](std::string i_word) { return currWord.find(i_word) != std::string::npos; });

        count++;
    }


    if(hasWA && hasLA && firstIsReqWord)
    {
        intent = "Get Weather City";
    }
    else if(hasWA && firstIsReqWord)
    {
        intent = "Get Weather";
    }
    else if(hasFact && firstIsReqWord)
    {
        intent = "Get Facts";
    }
    else
    {
        // For MISRA
    }

    return intent;

}
