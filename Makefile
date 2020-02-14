lab1: lab1.cpp implementation.cpp header.hpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -Wwrite-strings header.hpp implementation.cpp lab1.cpp -o lab1

run: lab1
	-./lab1

.PHONY: run
