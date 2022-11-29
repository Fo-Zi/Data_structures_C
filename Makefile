dependencies:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o dep_graph

clean:
	rm -rf build
	mkdir build

buildit:
	cd build && cmake .. && make

test:
	cd build && make && ctest -VV
