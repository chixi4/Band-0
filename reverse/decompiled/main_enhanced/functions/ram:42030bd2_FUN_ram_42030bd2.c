
void FUN_ram_42030bd2(int param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [20];
  
  if (*(int *)(param_1 + 0x188) == 0) {
LAB_ram_42030c36:
    if ((*(byte *)(param_1 + 8) & 5) == 0) {
      return;
    }
    bVar2 = *(byte *)(param_2 + 5) | 1;
  }
  else {
    iVar1 = FUN_ram_4202b1ca(param_1 + 0x112,param_1 + 0x112,*(int *)(param_1 + 0x188),0,auStack_20)
    ;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4039c0e0(auStack_20,*(int *)(param_1 + 0x188) + 0x10);
      if (iVar1 == 0) goto LAB_ram_42030c36;
      *(undefined1 *)(param_2 + 1) = 4;
      uVar3 = 0x404;
    }
    else {
      *(undefined1 *)(param_2 + 1) = 8;
      uVar3 = 0x408;
    }
    *param_2 = uVar3;
    bVar2 = *(byte *)(param_2 + 5) | 2;
  }
  *(byte *)(param_2 + 5) = bVar2;
  return;
}

