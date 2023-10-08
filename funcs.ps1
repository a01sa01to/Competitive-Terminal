Write-Output ">>> Load functions"

function global:cp-c() {
  Write-Output ">>> Compile a.cpp"
  g++ -o a.exe -std=gnu++2b -I . -DLOCAL -O2 -Wall -mtune=native -march=native -fconstexpr-depth=2147483647 -fconstexpr-loop-limit=2147483647 -fconstexpr-ops-limit=2147483647 a.cpp
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Compile Error"
    return
  }
  Write-Output ">>> Compile Success"
}

Write-Output ">>> Loaded functions (cp-c)"

function global:cp-r() {
  Write-Output ">>> Reset"
  Copy-Item settings/template.cpp a.cpp
  Write-Output ">>> Reset Success"
}

Write-Output ">>> Loaded functions (cp-r)"

function global:cp-t() {
  Write-Output ">>> Test"
  .\a.exe
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

Write-Output ">>> Loaded functions (cp-t)"

function global:cp-ti() {
  Write-Output ">>> Test (input)"
  Get-Content stdin.txt -Raw | .\a.exe
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

Write-Output ">>> Loaded functions (cp-ti)"

function global:cp-to() {
  Write-Output ">>> Test (output)"
  .\a.exe 1> stdout.txt 2> stderr.txt
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

Write-Output ">>> Loaded functions (cp-to)"

function global:cp-tio() {
  Write-Output ">>> Test (input, output)"
  Get-Content stdin.txt -Raw | .\a.exe 1> stdout.txt 2> stderr.txt
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

Write-Output ">>> Loaded functions (cp-tio)"
Write-Output ">>> All done!"
