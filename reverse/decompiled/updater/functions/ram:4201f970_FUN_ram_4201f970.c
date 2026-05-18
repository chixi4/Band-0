
undefined4 FUN_ram_4201f970(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int aiStack_24 [3];
  
  uVar3 = *(uint *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  if (0x7e < uVar3) {
    uVar3 = 0x7e;
  }
  uVar1 = param_2 + param_3;
  while( true ) {
    if (uVar3 <= uVar1) {
      return 0;
    }
    iVar2 = FUN_ram_4201f92e(param_1 + 0x18,uVar1,aiStack_24);
    if (iVar2 != 0) break;
    if (aiStack_24[0] == 2) {
      *(uint *)(param_1 + 0x3c) = uVar1;
      return 0;
    }
    uVar1 = uVar1 + 1;
  }
  return 0xffffffff;
}

