
int FUN_ram_42043602(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puStack_14;
  
  iVar1 = FUN_ram_42032e82(&puStack_14,0x18,4,param_1);
  if (iVar1 == 0) {
    FUN_ram_42033fd8(1,0x40,1,0x3c07da34);
    iVar1 = 1;
  }
  else {
    **(uint **)(iVar1 + 0x24) = **(uint **)(iVar1 + 0x24) | 1;
    *(undefined2 *)(iVar1 + 0x14) = 0x18;
    puStack_14[2] = (char)param_3;
    *puStack_14 = 8;
    puStack_14[3] = (char)((uint)param_3 >> 8);
    puStack_14[1] = (char)param_2;
    *(undefined2 *)(iVar1 + 0x16) = 4;
    (*(code *)&SUB_ram_40011fc8)(param_1,iVar1,7,0,0);
    iVar1 = FUN_ram_420324d4(param_1,iVar1,0xd0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        uVar2 = 0x3c072e8c;
      }
      else {
        uVar2 = 0x3c072e90;
      }
      FUN_ram_42033fd8(1,0x40,3,0x3c07e7f8,uVar2,*(undefined2 *)(puStack_14 + 2));
    }
  }
  return iVar1;
}

