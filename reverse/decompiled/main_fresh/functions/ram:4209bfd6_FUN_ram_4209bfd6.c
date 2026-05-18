
char FUN_ram_4209bfd6(uint param_1)

{
  char cVar1;
  
  if (param_1 == 7) {
    cVar1 = '\x1f';
  }
  else if (param_1 < 8) {
    cVar1 = '*';
    if (param_1 != 3) {
      if (param_1 < 4) {
        cVar1 = '\0';
        if (param_1 != 0) {
          return (param_1 == 2) + '(';
        }
      }
      else {
        cVar1 = '+';
        if ((param_1 != 4) && (cVar1 = '(', param_1 == 6)) {
          return '\x01';
        }
      }
    }
  }
  else {
    cVar1 = '5';
    if (param_1 != 0xb) {
      if (param_1 < 0xc) {
        cVar1 = '.';
        if ((param_1 != 8) && (cVar1 = '(', param_1 == 9)) {
          return '6';
        }
      }
      else {
        cVar1 = '(';
        if (param_1 == 0xc) {
          return '\f';
        }
      }
    }
  }
  return cVar1;
}

