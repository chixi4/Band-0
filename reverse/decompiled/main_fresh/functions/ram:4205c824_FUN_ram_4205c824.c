
undefined4 FUN_ram_4205c824(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint extraout_a2;
  undefined8 uVar3;
  undefined4 auStack_14 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = auStack_14;
  }
  uVar3 = CONCAT44(param_2,*(undefined4 *)*param_1);
  if (param_3 != 0) goto LAB_ram_4205c84a;
  iVar1 = FUN_ram_403974ca(*(undefined4 *)*param_1,param_2,0xffffffff);
  do {
    if (iVar1 == 1) {
      return 0;
    }
    uVar3 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
LAB_ram_4205c84a:
    puVar2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
    iVar1 = FUN_ram_403974ca((int)uVar3,puVar2,param_3 / 10);
  } while (iVar1 != 0);
  *puVar2 = 0;
  return 0xffffffff;
}

