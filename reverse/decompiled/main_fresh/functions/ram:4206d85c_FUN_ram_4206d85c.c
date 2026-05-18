
int FUN_ram_4206d85c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 auStack_94 [128];
  
  iVar1 = -0x74;
  if (param_4 < 2) {
    FUN_ram_4206dc64(auStack_94);
    iVar1 = FUN_ram_4206dc9c(auStack_94,param_4);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4206dcca(auStack_94,param_1,param_2), iVar1 == 0)) {
      iVar1 = FUN_ram_4206dce0(auStack_94,param_3);
    }
    FUN_ram_4206dc72(auStack_94);
  }
  return iVar1;
}

