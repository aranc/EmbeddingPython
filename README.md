# EmbeddingPython

This github contains a demo for embedding Python inside of C (Linux / WSL)

The demo is inside the `demo` folder, so `cd demo` to use it. (Please ignore the `SOdemo` folder, it contains a simpler demo of compiling a Shared Object library and using it from C / Python).

to compile:
`. compile`

to run:
`./main`

it will open a command / response loop, e.g:
```
run "hello world" test:
hello world

GO GO GO
>>> cat
mewo
>>> dog
woof
>>> 1
1
>>> 2
4
>>> 3
9
>>> 4
16
>>> pdb
> /home/aran/EmbeddingPython/demo/crazy_python_code.py(18)parse_command()
-> return "all bugs were removed"
(Pdb) c
all bugs were removed
>>> parabola
:D
>>> quit
```

(The `parabola` command plots a parabola using matplotlib and numpy. The `pdb` command opens the Python debugger)

And you can change `crazy_python_code.py` even after compiling to add more commands and experiments to the demo
