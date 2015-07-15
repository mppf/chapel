#!/usr/bin/env python
import os
from sys import stdout, stderr
from utils import memoize

@memoize
def get():
    tuner_val = os.environ.get('CHPL_TUNER')
    if not tuner_val:
        tuner_val = 'none'
    elif tuner_val not in ('none', 'harmony'):
        stderr.write('Warning: Unexpected tuner value {0}\n'.format(tuner_val))
        tuner_val = ''
    return tuner_val

def _main():
    tuner_val = get()
    stdout.write("{0}\n".format(tuner_val))


if __name__ == '__main__':
    _main()
