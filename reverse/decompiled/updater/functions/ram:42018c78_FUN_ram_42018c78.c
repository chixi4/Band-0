
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42018c78(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_ram_420188b8();
  if (param_2 == 0) {
    return 0x102;
  }
  if (iVar1 == 0) {
LAB_ram_42018c90:
    uVar2 = 0x105;
  }
  else {
    if ((*(char *)(iVar1 + 0x19) == '\0') && (*(int *)(iVar1 + 0x14) != 0)) {
      return 0x103;
    }
    if (*(int *)(iVar1 + 4) != param_2) {
      iVar3 = FUN_ram_42019372(param_2);
      if (iVar3 == 0) goto LAB_ram_42018c90;
      iVar4 = *(int *)(iVar3 + 4);
      *(int *)(iVar1 + 8) = iVar3;
      *(undefined1 *)(iVar1 + 0xc) = param_3;
      if (iVar4 == 2) {
        FUN_ram_42019f54(*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
      }
      if (*(int *)(iVar3 + 4) - 2U < 2) {
        FUN_ram_4207bb4e(_DAT_ram_3fcb66cc,0);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

