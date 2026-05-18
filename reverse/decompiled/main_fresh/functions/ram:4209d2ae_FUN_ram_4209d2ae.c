
char FUN_ram_4209d2ae(uint param_1)

{
  char cVar1;
  
  if (param_1 == 0x100) {
    cVar1 = '\x02';
  }
  else if (param_1 < 0x101) {
    cVar1 = '\x05';
    if (param_1 != 10) {
      if (param_1 < 0xb) {
        cVar1 = '\x03';
        if (((param_1 != 2) && (cVar1 = '\x04', param_1 != 8)) && (cVar1 = '\f', param_1 == 1)) {
          return '\0';
        }
      }
      else {
        cVar1 = '\x06';
        if ((param_1 != 0x20) && (cVar1 = '\f', param_1 == 0x80)) {
          return '\x01';
        }
      }
    }
  }
  else {
    cVar1 = '\t';
    if (param_1 != 0x1000) {
      if (param_1 < 0x1001) {
        cVar1 = '\a';
        if (param_1 != 0x400) {
          return (param_1 != 0x800) * '\x04' + '\b';
        }
      }
      else {
        cVar1 = '\n';
        if (param_1 != 0x2000) {
          return (param_1 != 0x4000) + '\v';
        }
      }
    }
  }
  return cVar1;
}

