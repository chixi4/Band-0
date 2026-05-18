
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42018b14(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 == (undefined4 *)0x0) {
LAB_ram_42018b04:
    uVar3 = 0x102;
  }
  else {
    iVar1 = FUN_ram_42019372();
    if (iVar1 == 0) {
      return 0x105;
    }
    if (*(int *)(iVar1 + 4) == 0) {
      iVar5 = FUN_ram_420188a0();
      if (iVar5 == 0) goto LAB_ram_42018b04;
      iVar5 = FUN_ram_42018a8a();
      if (iVar1 == iVar5) {
        return 0x1501;
      }
    }
    puVar2 = (undefined4 *)FUN_ram_420188d0(iVar1);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0x101;
    }
    else {
      *(bool *)(puVar2 + 4) = param_2 == -2;
      iVar5 = *(int *)(iVar1 + 4);
      *param_3 = *puVar2;
      if (iVar5 == 2) {
        FUN_ram_42019f54(*(undefined4 *)(iVar1 + 0xc));
      }
      if (*(int *)(iVar1 + 4) - 2U < 2) {
        FUN_ram_4207bb4e(_DAT_ram_3fcb66cc,0);
      }
      if (param_2 != -2) {
        if (param_2 - 1U < 0xfffffffe) {
          uVar4 = (param_2 - 1U) + *(int *)(iVar1 + 0x14) & -*(int *)(iVar1 + 0x14);
        }
        else {
          uVar4 = *(uint *)(iVar1 + 0x10);
        }
        uVar3 = FUN_ram_420195a0(iVar1,0,uVar4);
        return uVar3;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

