
undefined4
FUN_ram_420103b2(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5,
                int *param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_4201029a(param_2,param_1);
  iVar2 = -1;
  if (param_4 != 0x20) {
    iVar2 = (1 << (param_4 & 0x1f)) + -1;
  }
  iVar2 = (*(code *)&SUB_ram_400109cc)(uVar1 & iVar2 << (param_3 & 0x1f));
  *param_5 = *param_5 + iVar2;
  *param_6 = *param_6 + param_4;
  return 0;
}

