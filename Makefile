prepare:
	cmake -H. -Bbuild -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug -DENABLE_COVERAGE=On

clean:
	rm -rf build
	mkdir build


buildit:
	cmake --build build --config Debug --target coverage -j4


test:
	cd build && make && ctest -VV

dependencies:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o dep_graph