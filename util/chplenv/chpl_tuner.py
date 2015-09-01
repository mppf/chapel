#!/usr/bin/env python
import os, optparse
from sys import stdout, stderr
from utils import memoize

valid_tuners = set(['none', 'harmony'])

@memoize
def get():
    TUNER_val = os.environ.get('CHPL_TUNER')
    if not TUNER_val:
        TUNER_val = 'none'
    elif TUNER_val not in valid_tuners:
        stderr.write('Warning: Invalid tuner value "{0}"\n'.format(TUNER_val))
        TUNER_val = ''
    return TUNER_val

def _main():
    parser = optparse.OptionParser()
    parser.add_option('-l', '--list', dest='list', action='store_true',
                      default=False, help='display the list of valid tuners')
    (options, args) = parser.parse_args()

    if options.list:
        stdout.write("Valid tuners: {0}\n".format(", ".join(valid_tuners)))
    else:
        TUNER_val = get()
        stdout.write("{0}\n".format(TUNER_val))


if __name__ == '__main__':
    _main()
