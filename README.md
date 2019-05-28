# pypackage

This is an example python package that extends boost wrapped C++ code.

## Dependencies

* Boost Python 1.67.0

Built with Python 3.6.5 and used in venv created with virtualenvwrapper 4.8.2.

## Install

1. Update the paths to Boost Python in `setup.py` during the `Extension` definition.

2. ` pip install . `

## Uninstall

` pip uninstall pypackage `

## Use

INCOMPLETE IMPLEMENTATION.

The problem here is that the compiled module \_centaur that is supposed to be
part of `pypackage.centaur` cannot be found. However, it is correctly installed
in the virtual environment's `site-packages` after its compilation.

Reproduce the problem simply by attempting to import it:

```python
import pypackage.centaur._centaur
```

## Notes

Built and tested only on macOS. Linux is a target of interest, Windows is not.

## Contact

Thomas.
