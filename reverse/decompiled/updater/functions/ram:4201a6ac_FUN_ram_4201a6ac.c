
void FUN_ram_4201a6ac(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar4 = 0;
  uVar2 = 0;
  do {
    uVar3 = FUN_ram_4201a69c(iVar1);
    if (uVar3 < 0x40) {
      uVar5 = (*(code *)&SUB_ram_400108c0)(1,0,uVar3);
      uVar4 = uVar4 | (uint)uVar5;
      uVar2 = uVar2 | (uint)((ulonglong)uVar5 >> 0x20);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  FUN_ram_4201b76a(uVar4,uVar2);
  return;
}

