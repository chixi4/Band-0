
int FUN_ram_420722fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [16];
  
  FUN_ram_4206806e(auStack_28);
  iVar1 = FUN_ram_420685b4(param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_42070fb0(param_1,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_420722c8(param_2);
    }
  }
  else {
    iVar1 = FUN_ram_420685b4(param_3,1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_42070fb0(param_1,param_4);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_42072284(param_2,param_4);
      }
    }
    else {
      iVar1 = FUN_ram_420685b4(param_3,0xffffffff);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_42070fb0(param_1,param_4);
        if ((iVar1 == 0) && (iVar1 = FUN_ram_42072284(param_2,param_4), iVar1 == 0)) {
          param_2 = param_2 + 8;
          iVar2 = FUN_ram_420685b4(param_2,0);
          iVar1 = FUN_ram_420687f0(auStack_28,param_1 + 4,param_2);
          if (iVar1 == 0) {
            iVar1 = FUN_ram_4206810c(param_2,auStack_28,iVar2 != 0);
          }
        }
      }
      else {
        iVar1 = FUN_ram_4207105a(param_1,param_2,param_3,param_4,0,0,param_5);
      }
    }
  }
  FUN_ram_42068078(auStack_28);
  return iVar1;
}

