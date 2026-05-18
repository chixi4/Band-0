
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039c81e(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 0;
  puStack_30 = (undefined4 *)0x0;
  uStack_2c = 0;
  uStack_24 = 0;
  FUN_ram_4039bec2(&DAT_ram_3fcb5370);
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if ((iVar1 != 0) && (iVar1 = FUN_ram_4039d0ae(), iVar1 != 1)) {
    FUN_ram_4039beb0(&DAT_ram_3fcb5370);
  }
  if (DAT_ram_3fcb537e == '\0') {
    return;
  }
  iVar1 = (*(code *)&SUB_ram_40011b8c)(&uStack_28);
  iVar5 = 0;
  if (param_4 == 0) {
    iVar5 = FUN_ram_4039c5c4(param_2,param_3,&uStack_2c,&puStack_30);
  }
  uVar4 = uStack_2c;
  puVar3 = puStack_30;
  if ((*(code **)(_DAT_ram_3fcb1020 + 0xc) == (code *)0x0) ||
     (iVar2 = (**(code **)(_DAT_ram_3fcb1020 + 0xc))(), iVar2 == 0)) {
    if (iVar5 == 0) goto LAB_ram_4039c8c2;
LAB_ram_4039c928:
    puVar3 = &uStack_28;
    uVar4 = uStack_2c;
  }
  else if (iVar5 == 0) {
LAB_ram_4039c8c2:
    if (iVar1 == 0) goto LAB_ram_4039c8c6;
    goto LAB_ram_4039c928;
  }
  FUN_ram_4207940e(param_1,puVar3,uVar4);
LAB_ram_4039c8c6:
  if (*(char *)(gp + 0xce) == '\0') {
    FUN_ram_4204dc98();
  }
  else {
    FUN_ram_42048300(param_4);
  }
  _DAT_ram_3fcb5390 = _DAT_ram_3fcb5390 + 1;
  _DAT_ram_3fcb569c = _DAT_ram_3fcb569c + 1;
  FUN_ram_4039c426(uStack_2c,param_4);
  puVar3 = puStack_30;
  FUN_ram_4204834e();
  if (*(code **)(_DAT_ram_3fcb1020 + 0x2c) != (code *)0x0) {
    (**(code **)(_DAT_ram_3fcb1020 + 0x2c))(puVar3,param_1);
  }
  return;
}

