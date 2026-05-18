
int FUN_ram_420b4b76(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (1 < param_3) {
    return 0x102;
  }
  uVar5 = param_1 & 0xffffffc0;
  if (uVar5 != 0 || param_2 != 0) {
    iVar1 = (*(code *)&SUB_ram_400108e8)(uVar5);
    while (uVar6 = (*(code *)&SUB_ram_40010974)(uVar5,param_2,iVar1), uVar6 != 0) {
      if ((uVar6 & 1) != 0) {
        return 0x102;
      }
      iVar1 = iVar1 + 1;
    }
  }
  uVar5 = (*(code *)&SUB_ram_400108e8)(param_1,param_2);
  do {
    uVar6 = (*(code *)&SUB_ram_40010974)(param_1,param_2,uVar5);
    if (uVar6 == 0) {
      *(uint *)(gp + -0x6c8) = *(uint *)(gp + -0x6c8) | 4;
      return 0;
    }
    if ((uVar6 & 1) != 0) {
      iVar1 = FUN_ram_42048a52(uVar5,(param_3 != 0) + '\x04');
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar3 = *(uint *)(gp + -0x6c8);
      uVar2 = 1 << (uVar5 & 0x1f) & 0xff;
      uVar4 = ((uVar3 >> 0x14 | uVar2) & 0x3f) << 0x14;
      if (param_3 == 1) {
        uVar2 = uVar4 | uVar3 & 0xfffff | (uVar2 | uVar3 >> 0x1a) << 0x1a;
      }
      else {
        uVar2 = uVar4 | uVar3 & 0xfffff | (uVar3 >> 0x1a & ~uVar2) << 0x1a;
      }
      *(uint *)(gp + -0x6c8) = uVar2;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

