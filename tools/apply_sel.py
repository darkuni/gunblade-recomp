#!/usr/bin/env python3
"""Name functions from the RSO static export list (files/RVL_RSOF.sel): tools/sel_funcs.txt = "ADDR name" lines."""
import re
names = {}
for l in open('tools/sel_funcs.txt'):
    a, n = l.split(None, 1)
    names.setdefault(int(a, 16), n.strip())
out, k = [], 0
for l in open('config/symbols.txt'):
    m = re.match(r'(fn_[0-9A-F]{8}) = \.(\w+):0x([0-9A-F]{8});(.*)', l)
    if m and int(m.group(3), 16) in names:
        l = f'{names[int(m.group(3), 16)]} = .{m.group(2)}:0x{m.group(3)};{m.group(4)}\n'; k += 1
    out.append(l)
open('config/symbols.txt', 'w').writelines(out)
print('named from .sel:', k)
