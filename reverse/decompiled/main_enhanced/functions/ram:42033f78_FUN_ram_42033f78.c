
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42033f78(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined1 auStack_28 [20];
  
  FUN_ram_42033c94();
  FUN_ram_4202cf60(auStack_28,param_1);
  iVar2 = _DAT_ram_3fcb6bc8;
  iVar4 = *(int *)(_DAT_ram_3fcb6bc8 + 0x108);
  iVar1 = FUN_ram_42033922(auStack_28,_DAT_ram_3fcb6bc8,iVar4);
  if (iVar1 == -1) {
    if (2 < iVar4) {
      return 0x1b;
    }
    *(int *)(iVar2 + 0x108) = iVar4 + 1;
    iVar1 = iVar4;
  }
  iVar1 = FUN_ram_4039c11e(iVar1 * 0x58 + iVar2,param_1);
  sVar3 = *(short *)(iVar2 + 0x10c) + 1;
  *(short *)(iVar2 + 0x10c) = sVar3;
  *(short *)(iVar1 + 8) = sVar3;
  iVar2 = FUN_ram_42034ac4();
  if ((iVar2 == 0) && (0xfffa < *(ushort *)(_DAT_ram_3fcb6bc8 + 0x10c))) {
    iVar2 = FUN_ram_42033ebe();
  }
  return iVar2;
}

