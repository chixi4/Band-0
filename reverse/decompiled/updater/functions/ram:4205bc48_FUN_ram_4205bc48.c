
undefined8 FUN_ram_4205bc48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(uint *)(param_1 + 0x80) < 3) {
    return 0xffffffffffffffff;
  }
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
  *(undefined4 *)(param_1 + 0x80) = 4;
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 8) = 0xffffffff;
  do {
    if (4 < *(uint *)(param_1 + 0x80)) {
      *(undefined4 *)(param_1 + 0x80) = 6;
      iVar4 = *(int *)(param_1 + 0x24);
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar1 = *(int *)(iVar4 + 0x10);
      if ((iVar3 < 1) && ((iVar3 != 0 || (iVar1 == 0)))) {
        *(undefined1 *)(iVar4 + 0x2c) = 1;
        iVar1 = 0;
        iVar3 = 0;
      }
LAB_ram_4205bc9c:
      return CONCAT44(iVar3,iVar1);
    }
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar2 = 0;
    iVar1 = FUN_ram_4206ca98(*(undefined4 *)(param_1 + 0x1c),*puVar5,*(undefined4 *)(param_1 + 0x8c)
                             ,*(undefined4 *)(param_1 + 0x88));
    puVar5[1] = iVar1;
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        iVar1 = -0x7007;
      }
      else {
        iVar1 = -1;
      }
      iVar3 = -1;
      goto LAB_ram_4205bc9c;
    }
    FUN_ram_420696e2(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),*puVar5,iVar1);
  } while( true );
}

