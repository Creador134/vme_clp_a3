if not exist Fonts md Fonts

fontToTga.exe -size=17 Î¢ÈíÑÅºÚ Fonts\MicrosoftYaHei17
fontToTga.exe -bold -size=17 Î¢ÈíÑÅºÚ Fonts\MicrosoftYaHeiBold17

PATH D:\Tools\Bohemia Interactive\Tools\TexView 2;%PATH%
for %%a in (Fonts\*.tga) do (
    Pal2PacE %%a
    del %%a
)
pause