
int FUN_ram_42029b02(undefined4 param_1,undefined4 param_2,int param_3,int param_4,
                    undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  
  if (param_3 == 0) {
    param_3 = FUN_ram_4202d6e2();
    if (param_3 != 0) {
      param_6 = 0xe;
LAB_ram_42029b26:
      param_4 = FUN_ram_4202d4ec();
      iVar1 = 0;
      if (param_4 == 0) goto LAB_ram_42029b2e;
      goto LAB_ram_42029b6e;
    }
  }
  else {
    iVar1 = param_4;
    if (param_6 == 0) goto LAB_ram_42029b2e;
    if (param_4 == 0) goto LAB_ram_42029b26;
    (*(code *)&SUB_ram_400119dc)(param_4,*(undefined2 *)(param_4 + 0x10));
LAB_ram_42029b6e:
    FUN_ram_42029a9c(param_1,param_2,param_4,param_5,param_7,param_6);
  }
  iVar1 = 0;
LAB_ram_42029b2e:
  (*(code *)&SUB_ram_40011a08)(iVar1);
  return param_3;
}

