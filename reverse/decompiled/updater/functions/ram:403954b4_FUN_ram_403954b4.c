
int FUN_ram_403954b4(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0;
    if ((param_2 <= param_1) && (iVar1 = FUN_ram_403953d0(param_1,0,0,param_3,2), iVar1 != 0)) {
      *(uint *)(iVar1 + 0x38) = param_2;
    }
    return iVar1;
  }
  return 0;
}

