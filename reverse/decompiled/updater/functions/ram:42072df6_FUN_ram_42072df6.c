
int FUN_ram_42072df6(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int iStack_1c;
  undefined1 uStack_18;
  undefined1 *puStack_14;
  
  iStack_1c = 0;
  uStack_18 = 0;
  puStack_14 = (undefined1 *)0x0;
  iVar1 = FUN_ram_4202ba40(param_1,param_2,&iStack_1c);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (iStack_1c == 0) {
      *param_3 = 0;
    }
    else if (iStack_1c == 1) {
      *param_3 = *puStack_14;
    }
    else {
      iVar1 = -0x2564;
    }
  }
  else {
    iVar1 = iVar1 + -0x2500;
  }
  return iVar1;
}

