
bool FUN_ram_4205be44(uint param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (param_1 - 1 < 0xfffffffe) {
    bVar1 = *(byte *)(param_2 + 0x39) & 2;
    if ((*(byte *)(param_2 + 0x39) & 2) != 0) {
      bVar1 = 0;
      if ((param_1 != *(uint *)(param_2 + 4)) &&
         (((*(uint *)(param_2 + 4) ^ param_1) & *(uint *)(param_2 + 8)) == 0)) {
        uVar2 = ~*(uint *)(param_2 + 8);
        return (param_1 & uVar2) == uVar2;
      }
    }
  }
  else {
    bVar1 = 1;
  }
  return (bool)bVar1;
}

