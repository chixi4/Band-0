
void FUN_ram_4201c576(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_4 == 0) {
    iVar2 = param_1 * 0x24;
    uVar3 = (uint)*(byte *)(iVar2 + 0x3c075774);
    if (uVar3 != param_2) goto LAB_ram_4201c5c8;
    if (param_3 == 0) {
      uVar1 = *(undefined4 *)(iVar2 + 0x3c075778);
      FUN_ram_420185da(uVar3,uVar1,*(undefined1 *)(iVar2 + 0x3c07576c));
      FUN_ram_4201863c(uVar3,uVar1);
      return;
    }
LAB_ram_4201c5cc:
    uVar3 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_2);
    if ((uVar3 & 1) != 0) {
      FUN_ram_42018466(param_2,3);
      (*(code *)&SUB_ram_40010790)
                (param_2,*(undefined1 *)(param_1 * 0x24 + param_3 + 0x3c075766),0,0);
      goto LAB_ram_4201c610;
    }
  }
  else {
LAB_ram_4201c5c8:
    if (-1 < (int)param_2) goto LAB_ram_4201c5cc;
  }
  FUN_ram_42018466(param_2,1);
LAB_ram_4201c610:
  if (param_3 == 0) {
    (*(code *)&SUB_ram_4001078c)(param_2,*(undefined1 *)(param_1 * 0x24 + 0x3c07576c),0);
  }
  FUN_ram_4201883c(param_2,1);
  return;
}

