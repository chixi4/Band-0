
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a003e(int param_1,undefined4 *param_2)

{
  int iVar1;
  int aiStack_24 [4];
  undefined4 auStack_14 [2];
  
  aiStack_24[0] = param_1;
  iVar1 = (*(code *)_DAT_ram_3fcb82b0[2])(aiStack_24);
  if (iVar1 == 0) {
    iVar1 = 0x6005;
    if (((*(int *)(*(int *)(aiStack_24[0] + 4) + 0x10) != 0) &&
        (iVar1 = 0x102, param_2 != (undefined4 *)0x0)) &&
       (iVar1 = (*(code *)*_DAT_ram_3fcb82b0)(aiStack_24[0]), iVar1 == 0)) {
      iVar1 = (**(code **)(*(int *)(aiStack_24[0] + 4) + 0x10))(aiStack_24[0],auStack_14);
      if (iVar1 == 0) {
        if (*(int *)(aiStack_24[0] + 0x14) == 0) {
          *(undefined4 *)(aiStack_24[0] + 0x14) = auStack_14[0];
        }
        *param_2 = auStack_14[0];
      }
      iVar1 = (*(code *)_DAT_ram_3fcb82b0[1])();
    }
  }
  return iVar1;
}

