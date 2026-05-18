
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42088b26(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if (((0xe < (uint)(param_4 - param_3)) &&
      (iVar1 = FUN_ram_4039c0e0(param_3 + 1,"ime before social plans.",3), iVar1 == 0)) &&
     (((*(byte *)(param_2 + 1) & 8) == 0 ||
      (iVar1 = FUN_ram_4039c0e0(0x3fcc3fc8,param_3 + 4,4), iVar1 != 0)))) {
    FUN_ram_4039c11e(0x3fcc3fc8,param_3 + 4,4);
    cVar2 = '\0';
    uVar5 = 0;
    pcVar3 = (char *)(param_3 + 8);
    do {
      if (*pcVar3 != -0x23) {
        return 0x306a;
      }
      uVar4 = (uint)(byte)pcVar3[1];
      if (param_4 - (int)pcVar3 <= (int)(uVar4 + 1)) {
        return 0x306a;
      }
      if (uVar4 < 5) {
        return 0x306a;
      }
      iVar1 = FUN_ram_4039c0e0(pcVar3 + 2,0x3fcb7e64,3);
      if (iVar1 != 0) {
        return 0x306a;
      }
      if (pcVar3[5] != '\x04') {
        return 0x306a;
      }
      pcVar3 = pcVar3 + uVar4 + 2;
      cVar2 = cVar2 + '\x01';
      uVar5 = (uVar4 - 5) + uVar5 & 0xffff;
    } while (0 < param_4 - (int)pcVar3);
    param_4 = param_4 - (param_4 - (param_3 + 8) & 0xffffU);
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(uVar5);
    if (iVar1 != 0) {
      do {
        iVar1 = FUN_ram_4039c11e(iVar1,param_4 + 7,*(byte *)(param_4 + 1) - 5);
        cVar2 = cVar2 + -1;
        iVar1 = iVar1 + (*(byte *)(param_4 + 1) - 5);
        param_4 = param_4 + *(byte *)(param_4 + 1) + 2;
      } while (cVar2 != '\0');
      iStack_38 = param_2 + 4;
      iStack_3c = param_2 + 10;
      iStack_34 = param_2 + -0x30;
      if (_DAT_ram_3fcc3fc4 != (code *)0x0) {
        (*_DAT_ram_3fcc3fc4)(&iStack_3c,iVar1 - uVar5,uVar5);
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1 - uVar5);
      return 0;
    }
  }
  return 0x306a;
}

