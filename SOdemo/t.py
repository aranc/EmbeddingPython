import ctypes
from ctypes import *

import os
path = os.path.dirname(os.path.realpath(__file__))

libfoo = cdll.LoadLibrary(f"{path}/libfoo.so")
libfoo.foo()

