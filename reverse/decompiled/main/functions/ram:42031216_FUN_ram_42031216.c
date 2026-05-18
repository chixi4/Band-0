
void FUN_ram_42031216(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 auStack_2f [7];
  undefined1 uStack_28;
  undefined1 auStack_27 [19];
  
  iVar4 = param_1 + 0x11;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    iVar4 = param_1 + 0x18;
  }
  if (*(char *)(param_1 + 0xc) == '\x02') {
    if (*(int *)(param_1 + 0x188) == 0) {
      (*(code *)&SUB_ram_40010488)(param_1 + 0x1e,0,0x10);
    }
    else {
      FUN_ram_4039c11e();
    }
  }
  FUN_ram_42030a48(*(undefined2 *)(param_1 + 10),&uStack_30,&uStack_28);
  iVar1 = FUN_ram_4202fef8(0xd,0x10,&uStack_34);
  if (iVar1 == 0) {
    iVar4 = 6;
  }
  else {
    uVar2 = FUN_ram_4202829c(param_1);
    uVar3 = FUN_ram_420283c8(param_1);
    iVar4 = FUN_ram_4202b3c8(param_1 + 0x152,uVar2,uVar3,param_1 + 0x1e,iVar4,uStack_30,auStack_2f,
                             uStack_28,auStack_27,iVar1);
    if (iVar4 == 0) {
      iVar4 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10));
      if (iVar4 == 0) {
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0xd) = 3;
        return;
      }
    }
    else {
      (*(code *)&SUB_ram_40011a08)(uStack_34);
    }
  }
  *param_2 = iVar4;
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  *(undefined1 *)(param_2 + 1) = 8;
  return;
}

