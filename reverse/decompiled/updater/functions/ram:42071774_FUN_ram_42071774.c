
uint FUN_ram_42071774(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x158) & 4) != 0) {
    uVar1 = 0xffffd800;
    if ((param_2 & 0xffff7ffe) == (*(uint *)(param_1 + 0x164) & param_2 & 0xffff7ffe)) {
      uVar1 = -(uint)((~param_2 & *(uint *)(param_1 + 0x164) & 0x8001) != 0) & 0xffffd800;
    }
  }
  return uVar1;
}

