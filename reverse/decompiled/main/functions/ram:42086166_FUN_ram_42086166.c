
bool FUN_ram_42086166(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  iVar4 = param_1 + 0x32c;
  iVar1 = FUN_ram_420894a2();
  param_1 = param_1 + 4;
  uStack_28 = 0;
  uStack_24 = 0;
  local_30 = 0;
  uStack_2c = 0;
  FUN_ram_4208f75e(&local_30,iVar4,param_1);
  if ((uStack_2c._1_1_ != '\0') && (uStack_2c._1_1_ != 'Q')) {
    iVar1 = FUN_ram_4208f580(iVar1 + 0x24);
    return iVar1 == 0;
  }
  iVar2 = FUN_ram_4039c0e0(iVar4,&uStack_28,6);
  if ((iVar2 == 0) || (iVar2 = FUN_ram_4208f580(param_1), iVar2 != 0)) {
    iVar2 = *(int *)(gp + -0xb4);
    if (*(char *)(iVar2 + 0x415) == '\0') {
      return true;
    }
    if (DAT_ram_3fcc41bd != '\x0f') {
      return true;
    }
    if (*(char *)(iVar2 + 0x35f) != '\0') {
      return true;
    }
    iVar3 = FUN_ram_4039c0e0(iVar4,&uStack_28,6);
    if (iVar3 == 0) {
      return true;
    }
    iVar2 = FUN_ram_4039c0e0(iVar2 + 0x93,iVar4,6);
    if ((((iVar2 == 0) && (iVar1 = FUN_ram_4039c0e0(iVar1 + 0x24,param_1,6), iVar1 == 0)) &&
        (iVar1 = FUN_ram_4208f580(iVar4), iVar1 != 0)) &&
       (iVar1 = FUN_ram_4208f580(param_1), iVar1 != 0)) {
      if (local_30._1_1_ == '\0') {
        if (local_30._3_1_ == '\0') {
          return true;
        }
      }
      else if (((local_30._3_1_ != '\0') && (local_30._2_1_ == local_30._1_1_)) &&
              ((char)local_30 == local_30._3_1_)) {
        return true;
      }
    }
  }
  return false;
}

