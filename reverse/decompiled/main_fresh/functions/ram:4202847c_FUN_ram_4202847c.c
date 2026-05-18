
int FUN_ram_4202847c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_9c [7];
  undefined1 uStack_95;
  undefined1 auStack_94 [11];
  undefined1 auStack_89 [33];
  undefined1 uStack_68;
  undefined1 auStack_67 [56];
  byte bStack_2f;
  byte bStack_1e;
  int iStack_1c;
  
  iVar1 = FUN_ram_4202e30c(param_1,auStack_94);
  if (iVar1 == 0) {
    uStack_95 = 0;
    FUN_ram_4039c11e(auStack_9c,auStack_89,7);
    iVar1 = FUN_ram_4202ce90(auStack_9c,&uStack_68);
    if ((iVar1 == 0) && (iVar1 = 5, (bStack_1e & 1) != 0)) {
      iVar1 = 6;
      if ((iStack_1c != -1) && (iVar1 = FUN_ram_4202ce88(auStack_9c), iVar1 == 0)) {
        if ((bStack_2f & 1) != 0) {
          FUN_ram_42030284(uStack_68,auStack_67);
        }
        iStack_1c = iStack_1c + 1;
        iVar1 = FUN_ram_4202ce9a(&uStack_68);
      }
    }
  }
  return iVar1;
}

