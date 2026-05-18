
int FUN_ram_420717ce(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [36];
  
  FUN_ram_42072140(auStack_38);
  iVar1 = FUN_ram_4207278e(param_1,auStack_38,param_4,param_3,param_5,param_6,0);
  if (iVar1 == 0) {
    iVar2 = FUN_ram_420723d0(auStack_38);
    iVar1 = -0x4f80;
    if (iVar2 == 0) {
      iVar1 = FUN_ram_4206826c(param_2,auStack_38);
    }
  }
  FUN_ram_420721e2(auStack_38);
  return iVar1;
}

