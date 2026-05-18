
int FUN_ram_4205e79c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_28 [8];
  
  FUN_ram_4202476a(auStack_28);
  iVar2 = FUN_ram_4205e6a6(param_1,param_3);
  iVar1 = 1;
  if (iVar2 != 0) {
    param_1 = param_1 + 4;
    iVar1 = FUN_ram_4202502c(auStack_28,param_1,1);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_420255d6(auStack_28,0,auStack_28,4), iVar1 == 0)) {
      iVar4 = param_2 + 8;
      iVar1 = FUN_ram_42025944(iVar4,iVar2,auStack_28,param_1,0);
      if ((iVar1 == 0) &&
         (((uVar3 = FUN_ram_42024ae6(iVar4,0), uVar3 == (param_4 != 0) ||
           (iVar1 = FUN_ram_42025026(iVar4,param_1,iVar4), iVar1 == 0)) &&
          (iVar1 = FUN_ram_420249f4(param_2,param_3), iVar1 == 0)))) {
        iVar1 = FUN_ram_42024a98(param_2 + 0x10,1);
      }
    }
  }
  FUN_ram_42024774(auStack_28);
  FUN_ram_42024774(iVar2);
  thunk_FUN_ram_40390608(iVar2);
  return -(uint)(iVar1 != 0);
}

