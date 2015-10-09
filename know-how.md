Know-how
========

Building the main README
------------------------

1. Install pandoc

<http://pandoc.org>


2. Use pandoc to merge the necessary markdown files: 

$ pandoc about.md exercises/README.md resources/README.md --to=markdown_strict > README.md

