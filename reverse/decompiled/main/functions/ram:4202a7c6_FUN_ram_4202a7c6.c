
void FUN_ram_4202a7c6(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined1 auStack_21 [9];
  
  iVar1 = FUN_ram_42029616(param_3,2,auStack_21);
  if (iVar1 == 0) {
    uVar4 = **(undefined2 **)*param_3;
    iVar2 = FUN_ram_4202d4ec();
    if (iVar2 == 0) {
      uVar3 = *param_3;
      *param_3 = 0;
      auStack_21[0] = 0x11;
      (*(code *)&SUB_ram_40011a08)(uVar3);
    }
    else {
      iVar1 = FUN_ram_4202d5d8(0x13,0,iVar2);
      if (iVar1 != 0) {
        (*(code *)&SUB_ram_400119dc)(*param_3,2);
        iVar1 = FUN_ram_4202997c(param_1,uVar4,param_3,auStack_21);
        goto LAB_ram_4202a84c;
      }
      auStack_21[0] = 0x11;
      iVar2 = 0;
    }
    iVar1 = 6;
  }
  else {
    iVar2 = 0;
    uVar4 = 0;
  }
LAB_ram_4202a84c:
  FUN_ram_42029b02(param_1,param_2,iVar1,iVar2,0x12,auStack_21[0],uVar4);
  return;
}

