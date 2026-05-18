
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42033ab8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  iVar5 = *(int *)(_DAT_ram_3fcb6bc8 + 0x314);
  iVar1 = _DAT_ram_3fcb6bc8 + 0x2cc;
  iVar2 = 0;
  iVar4 = 0;
  do {
    if (iVar5 <= iVar2) {
      return -1;
    }
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_22 = 0;
    iVar3 = FUN_ram_420338fe(param_1,&uStack_28);
    if ((iVar3 == 0) || (iVar3 = FUN_ram_420338fe(iVar1,param_1), iVar3 == 0)) {
      if ((int)(uint)*(byte *)(param_1 + 7) <= iVar4) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x17;
  } while( true );
}

