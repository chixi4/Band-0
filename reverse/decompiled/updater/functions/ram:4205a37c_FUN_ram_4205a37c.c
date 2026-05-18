
void FUN_ram_4205a37c(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_ram_420599c2();
  iVar4 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
  *(char *)(param_1 + 0xc) = (char)param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_ram_420599ec();
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1,4,0);
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1,0,0);
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1,2,0);
  }
  if (param_2 == -0xe) {
    uVar2 = 0x3c0793e7;
  }
  else if (param_2 == -0xd) {
    uVar2 = 0x3c0793e8;
  }
  else {
    uVar2 = 0;
    if (param_2 == -0xf) {
      uVar2 = 0x3c0793e6;
    }
  }
  if ((*(int *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0x28) & 8) == 0)) {
    FUN_ram_42059878(param_1 + 0x10);
  }
  if ((*(int *)(param_1 + 0x14) != 0) && ((*(byte *)(param_1 + 0x28) & 8) == 0)) {
    FUN_ram_42059878(param_1 + 0x14,uVar2);
  }
  if (((iVar4 == 1) || (iVar4 - 3U < 2)) &&
     (bVar1 = *(byte *)(param_1 + 0x28), *(byte *)(param_1 + 0x28) = bVar1 & 0xfb, (bVar1 & 4) == 0)
     ) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar4 == 4) {
      param_2 = 0;
    }
    *(char *)(iVar3 + 4) = (char)param_2;
    uVar2 = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    thunk_FUN_ram_4205973a(uVar2);
    return;
  }
  return;
}

