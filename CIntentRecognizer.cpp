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
    m_weatherKeywords.reserve(10);
    m_weatherKeywords.push_back("weather");
    m_weatherKeywords.push_back("temprature");
    m_weatherKeywords.push_back("hot");
    m_weatherKeywords.push_back("cold");
    m_weatherKeywords.push_back("rain");
    m_weatherKeywords.push_back("snow");
    m_weatherKeywords.push_back("sun");

    m_prepKeywords.reserve(8);
    m_prepKeywords.push_back("in");
    m_prepKeywords.push_back("here");
    m_prepKeywords.push_back("at");
    m_prepKeywords.push_back("of");
    m_prepKeywords.push_back("from");


    m_factKeywords.reserve(8);
    m_factKeywords.push_back("fact");
    m_factKeywords.push_back("news");
    m_factKeywords.push_back("information");
    m_factKeywords.push_back("knowledge");


}



std::string IntentRecognizer:: CIntentRecognizer:: run(std::string i_input)
{
    fillVectors();

    bool hasWA = false;
    bool hasLA = false;
    bool hasFact = false;

    std::string intent = "No Intent Found";
    std::stringstream iss(i_input);
    std::string currWord;

    while (iss >> currWord)
    {

        hasWA =  hasWA || std::any_of(m_weatherKeywords.begin(), m_weatherKeywords.end(),
                                          [currWord](std::string i_word) { return currWord.find(i_word) != std::string::npos; });

        hasLA =  hasLA || std::any_of(m_prepKeywords.begin(), m_prepKeywords.end(),
                                          [currWord](std::string i_word) { return currWord.compare(i_word) ==0; });

        hasFact = hasFact || std::any_of(m_factKeywords.begin(), m_factKeywords.end(),
                                         [currWord](std::string i_word) { return currWord.find(i_word) != std::string::npos; });

    }

    if(hasWA && hasLA)
    {
        intent = "Get Weather City";
    }
    else if(hasWA)
    {
        intent = "Get Weather";
    }
    else if(hasFact)
    {
        intent = "Get Facts";
    }
    else
    {
        // For MISRA
    }

    return intent;

}
