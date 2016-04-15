CXX=clang++

all: h2f32

h2f32: h2f32.cpp
	$(CXX) $< -o $@
