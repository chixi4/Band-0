
undefined4 FUN_ram_420511fe(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)FUN_ram_4205032e();
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  if (*(char *)(param_2 + 1) == '\0') {
    iVar2 = FUN_ram_4205ceba(*puVar1);
  }
  else {
    if (((param_3 != 0x10) || (*(char *)(param_2 + 1) != '\x02')) || ((param_2 & 3) != 0)) {
      iVar2 = FUN_ram_4205e6c6(0xfffffff0);
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar5 = FUN_ram_4205e6c6(0xfffffff0);
        *puVar4 = uVar5;
      }
      goto LAB_ram_4205126c;
    }
    uStack_14 = *(undefined4 *)(param_2 + 4);
    uVar5 = FUN_ram_420523aa(*(undefined2 *)(param_2 + 2));
    iVar2 = FUN_ram_4205ce8a(*puVar1,&uStack_14,uVar5);
  }
  if (iVar2 == 0) {
    FUN_ram_4205027e(puVar1);
    return 0;
  }
  iVar3 = FUN_ram_4205e6c6();
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar5 = FUN_ram_4205e6c6(iVar2);
    *puVar4 = uVar5;
  }
LAB_ram_4205126c:
  FUN_ram_4205027e(puVar1);
  return 0xffffffff;
}

