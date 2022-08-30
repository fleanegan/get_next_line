# Get next line 
This is a project of the cursus of ecole 42. 
The goal is to write a utility which allows to fetch input from various sources (stdin, file, ...)

# Tests
The code is unit tested using the test framework criterion (https://github.com/Snaipe/Criterion). A minimal installation can be done by:
```
wget https://github.com/Snaipe/Criterion/releases/download/v2.3.3/criterion-v2.3.3-linux-x86_64.tar.bz2
tar -xf criterion-v2.3.3-linux-x86_64.tar.bz2
rm criterion-v2.3.3-linux-x86_64.tar.bz2
```
Then, the test suite can be run with 
```
make run_tests
```

NOTE: The test suite uses functions of the preceeding project libft (https://github.com/fleanegan/libft). Prior to running the suite you need to build the library "libft.a" and place it in the ./test/ folder.
