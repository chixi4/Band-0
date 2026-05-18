
int FUN_ram_42030140(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,
                    undefined1 *param_5,int param_6)

{
  int iVar1;
  
  iVar1 = -0x4f80;
  if (((param_3 < 2) && (param_6 != 0)) && (iVar1 = FUN_ram_4202fe1e(), iVar1 == 0)) {
    *param_5 = (char)*param_4;
    *param_4 = *param_4 + 1;
  }
  return iVar1;
}

