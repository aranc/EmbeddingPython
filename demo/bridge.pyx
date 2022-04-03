import crazy_python_code as crazy

# Note: Cython is a powerfull tool to combine Python code with C/C++
# We however will only use it in this demo to bridge C code and arbitrary Python code
# (i.e. embedding Python code in a C program)

cdef api str parse_command(str cmd):
    return "mewo"
