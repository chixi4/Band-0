
int FUN_ram_4205b708(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(uint *)(param_1 + 0x80) < 6) {
    return -1;
  }
  if (*(int *)(param_1 + 0x6c) != 5) {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar1 = 0;
    iVar2 = FUN_ram_4206ca98(*(undefined4 *)(param_1 + 0x1c),*puVar3,*(undefined4 *)(param_1 + 0x8c)
                             ,*(undefined4 *)(param_1 + 0x88));
    if (iVar2 < 0) {
      return iVar2;
    }
    if ((*(char *)(param_1 + 0xc4) == '\0') || (iVar2 != 0)) {
      FUN_ram_420696e2(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),*puVar3,iVar2
                      );
      return iVar2;
    }
  }
  return 0;
}

