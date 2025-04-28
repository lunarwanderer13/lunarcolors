def fgcolor(r: int = 255, g: int = 255, b: int = 255) -> None:
    if r > 255 or g > 255 or b > 255 or r < 0 or g < 0 or b < 0:
        pass
    else:
        print(f'\x1b[38;2;{r};{g};{b}m', end='')

def bgcolor(r: int = 255, g: int = 255, b: int = 255) -> None:
    if r > 255 or g > 255 or b > 255 or r < 0 or g < 0 or b < 0:
        pass
    else:
        print(f'\x1b[48;2;{r};{g};{b}m', end='')

def style(n: int = 0) -> None:
    if n > 5 or n < 0:
        pass
    else:
        match n:
            case 1:
                n = 1 # bold
            case 2:
                n = 3 # italic
            case 3:
                n = 4 # underline
            case 4:
                n = 9 # strikethrough
            case 5:
                n = 8 # invisible
            case _:
                n = 0 # reset
        print(f'\x1b[{n}m', end='')

def reset() -> None:
    print('\x1b[0;39;49m', end='')

def clear_screen() -> None:
    print('\x1b[2J\x1b[1;1H', end='')
