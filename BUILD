clang++ -mmacosx-version-min=10.10 --stdlib=libc++ -O3 -flto -march=native -fvisibility-inlines-hidden -fvisibility=hidden --std=c++11 ./do_something_else.cpp -fPIC -shared -o libdo_something_else.dylib
clang++ -mmacosx-version-min=10.10 --stdlib=libc++ -O3 -flto -march=native -fvisibility-inlines-hidden -fvisibility=hidden --std=c++11 ./example.cpp -fPIC -shared -o libexample.dylib -L. -ldo_something_else
clang++ -mmacosx-version-min=10.10 --stdlib=libc++ -O3 -flto -march=native -fvisibility-inlines-hidden -fvisibility=hidden --std=c++11 ./example_users.cpp -fPIC -shared -o libexample_users.dylib -L. -lexample
clang++ -mmacosx-version-min=10.10 --stdlib=libc++ -O3 -flto -march=native -fvisibility-inlines-hidden -fvisibility=hidden --std=c++11 ./main.cpp -fPIE -o main -L. -lexample_users

