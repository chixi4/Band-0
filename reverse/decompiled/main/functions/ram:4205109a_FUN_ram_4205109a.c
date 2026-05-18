
undefined4 FUN_ram_4205109a(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)FUN_ram_4205032e();
  if (puVar1 != (undefined4 *)0x0) {
    if (((param_3 == 0x10) && (*(char *)(param_2 + 1) == '\x02')) && ((param_2 & 3) == 0)) {
      uStack_14 = *(undefined4 *)(param_2 + 4);
      uVar4 = FUN_ram_420523aa(*(undefined2 *)(param_2 + 2));
      iVar2 = FUN_ram_4205ce5a(*puVar1,&uStack_14,uVar4);
      if (iVar2 == 0) {
        FUN_ram_4205027e(puVar1);
        return 0;
      }
      iVar5 = FUN_ram_4205e6c6();
      if (iVar5 != 0) {
        puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar4 = FUN_ram_4205e6c6(iVar2);
        *puVar3 = uVar4;
      }
    }
    else {
      iVar2 = FUN_ram_4205e6c6(0xfffffff0);
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar4 = FUN_ram_4205e6c6(0xfffffff0);
        *puVar3 = uVar4;
      }
    }
    FUN_ram_4205027e(puVar1);
  }
  return 0xffffffff;
}

