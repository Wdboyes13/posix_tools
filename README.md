# posix_tools

Some random POSIX compliant tools I decided to implement

## Notes on IEEE Std 1003.1-2024 Compliance

Utilities aim to be compliant with IEEE Std 1003.1-2024 Volume XCU\
The following exceptions are present

- On utilities which according to IEEE Std 1003.1-2024 their execution is affected by the LANG, LC_ALL, LC_CTYPE, LC_MESSAGES, and NLSPATH environment variables, the execution of such utilities in this implementation is not affected by the LANG, LC_ALL, LC_CTYPE, LC_MESSAGES, and NLSPATH environment variables.

## Licensing

Copyright (c) 2025-2026 Wdboyes13\
Licensed under the [MIT License](/LICENSE)\
SPDX-License-Identifier: MIT
