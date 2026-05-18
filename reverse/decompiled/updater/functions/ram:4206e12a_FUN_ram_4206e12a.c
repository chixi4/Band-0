
undefined4 FUN_ram_4206e12a(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(uint *)(param_1 + 0x78) < 4) {
      return 0xffff8e00;
    }
    iVar2 = *(int *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x80) =
         ((uint)*(byte *)(iVar2 + 1) << 0x10 | (uint)*(byte *)(iVar2 + 2) << 8 |
         (uint)*(byte *)(iVar2 + 3)) + 4;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0xc) + 0xd + iVar2;
  if (iVar4 + *(uint *)(param_1 + 0x78) <= iVar2 + 0x414dU) {
    iVar4 = FUN_ram_40399e7e(iVar4,*(undefined4 *)(param_1 + 0x6c));
    uVar1 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0xc) = uVar1;
    if (uVar1 < *(uint *)(param_1 + 0x80)) {
      *(int *)(param_1 + 0x60) = iVar4 + *(int *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x78) = 0;
      FUN_ram_4206e116(param_1);
      return 0xffff9a80;
    }
    *(uint *)(param_1 + 0x78) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 0x60) = iVar2 + 8;
    FUN_ram_4206e116(param_1);
    if (uVar1 < 0x10000) {
      puVar3 = *(undefined1 **)(param_1 + 100);
      *puVar3 = (char)(uVar1 >> 8);
      puVar3[1] = (char)(uVar1 * 0x100 >> 8);
      return 0;
    }
  }
  return 0xffffff92;
}

