import numpy as np
from matplotlib import pyplot as plt
import re

# Note: you can change this code without re-compiling anything!!!

def parse_command(cmd):
    cmd = cmd.strip()

    if cmd == "cat":
        return "mewo"

    if cmd == "dog":
        return "woof"

    if cmd == "pdb":
        import pdb; pdb.set_trace() # Start the debugger
        return "all bugs were removed"

    if cmd == "parabola":
        X = np.linspace(-10, 10, 100)
        Y = X * X
        plt.plot(X, Y)
        plt.show()
        return ":D"

    match = re.fullmatch("[0-9]+", cmd)
    if match:
        number = int(cmd)
        return str(number * number)

    return "Unkown command: " + cmd
