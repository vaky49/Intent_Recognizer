#include <iostream>
#include "CIntentRecognizer.h"
#include <gtest/gtest.h>
#include <cstring>


int main(int argc, char* argv[])
{
    // If no arguments, throw message
    if (argc < 2)
    {
        std::cout << "Please provide string to process or run tests using \"Run Tests\" " << std::endl;
    }

    // Argument to run the tests
    else if(std::strcmp(argv[1], "Run Tests") == 0)
    {
        testing::InitGoogleTest(&argc,argv);
        int returnValue = RUN_ALL_TESTS();
    }

    // Process the input signal for Intent Recognition
    else
    {
        std::string input(argv[1]);
        IntentRecognizer::CIntentRecognizer o_intentRecognizer;
        std::string intent = o_intentRecognizer.run(input);
        std::cout<<"Intent: "<<intent<<std::endl;
    }

    return 0;
}

