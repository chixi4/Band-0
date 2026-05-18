
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42018bc6(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    return 0x102;
  }
  if ((param_4 != (undefined4 *)0x0) && (param_3 <= *(uint *)(param_1 + 0x10))) {
    iVar1 = FUN_ram_42019372();
    if (iVar1 == 0) {
      return 0x105;
    }
    if ((*(int *)(iVar1 + 4) != 0) || (iVar2 = FUN_ram_420188a0(), iVar2 != 0)) {
      iVar2 = FUN_ram_42018a8a();
      if (iVar1 == iVar2) {
        return 0x1501;
      }
      puVar3 = (undefined4 *)FUN_ram_420188d0(iVar1);
      if (puVar3 == (undefined4 *)0x0) {
        return 0x101;
      }
      if (*(int *)(iVar1 + 4) == 2) {
        FUN_ram_42019f54(*(undefined4 *)(iVar1 + 0xc));
      }
      if (*(int *)(iVar1 + 4) - 2U < 2) {
        FUN_ram_4207bb4e(_DAT_ram_3fcb66cc,0);
      }
      *(undefined1 *)((int)puVar3 + 0x19) = 1;
      puVar3[5] = param_3;
      *(bool *)(puVar3 + 4) = param_2 == -2;
      *param_4 = *puVar3;
      return 0;
    }
  }
  return 0x102;
}

