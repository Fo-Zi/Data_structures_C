prepare:
	cmake -H. -Bbuild -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug -DENABLE_COVERAGE=On

buildit:
	cmake --build build --config Debug --target coverage -j4

clean:
	rm -rf build
	mkdir build

test:
	cd build && make && ctest -VV

dependencies:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o dep_graph