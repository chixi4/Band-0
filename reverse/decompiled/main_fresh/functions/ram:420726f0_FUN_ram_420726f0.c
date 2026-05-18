
int FUN_ram_420726f0(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,
                    undefined1 *param_5,int param_6)

{
  int iVar1;
  
  iVar1 = -0x4f80;
  if (((param_3 < 2) && (param_6 != 0)) && (iVar1 = FUN_ram_420723e6(), iVar1 == 0)) {
    *param_5 = (char)*param_4;
    *param_4 = *param_4 + 1;
  }
  return iVar1;
}

