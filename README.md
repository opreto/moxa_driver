# CP-132EL PCIe Serial Card Driver for Ubuntu Kernel 6.x

This is a slightly modified driver downloaded from the official website:
https://moxa.com/en/support/product-support/software-and-documentation?psid=56360

From the manufacturer, this was supported up until 6.8, but we're running on 6.17 (as of May 26, 2026). Since they provide source code, we can edit and compile. Small edits were made, described in POWEROX_CHANGES.txt.

## Installation

```bash
cd mxser
sudo ./mxser/mxinstall
```

You can ignore the warnings about this being designed for <6.8. 
If you get C++ compilation errors, you'll need to edit the code further to account for kernel code changes. 