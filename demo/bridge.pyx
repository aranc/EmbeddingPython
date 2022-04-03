import crazy_python_code as crazy

# Note: Cython is a powerfull tool to combine Python code with C/C++
# We however will only use it in this demo to bridge C code and arbitrary Python code
# (i.e. embedding Python code in a C program)

from libc.string cimport strlen

cdef api hello_world():
    print("hello world")

cdef api void parse_command(char *cmd, char* res):
    # aran: I hacked the conversion to/from C strings and Python strings
    # Maybe there is a better way

    # From C string to Python string
    n = strlen(cmd)
    _cmd = "".join([chr(cmd[i]) for i in range(n)])

    # Do the actuall call
    _res = crazy.parse_command(_cmd)

    # From Python string to C string
    for i in range(len(_res)):
        res[i] = ord(_res[i])
    res[i + 1] = 0

