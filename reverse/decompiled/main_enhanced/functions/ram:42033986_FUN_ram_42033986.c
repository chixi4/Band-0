
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42033986(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  iVar5 = *(int *)(_DAT_ram_3fcb6bc8 + 0x27c);
  iVar1 = _DAT_ram_3fcb6bc8 + 0x21c;
  iVar3 = 0;
  iVar4 = 0;
  do {
    if (iVar5 <= iVar3) {
      return -1;
    }
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_22 = 0;
    iVar2 = FUN_ram_420338fe(param_1,&uStack_28);
    if (((iVar2 == 0) || (iVar2 = FUN_ram_420338fe(iVar1,param_1), iVar2 == 0)) &&
       ((*(short *)(param_1 + 8) == 0 || (*(short *)(iVar1 + 8) == *(short *)(param_1 + 8))))) {
      if ((int)(uint)*(byte *)(param_1 + 10) <= iVar4) {
        return iVar3;
      }
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x10;
  } while( true );
}

