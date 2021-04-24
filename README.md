The intent recognition implementation can be used to extract intent from a query about weather or a fact. 

System requirement:
- cmake with min version 3.13 

clone the repo and run the following command to build it:

mkdir build && cd build && cmake .. && make

If cmake runs default for Visual Studio or any other compiler, to generate the code on Windows with make, run it with flag -G "MSYS Makefiles" as follows: 

mkdir build && cd build && cmake .. -G "MSYS Makefiles" && make

Once the build is complete, it will make and executable Intent.exe which can be run with following arguments:

1) With string input such as Intent.exe "Get me today's weather"
2) Run Tests: To execute the unit tests