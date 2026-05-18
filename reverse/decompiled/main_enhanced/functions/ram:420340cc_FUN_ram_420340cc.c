
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420340cc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined1 auStack_28 [20];
  
  FUN_ram_42033c94();
  FUN_ram_4202cf60(auStack_28,param_1);
  iVar3 = _DAT_ram_3fcb6bc8;
  iVar1 = *(int *)(_DAT_ram_3fcb6bc8 + 0x218);
  iVar2 = FUN_ram_42033922(auStack_28,_DAT_ram_3fcb6bc8 + 0x110,iVar1);
  if (iVar2 == -1) {
    if (2 < iVar1) {
      return 0x1b;
    }
    *(int *)(iVar3 + 0x218) = iVar1 + 1;
    iVar2 = iVar1;
  }
  iVar2 = iVar2 * 0x58 + iVar3;
  FUN_ram_4039c11e(iVar2 + 0x110,param_1);
  sVar4 = *(short *)(iVar3 + 0x10e) + 1;
  *(short *)(iVar3 + 0x10e) = sVar4;
  *(short *)(iVar2 + 0x118) = sVar4;
  iVar3 = FUN_ram_42034a48();
  if ((iVar3 == 0) && (0xfffa < *(ushort *)(_DAT_ram_3fcb6bc8 + 0x10e))) {
    iVar3 = FUN_ram_42034010();
  }
  return iVar3;
}

