
In this project I made simple circular buffer. I focused mainly on building with CMAKE and testing with GTEST. 


cd build -> cmake .. ; then:
make - build app
make run - run app
make check - valgrind check the app
make br - build and run app
make cbr - clean, build from ground up and run
make test - test
make bt - build and test app
make cbt - clean, build and test app

// Container:
tail points on the last element (oldest)
head points after youngest element
