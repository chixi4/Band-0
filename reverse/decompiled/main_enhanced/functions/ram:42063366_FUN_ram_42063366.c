
int FUN_ram_42063366(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(iVar2 + 0x3c);
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = (*(code *)&SUB_ram_40010504)(iVar3,"ce at the future goal before sleep.");
  if (iVar1 == 0) {
    iVar3 = iVar2 + 0x34;
  }
  else {
    iVar1 = (*(code *)&SUB_ram_40010504)(iVar3,"ing it.");
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4039c0e0(param_2,&DAT_ram_3c0c2c6c,param_3), iVar1 == 0)) {
      *(undefined1 *)(*(int *)(iVar2 + 0x24) + 0x2c) = 1;
      goto LAB_ram_420633ea;
    }
    iVar3 = (*(code *)&SUB_ram_40010504)(iVar3,&DAT_ram_3c0c2c74);
    if (iVar3 != 0) goto LAB_ram_420633ea;
    iVar3 = iVar2 + 0x38;
  }
  iVar3 = FUN_ram_42064b5e(iVar3,param_2,param_3);
  if (iVar3 == 0) {
    return -1;
  }
LAB_ram_420633ea:
  iVar2 = FUN_ram_42064b5e(iVar2 + 0x40,param_2,param_3);
  return -(uint)(iVar2 == 0);
}

