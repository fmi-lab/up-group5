Know-how
========

Building the main README
------------------------

### For GNU/Linux (Ubuntu):

1. Install [pandoc](http://pandoc.org)

    ```
    $ sudo apt-get install pandoc
    ```

2. Use [pandoc](http://pandoc.org) to merge the necessary markdown files: 

    ```
    $ pandoc about.md exercises/README.md resources/README.md --to=markdown_strict > README.md
    ```

