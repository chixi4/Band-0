
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42046c9e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_ram_3fcb4f84 + 0xe4);
  if ((iVar1 != 0) && (*(int *)(_DAT_ram_3fcb4f84 + 0x98) == 5)) {
    if (*(int *)(param_1 + 0x44) == 0) {
      *(uint *)(iVar1 + 0x2e0) = *(uint *)(iVar1 + 0x2e0) | 1 << (*(byte *)(param_1 + 4) & 0x1f);
      FUN_ram_42033fd8(1,0x20,3,0x3c07e980);
    }
    else if ((*(ushort *)(*(int *)(param_1 + 0x44) + 2) & 0x4000) != 0) {
      FUN_ram_42033fd8(1,0x20,3,0x3c07e998,*(undefined1 *)(param_1 + 4));
      *(uint *)(iVar1 + 0x2e4) = *(uint *)(iVar1 + 0x2e4) | 4;
    }
  }
  return 0;
}

