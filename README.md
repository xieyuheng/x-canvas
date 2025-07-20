# My Canvas

A [uxn](https://100r.co/site/uxn.html) inspired canvas for C.

## Install

Dependencies:

- debian: `sudo apt install libx11-dev`

Compile:

```
git clone https://github.com/xieyuheng/x-canvas
cd x-canvas
make -j
make test
```

The compiled binary `./bin/app` is the command-line program.

## Development

```shell
make -j       # compile src/ files to lib/ and bin/
make run      # compile and run the command-line program
make test     # compile and run test
make clean    # clean up compiled files
```

Using [tsan (ThreadSanitizer)](https://github.com/google/sanitizers/wiki/threadsanitizercppmanual)
to test data race in parallel program:

```shell
make clean && TSAN=true make -j
```

## License

[GPLv3](LICENSE)
