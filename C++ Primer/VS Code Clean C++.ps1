$chapter = 5;

$path = "C:\Projects\Current Projects\C++ Programming Language\C++ Primer\Chapter " + $chapter;

$files =  Get-Childitem -Recurse $path;

foreach($file in $files) {
    if($file.name -match ".exe" -or $file.name -match ".obj" -or $file.name -match ".ilk" -or $file.name -match ".pdb") {
        Write-Host "Removing $($file)";
        Remove-Item $file.FullName;
        
    }
}