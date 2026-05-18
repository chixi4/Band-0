
uint FUN_ram_42078e5a(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0x32);
  if (cVar1 == '\x03') {
    uVar2 = (*(uint *)(param_1 + 0xc) >> 0xf & 1) + 2;
  }
  else {
    uVar2 = 6;
    if (cVar1 != '\x04') {
      return (uint)(cVar1 != '\x01');
    }
  }
  return uVar2;
}

