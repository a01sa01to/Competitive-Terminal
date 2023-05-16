function global:cp-c() {
  Write-Output ">>> Compile a.cpp"
  g++ -o a.exe -std=c++17 -I . -DLOCAL a.cpp
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Compile Error"
    return
  }
  Write-Output ">>> Compile Success"
}

function global:cp-r() {
  Write-Output ">>> Reset"
  Copy-Item settings/template.cpp a.cpp
  Write-Output ">>> Reset Success"
}

function global:cp-t() {
  Write-Output ">>> Test"
  .\a.exe
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

function global:cp-ti() {
  Write-Output ">>> Test (input)"
  Get-Content stdin.txt | .\a.exe
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

function global:cp-to() {
  Write-Output ">>> Test (output)"
  .\a.exe 1> stdout.txt 2> stderr.txt
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}

function global:cp-tio() {
  Write-Output ">>> Test (input, output)"
  Get-Content stdin.txt | .\a.exe 1> stdout.txt 2> stderr.txt
  if ($LASTEXITCODE -ne 0) {
    Write-Output ">>> Test Error"
    return
  }
  Write-Output ">>> Test Success"
}
