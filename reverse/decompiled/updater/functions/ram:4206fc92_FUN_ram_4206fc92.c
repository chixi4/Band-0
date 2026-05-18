
int FUN_ram_4206fc92(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [20];
  
  uVar1 = FUN_ram_42028dc8(param_6);
  uVar2 = FUN_ram_42029140();
  *param_3 = uVar2;
  FUN_ram_42028e32(auStack_2c);
  iVar3 = FUN_ram_42028f3c(auStack_2c,uVar1,0);
  if ((((iVar3 == 0) && (iVar3 = FUN_ram_42029004(auStack_2c), iVar3 == 0)) &&
      (iVar3 = FUN_ram_4202905e(auStack_2c,*(int *)(param_1 + 0x38) + 0x1b0,0x40), iVar3 == 0)) &&
     (iVar3 = FUN_ram_4202905e(auStack_2c,param_4,param_5), iVar3 == 0)) {
    iVar3 = FUN_ram_420290a6(auStack_2c,param_2);
  }
  FUN_ram_42028e3e(auStack_2c);
  if (iVar3 != 0) {
    FUN_ram_4206e0e0(param_1,2,0x50);
  }
  return iVar3;
}

