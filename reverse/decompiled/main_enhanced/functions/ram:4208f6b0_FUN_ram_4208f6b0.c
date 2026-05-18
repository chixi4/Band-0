
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208f6b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_ram_3fcc4014 + 0xe4);
  if ((iVar1 != 0) && (*(int *)(_DAT_ram_3fcc4014 + 0x98) == 5)) {
    if (*(int *)(param_1 + 0x44) == 0) {
      *(uint *)(iVar1 + 0x2e0) = *(uint *)(iVar1 + 0x2e0) | 1 << (*(byte *)(param_1 + 4) & 0x1f);
      FUN_ram_4207a038(1,0x20,3,&DAT_ram_3c1004b0);
    }
    else if ((*(ushort *)(*(int *)(param_1 + 0x44) + 2) & 0x4000) != 0) {
      FUN_ram_4207a038(1,0x20,3,&DAT_ram_3c1004c8,*(undefined1 *)(param_1 + 4));
      *(uint *)(iVar1 + 0x2e4) = *(uint *)(iVar1 + 0x2e4) | 4;
    }
  }
  return 0;
}

