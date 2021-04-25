#include "gtest/gtest.h"
#include "CIntentRecognizer.h"

using testing::Eq;

namespace {
class testIntentRecognizer : public testing::Test {

    public:
        //textAnalyzer::CTextAnalyzer testObj;
        testIntentRecognizer(){

        }
};
}


/// This test case tests the testIntentRecognizer class
///
/// Input Value: How is the weather today ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_1)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "How is the weather today ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Tell me Today's weather ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_2)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Tell me Today's weather ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Please provide weather information ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_3)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Please provide weather information ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: I want to know today's weather !
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_4)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "I want to know today's weather !";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: is it cold today ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_5)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Is it cold today ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: is it hot today ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_6)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Is it hot today ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: is it raining today ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_7)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Is it raining today ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: is it sunny today ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_8)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Is it sunny today ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: is it going to snow today ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_9)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Is it going to snow today ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: is it snowing today ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_10)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Is it snowing today ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: How is the temprature today ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_11)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "How is the temprature today ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Get me today's temprature !
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_12)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Get me today's temprature !";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Get me today's temprature !
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntent_13)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Can you get me today's temprature !";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: How is the weather in Ulm ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntentCity_1)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "How is the weather in Ulm ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather City", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Get me weather of Ulm ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntentCity_2)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Get me weather of Ulm ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather City", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Tell me weather here ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntentCity_3)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Tell me weather here ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather City", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Get me weather information from Zugspitze ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntentCity_4)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Get me weather information from Zugspitze ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather City", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: How is weather at Zugspitze ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetWeatherIntentCity_5)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "How is weather at Zugspitze ?";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather City", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Tell me an interesting fact ! ?
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetFacts_1)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Tell me an interesting fact !";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Facts", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Tell me an interesting news
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetFacts_2)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Tell me an interesting news !";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Facts", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Tell me an interesting news
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetFacts_3)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Share some interesting knowledge !";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Facts", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Tell me an interesting news
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetFacts_4)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Get me a nice fact !";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Facts", intent);
}

/// This test case tests the testIntentRecognizer class
///
/// Input Value: Tell me an interesting news
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_GetFacts_5)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Provide some fact on weather!";
    std::string intent = testObj.run(input);
    ASSERT_EQ("Get Weather", intent);
}


/// This test case tests the testIntentRecognizer class
///
/// Input Value: Tell me an interesting news
/// The class should return Intent Get Weather
///
/// testtype:   unit
TEST_F(testIntentRecognizer, testWeather_NoIntent)
{
    IntentRecognizer::CIntentRecognizer testObj;
    std::string input = "Whats new toady !";
    std::string intent = testObj.run(input);
    ASSERT_EQ("No Intent Found", intent);
}