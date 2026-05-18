
int FUN_ram_4206c858(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_40 [44];
  
  if (param_1 != (int *)0x0) {
    iVar2 = -0x5100;
    if (*param_1 != 0) {
      iVar3 = param_1[2];
      iVar2 = -0x5100;
      if (iVar3 != 0) {
        bVar1 = *(byte *)(*param_1 + 5);
        iVar2 = FUN_ram_4206c6a0(param_1,auStack_40);
        if ((((iVar2 == 0) && (iVar2 = FUN_ram_4206c624(param_1), iVar2 == 0)) &&
            (iVar2 = FUN_ram_4206c666(param_1,iVar3 + (uint)bVar1,*(undefined1 *)(*param_1 + 5)),
            iVar2 == 0)) &&
           (iVar2 = FUN_ram_4206c666(param_1,auStack_40,*(undefined1 *)(*param_1 + 4)), iVar2 == 0))
        {
          iVar2 = FUN_ram_4206c6a0(param_1,param_2);
        }
      }
    }
    return iVar2;
  }
  return -0x5100;
}

