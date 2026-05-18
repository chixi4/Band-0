
void FUN_ram_42055232(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_4205074c(param_2);
    iVar2 = FUN_ram_42054994(param_3,0,uVar1,param_6,param_7,0x14,0x8016);
    if (iVar2 != 0) {
      FUN_ram_420548c6(0,iVar2,param_4,param_5,param_1);
      return;
    }
  }
  return;
}

