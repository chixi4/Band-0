
bool FUN_ram_42033924(char param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(int *)(gp + -0x2b8) + 0x518);
  if ((((uVar3 & 1) == 0) || (bVar1 = true, 0xd < (byte)(param_1 - 1U))) &&
     (bVar1 = false, (uVar3 & 2) != 0)) {
    bVar2 = param_1 - 0x24;
    if ((bVar2 < 0x1d) || (bVar2 = param_1 + 0x9c, bVar2 < 0x2d)) {
      return (bVar2 & 3) == 0;
    }
    if ((byte)(param_1 + 0x6bU) < 0x1d) {
      bVar1 = (param_1 + 0x6bU & 3) == 0;
    }
  }
  return bVar1;
}

