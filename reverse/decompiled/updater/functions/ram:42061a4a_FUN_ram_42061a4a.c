
undefined4 FUN_ram_42061a4a(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_3 = 0;
  *param_2 = 0;
  while( true ) {
    if ((*param_2 != 0) && (*param_3 != 0)) goto LAB_ram_42061a84;
    iVar1 = FUN_ram_42066304();
    if ((iVar1 == 0) || (iVar2 = FUN_ram_420665ee(iVar1,param_1), iVar2 < 0)) break;
    iVar2 = FUN_ram_42066612(iVar1,param_1);
    if (iVar2 == 1) {
      if (*param_2 == 0) {
        *param_2 = iVar1;
      }
      else {
LAB_ram_42061ae8:
        FUN_ram_4206636c(iVar1,0);
      }
    }
    else {
      if ((iVar2 != -1) || (*param_3 != 0)) goto LAB_ram_42061ae8;
      *param_3 = iVar1;
    }
  }
  FUN_ram_4206636c(iVar1,0);
LAB_ram_42061a84:
  if ((*param_2 == 0) || (uVar3 = 0, *param_3 == 0)) {
    FUN_ram_4206636c(*param_2,0);
    FUN_ram_4206636c(*param_3,0);
    *param_3 = 0;
    *param_2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

