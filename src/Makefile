test: test
	unzip -d ./tests/ ./tests/googletest-release-1.8.0
	cd ./tests/googletest-release-1.8.0/; cmake .; make; sudo make install
	cd ./tests/; cmake .; make; ./MathTests