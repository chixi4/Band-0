
/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4205ac60(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_2d;
  int aiStack_2c [4];
  
  if (param_1[4] != 0) {
    while (iVar2 = FUN_ram_420598dc(param_1 + 4,aiStack_2c), iVar1 = aiStack_2c[0], iVar2 != -1) {
      if (aiStack_2c[0] != 0x3c0793e9) {
        if ((*param_1 & 0xf0) == 0x10) {
          iVar2 = FUN_ram_4205aae2(aiStack_2c[0],aiStack_2c + 1);
          if (iVar2 == 0) {
            FUN_ram_42051d02(iVar1);
          }
        }
        else {
          FUN_ram_4205b1de(aiStack_2c[0]);
        }
      }
    }
    FUN_ram_4205990c(param_1 + 4);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    while (iVar2 = FUN_ram_420598dc(param_1 + 5,aiStack_2c), iVar1 = aiStack_2c[0], iVar2 != -1) {
      if ((aiStack_2c[0] != 0x3c0793e9) &&
         (iVar2 = FUN_ram_4205aae2(aiStack_2c[0],&uStack_2d), iVar2 == 0)) {
        *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 8;
        FUN_ram_4205ac60(iVar1);
        if (*(int *)(iVar1 + 8) != 0) {
          aiStack_2c[1] = 0;
          aiStack_2c[2] = *(int *)(iVar1 + 8);
          FUN_ram_420506ac(0x4204a4dc,aiStack_2c + 1);
          *(undefined4 *)(iVar1 + 8) = 0;
        }
        FUN_ram_4205ac4c(iVar1);
      }
    }
    FUN_ram_4205990c(param_1 + 5);
    param_1[5] = 0;
  }
  return;
}

