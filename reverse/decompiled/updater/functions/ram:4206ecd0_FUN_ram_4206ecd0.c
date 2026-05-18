
int FUN_ram_4206ecd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_2c [24];
  
  FUN_ram_42028e32(auStack_2c);
  uVar1 = FUN_ram_42029156(param_1);
  iVar2 = FUN_ram_42028f3c(auStack_2c,uVar1,0);
  if (((iVar2 == 0) && (iVar2 = FUN_ram_42028eb8(auStack_2c,param_1), iVar2 == 0)) &&
     (iVar2 = FUN_ram_420290a6(auStack_2c,param_2), iVar2 == 0)) {
    FUN_ram_42029156(param_1);
    uVar1 = FUN_ram_42029140();
    *param_3 = uVar1;
  }
  FUN_ram_42028e3e(auStack_2c);
  return iVar2;
}

