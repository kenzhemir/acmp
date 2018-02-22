Param(
  [string]$n
)
mkdir Problem$n
Copy-Item './template.cpp' Problem$n/Solution$n.cpp
Copy-Item './template.py' Problem$n/Solution$n.py
Copy-Item './template.md' Problem$n/readme.md
cd Problem$n
$env:Path = '.'