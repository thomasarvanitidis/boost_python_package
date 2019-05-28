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

```python
import centaur
centaur.add([1, 2, 3], [1, 2, 3])
centaur.add([1, 2], [1, 2])
```

## Notes

Built and tested only on macOS. Linux is a target of interest, Windows is not.

## Contact

Thomas.
