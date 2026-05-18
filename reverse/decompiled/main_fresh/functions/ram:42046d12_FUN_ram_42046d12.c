
void FUN_ram_42046d12(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  param_2 = param_2 | *(int *)(&DAT_ram_3c0f7104 + param_1 * 4) << 3;
  iVar4 = 10;
  uVar5 = param_2;
  do {
    iVar4 = iVar4 + -1;
    uVar5 = ((int)uVar5 >> 9) * 0x537 ^ uVar5 << 1;
  } while (iVar4 != 0);
  uVar1 = (param_2 << 10 | uVar5) ^ 0x5412;
  uVar5 = 0;
  if ((int)uVar1 >> 0xf != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  do {
    uVar6 = uVar5 + 1;
    FUN_ram_420468fe(param_3,8,uVar5,(int)uVar1 >> (uVar5 & 0x1f) & 1);
    uVar5 = uVar6;
  } while (uVar6 != 6);
  FUN_ram_420468fe(param_3,8,7,(int)uVar1 >> 6 & 1);
  FUN_ram_420468fe(param_3,8,8,(int)uVar1 >> 7 & 1);
  FUN_ram_420468fe(param_3,7,8,(int)uVar1 >> 8 & 1);
  uVar5 = 9;
  do {
    uVar6 = uVar5 & 0x1f;
    iVar4 = 0xe - uVar5;
    uVar5 = uVar5 + 1;
    FUN_ram_420468fe(param_3,iVar4,8,(int)uVar1 >> uVar6 & 1);
  } while (uVar5 != 0xf);
  iVar4 = FUN_ram_42046bd8(param_3);
  uVar5 = 0;
  do {
    uVar6 = uVar5 & 0x1f;
    iVar2 = (iVar4 + -1) - uVar5;
    uVar5 = uVar5 + 1;
    FUN_ram_420468fe(param_3,iVar2,8,(int)uVar1 >> uVar6 & 1);
  } while (uVar5 != 8);
  iVar2 = 7;
  do {
    uVar5 = 0xf - iVar2;
    iVar3 = iVar4 - iVar2;
    iVar2 = iVar2 + -1;
    FUN_ram_420468fe(param_3,8,iVar3,(int)uVar1 >> (uVar5 & 0x1f) & 1);
  } while (iVar2 != 0);
  FUN_ram_420468fe(param_3,8,iVar4 + -8,1);
  return;
}

