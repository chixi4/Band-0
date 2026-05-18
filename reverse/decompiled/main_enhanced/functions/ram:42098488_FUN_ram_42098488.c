
int FUN_ram_42098488(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_420530ba(0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0x4208846c;
    *(undefined4 *)(iVar1 + 0x14) = param_1;
    *(undefined4 *)(iVar1 + 0x18) = param_4;
    iVar2 = FUN_ram_42053a2a(0,param_3,0x41,iVar1,param_2);
    if (iVar2 == 0) {
      FUN_ram_420530f0(iVar1);
    }
  }
  return iVar2;
}

