
int FUN_ram_4202ce9a(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  iVar2 = FUN_ram_4202ce0a(2,param_1);
  if (iVar2 == 0) {
    cVar1 = *param_1;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_12 = 0;
    if ((((cVar1 != '\0') ||
         (iVar3 = FUN_ram_4039c0e0(param_1 + 1,(int)&uStack_18 + 1,6), iVar3 != 0)) &&
        ((param_1[0x39] & 1U) != 0)) &&
       (iVar3 = FUN_ram_42030472(param_1 + 1,cVar1,param_1 + 0x29), iVar3 != 0)) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}

