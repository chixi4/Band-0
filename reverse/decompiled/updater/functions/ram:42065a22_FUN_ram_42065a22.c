
undefined4 FUN_ram_42065a22(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte abStack_110 [256];
  
  uVar2 = (*(code *)&SUB_ram_400104a8)();
  (*(code *)&SUB_ram_40010488)(abStack_110,0x80,0x100);
  for (iVar3 = 0; *(byte *)(iVar3 + 0x3c0733c4) != 0; iVar3 = iVar3 + 1) {
    abStack_110[*(byte *)(iVar3 + 0x3c0733c4)] = (byte)iVar3;
  }
  if ((0xd < uVar2) && (uVar2 % 5 == 4)) {
    for (iVar3 = 0; uVar4 = (uint)param_1[iVar3], uVar4 != 0; iVar3 = iVar3 + 1) {
      if ((iVar3 == 0) || (iVar3 % 5 != 4)) {
        if (abStack_110[uVar4] == 0x80) {
          return 0;
        }
      }
      else if (uVar4 != 0x2d) {
        return 0;
      }
    }
    bVar1 = param_1[uVar2 - 1];
    uVar4 = FUN_ram_4206593c(param_1);
    if (bVar1 == uVar4) {
      uVar4 = 5;
      while (((abStack_110[param_1[uVar4]] ^ abStack_110[*param_1]) & 0x10) == 0) {
        uVar4 = uVar4 + 5;
        if (uVar2 <= uVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}

