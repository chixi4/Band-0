
int FUN_ram_42070b6a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  if ((((param_4 == 0) || (iVar1 = FUN_ram_420685b4(param_4,0), iVar1 != 0)) ||
      (iVar1 = FUN_ram_420685b4(param_1,1), iVar1 < 1)) ||
     ((iVar1 = FUN_ram_420685b4(param_2,1), iVar1 < 1 ||
      (iVar1 = FUN_ram_420685b4(param_3,0), iVar1 == 0)))) {
    iVar1 = -4;
  }
  else {
    iVar2 = FUN_ram_4206835e(param_3,0);
    iVar1 = -0xe;
    if (iVar2 == 1) {
      FUN_ram_4206806e(auStack_30);
      FUN_ram_4206806e(auStack_28);
      iVar1 = FUN_ram_42068824(auStack_30,param_1,1);
      if (((iVar1 == 0) && (iVar1 = FUN_ram_42068824(auStack_28,param_2,1), iVar1 == 0)) &&
         ((iVar1 = FUN_ram_4206924e(param_4,auStack_30,auStack_28), iVar1 == 0 &&
          ((iVar1 = FUN_ram_42068852(auStack_30,auStack_30,auStack_28), iVar1 == 0 &&
           (iVar1 = FUN_ram_420689c6(auStack_30,0,auStack_30,param_4), iVar1 == 0)))))) {
        iVar1 = FUN_ram_42069670(param_4,param_3,auStack_30);
      }
      FUN_ram_42068078(auStack_30);
      FUN_ram_42068078(auStack_28);
    }
  }
  return iVar1;
}

