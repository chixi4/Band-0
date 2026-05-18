
undefined4 FUN_ram_420551fc(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  bVar1 = *(byte *)(iVar2 + 0xd);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(code **)(param_1 + 0x88) == (code *)0x0) {
    iVar3 = FUN_ram_420551c6(0,param_1,iVar2,0);
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x10));
  }
  if (iVar3 == 0) {
    if ((bVar1 & 0x20) == 0) {
      return 0;
    }
    if (*(short *)(param_1 + 0x2c) != 0x1680) {
      *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + 1;
    }
    if (*(code **)(param_1 + 0x88) == (code *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x10),param_1,0,0);
    if (iVar2 != -0xd) {
      return 0;
    }
  }
  else if (iVar3 != -0xd) {
    *(int *)(param_1 + 0x7c) = iVar2;
    return 0xfffffffb;
  }
  return 0xfffffff3;
}

