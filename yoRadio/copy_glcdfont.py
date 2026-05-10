Import("env")
import shutil
from pathlib import Path

src = Path("fonts/glcdfont.c")
dst = Path(".pio/libdeps") / env["PIOENV"] / "Adafruit GFX Library" / "glcdfont.c"

if src.exists():
    shutil.copy2(src, dst)
    print(f"[glcdfont] Скопійовано {src} -> {dst}")
else:
    print(f"[glcdfont] ПОМИЛКА: не знайдено {src}")
