
int FUN_ram_4209d70e(int param_1,byte *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  (*(code *)&SUB_ram_40010488)(param_1 + 0x2e4,0,0x34);
  uVar1 = param_3 - 2;
  if (uVar1 < 0x21) {
    *(uint *)(param_1 + 0x2f0) = *param_2 & 3;
    uVar2 = FUN_ram_4209d6fa(param_1,*param_2 >> 2 & 1);
    *(undefined4 *)(param_1 + 0x2e8) = uVar2;
    FUN_ram_4039c11e(param_1 + 0x2f4,param_2 + 2,uVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x1ec);
    *(uint *)(param_1 + 0x314) = uVar1;
    iVar3 = FUN_ram_4209c8dc(uVar2);
    *(int *)(param_1 + 0x2e4) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x2ec) = 6;
      uVar4 = FUN_ram_4209c726(uVar2);
      return -(uint)(uVar1 != uVar4);
    }
  }
  return -1;
}

