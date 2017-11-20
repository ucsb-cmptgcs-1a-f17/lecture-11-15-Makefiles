# lecture-11-15-Makefiles

* https://github.com/ucsb-cmptgcs-1a-f17/ucsb-cmptgcs-1a-f17.github.io/blob/master/_lectures/lect05.md

# the ls-EXAMPLE-EVIL-TROJAN

The ls-EXAMPLE-EVIL-TROJAN is the reason we do NOT typically
put . in our unix PATH.

Instead, we type ./foo or ./hello to ensure that we KNOW we
are running a program from the current directory instead of
a standard program.

(In practice, ls-EXAMPLE-EVIL-TROJAN would be simply called ls,
and it would not have the "echo" in front of `rm -rf /`)

I'm sure can imagine more evil things to do... as someone pointed
out, that is pretty ineffective--it will probably fail.

# The simplest possible compile:

clang++ hello.cpp
g++ hello.cpp

That gives a.out

Next:

clang++ hello.cpp -o hello

which gives hello as our executable instead of a.out

BUT typically software is NOT just one file.

