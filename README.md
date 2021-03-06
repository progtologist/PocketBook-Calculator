SciCalc
==============
This is a scientific calculator for Pocket Book readers with e-ink display (tested only on PB Pro 912).

###Building
Build instructions (with PB Free SDK):
```
$ cmake .
$ ./makearm.sh (or ./makepc.sh to test it in emulator)
$ copy SciCalc to /applications/SciCalc.app
```

###Features
* All common math functions. This program uses fparser library, so almost all functions provided by this library are avaliable (except functions related to complex numbers). Full list is here: http://warp.povusers.org/FunctionParser/fparser.html#identifiers
* User-defined functions\constants.
* History
* Support for multiple screen sizes (only 800x600 and 828x1200 are tested).
* Touchscreen-enabled devices support.

###Screenshot
![](https://github.com/alexeyden/PocketBook-Calculator/raw/master/screenshot.png "Screenshot")
