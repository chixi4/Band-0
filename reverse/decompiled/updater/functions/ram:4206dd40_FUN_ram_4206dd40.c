
uint FUN_ram_4206dd40(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (((param_1[7] != 0) || (uVar1 = 0xffff8f00, param_1[8] != 0)) &&
     (uVar1 = 0xffff8f00, param_2 <= 0x414dU - (param_1[0x18] - param_1[0x16]))) {
    while (uVar1 = param_1[0x1f], uVar1 < param_2) {
      iVar2 = FUN_ram_4206d5e8(param_1);
      if (iVar2 != 0) {
        return 0xffff9800;
      }
      uVar1 = param_2 - uVar1;
      if ((code *)param_1[8] == (code *)0x0) {
        uVar3 = (*(code *)param_1[7])(param_1[9],param_1[0x18] + param_1[0x1f],uVar1);
      }
      else {
        uVar3 = (*(code *)param_1[8])
                          (param_1[9],param_1[0x18] + param_1[0x1f],uVar1,
                           *(undefined4 *)(*param_1 + 0x5c));
      }
      if (uVar3 == 0) {
        return 0xffff8d80;
      }
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (uVar1 < uVar3) {
        return 0xffff9400;
      }
      param_1[0x1f] = param_1[0x1f] + uVar3;
    }
    uVar1 = 0;
  }
  return uVar1;
}

