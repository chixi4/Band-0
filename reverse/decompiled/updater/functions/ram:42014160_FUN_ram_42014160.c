
int FUN_ram_42014160(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  if (param_1 < 2) {
    FUN_ram_4201b116(param_1 * 0x30 + 8 + gp + -0x660,&uStack_2c);
    iVar1 = FUN_ram_4207a30c(uStack_2c,0,&iStack_28);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_ram_40394d60();
    if (param_2 != 0) {
      uVar2 = (iStack_28 - 1U) + param_2 * 0xfff;
      iVar1 = (*(code *)&SUB_ram_400109f0)
                        (uVar2,(((param_2 >> 0x14) - (uint)(param_2 * 0x1000 < param_2 * 0xfff)) -
                               (uint)(iStack_28 == 0)) + (uint)(uVar2 < iStack_28 - 1U));
      if (iVar1 - 1U < 0x100) {
        iVar3 = *(int *)(gp + -0x660 + param_1 * 0x30 + 8);
        uVar2 = (uint)(iStack_28 << 4) / (param_2 * iVar1);
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) & 0xfffff000 | (uVar2 & 0xffff) >> 4;
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) & 0xff0fffff | (uVar2 & 0xf) << 0x14;
        uStack_24 = (iVar1 - 1U & 0xff) << 0xc | *(uint *)(iVar3 + 0x78) & 0xfff00fff;
        *(uint *)(iVar3 + 0x78) = uStack_24;
        FUN_ram_40394d8e();
        return 0;
      }
    }
    FUN_ram_40394d8e();
  }
  return -1;
}

