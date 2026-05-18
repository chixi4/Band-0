
int FUN_ram_42018e8e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_420188b8();
  if (iVar2 == 0) {
    return 0x105;
  }
  iVar1 = 0x102;
  if (*(int *)(iVar2 + 0x14) != 0) {
    if (*(char *)(iVar2 + 0x18) != '\0') {
      iVar1 = 0x103;
      iVar3 = FUN_ram_420194e0(*(undefined4 *)(iVar2 + 4),*(int *)(iVar2 + 0x14),iVar2 + 0x1c,0x10);
      if (iVar3 != 0) goto LAB_ram_42018ee8;
      *(undefined1 *)(iVar2 + 0x18) = 0;
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 0x10;
    }
    iVar1 = FUN_ram_4201894e(iVar2);
    if ((iVar1 == 0) && (*(char *)(iVar2 + 0xc) != '\0')) {
      iVar1 = FUN_ram_420193d2(*(int *)(iVar2 + 8),0,*(undefined4 *)(iVar2 + 4),0,
                               *(undefined4 *)(*(int *)(iVar2 + 8) + 0x10));
    }
  }
LAB_ram_42018ee8:
  if (*(int *)(*(int *)(iVar2 + 8) + 4) == 2) {
    FUN_ram_42019f54(0);
  }
  iVar3 = *(int *)(iVar2 + 0x2c);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
  }
  **(int **)(iVar2 + 0x30) = iVar3;
  thunk_FUN_ram_40390608(iVar2);
  return iVar1;
}

