
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42055fc6(int param_1,int param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  if ((param_2 == 0) || (param_3 == (uint *)0x0)) {
    return 0xfffffff0;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    if ((*param_3 & 0xf0) == 0xe0) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        if ((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x18) == _DAT_ram_3c0793d0))
        goto LAB_ram_42056000;
        iVar1 = FUN_ram_42058ae0(param_1,param_1 + 0x18);
      }
      else {
        iVar1 = FUN_ram_42051704(*(char *)(param_1 + 0x1c));
      }
      if (iVar1 != 0) goto LAB_ram_42056018;
    }
LAB_ram_42056000:
    iVar1 = FUN_ram_42058ae0(param_1,param_3);
  }
  else {
    iVar1 = FUN_ram_42051704(*(char *)(param_1 + 8));
  }
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
LAB_ram_42056018:
  uVar2 = FUN_ram_42055f92(param_1,param_2,param_3,param_4,iVar1);
  return uVar2;
}

