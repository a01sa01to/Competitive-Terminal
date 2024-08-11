Write-Output ">>> Load functions"

function global:cp-c() {
  Write-Output ">>> Compile"
  g++ -o a.exe -std=gnu++2b -I . -DLOCAL -D_GLIBCXX_DEBUG -O2 -Wall -mtune=native -march=native -fconstexpr-depth=2147483647 -fconstexpr-loop-limit=2147483647 -fconstexpr-ops-limit=2147483647 main.cpp
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Compile Error"
    return
  }
  Write-Output ">>> Compile Success"
}

Write-Output ">>> Loaded function (cp-c)"

function global:cp-r() {
  Write-Output ">>> Reset"
  Copy-Item settings/template.cpp main.cpp
  Write-Output ">>> Reset Success"
}

Write-Output ">>> Loaded function (cp-r)"

function global:cp-t() {
  Write-Output ">>> Test"
  .\a.exe
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

Write-Output ">>> Loaded function (cp-t)"

function global:cp-ti() {
  Write-Output ">>> Test (input)"
  Get-Content stdin.txt -Raw | .\a.exe
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

Write-Output ">>> Loaded function (cp-ti)"

function global:cp-to() {
  Write-Output ">>> Test (output)"
  .\a.exe 1> stdout.txt 2> stderr.txt
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

Write-Output ">>> Loaded function (cp-to)"

function global:cp-tio() {
  Write-Output ">>> Test (input, output)"
  Get-Content stdin.txt -Raw | .\a.exe 1> stdout.txt 2> stderr.txt
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

Write-Output ">>> Loaded function (cp-tio)"

function global:cp-b() {
  Write-Output ">>> Bundle"
  oj-bundle -I /path/to/library-root main.cpp > bundle.cpp
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Bundle Error"
    return
  }
  Write-Output ">>> Bundle Success"
  Get-Content bundle.cpp | Set-Clipboard
  Write-Output ">>> Copied to clipboard"
}

Write-Output ">>> Loaded function (cp-b)"

Write-Output ">>> All done!"
