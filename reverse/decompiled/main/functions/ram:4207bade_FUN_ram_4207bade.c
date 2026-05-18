
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207bade(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = _DAT_ram_3fcc3024;
  iVar3 = _DAT_ram_3fcc2ff8;
  iVar2 = _DAT_ram_3fcc2ff4;
  sVar5 = 0;
  uVar6 = ((_DAT_ram_3fcc2fd8 + -1) * 3) / 2 & 0xff;
  if ((0xf < uVar6) && (sVar5 = 1, 0x1f < uVar6)) {
    sVar5 = (0x3f < uVar6) + 2;
  }
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe73c,&DAT_ram_3c0c426c,0x77);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar6 = 0x84080000;
  if (*(char *)(gp + -0xb8) != '\x01') {
    uVar6 = 0x4080000;
  }
  *(uint *)(param_1 + 300) = uVar6;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 300) = uVar6 | 0x200000;
    bVar1 = _DAT_ram_3fcc4014 != param_1;
    if (DAT_ram_3fcc4208 == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))
                (0x3fcc420c,0x4206b52e,0,1,0x200000,*(code **)(_DAT_ram_3fcdfdd8 + 0xec));
    }
    DAT_ram_3fcc4208 = DAT_ram_3fcc4208 | (byte)(1 << (uint)bVar1);
  }
  if (iVar3 != 0) {
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x100000;
  }
  if (iVar4 != 0) {
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x400000;
  }
  uVar6 = *(uint *)(param_1 + 300);
  *(uint *)(param_1 + 300) = uVar6 | 0x800000;
  if ((int)(uVar6 | 0x800000) < 0) {
    uVar7 = 0x110c;
  }
  else {
    uVar7 = 0x100c;
  }
  if ((uVar6 & 0x80000) != 0) {
    uVar7 = uVar7 | 0x40000;
  }
  *(uint *)(param_1 + 0x134) = uVar7;
  if ((uVar6 & 0x300000) != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x10000;
  }
  *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x20000;
  *(undefined4 *)(param_1 + 0x138) = 0x1010000;
  *(short *)(param_1 + 0x130) = sVar5;
  thunk_FUN_ram_42092c00(0x4206b570,0xb,1);
  FUN_ram_4208d02c(3,2,&LAB_ram_4206bdee);
  FUN_ram_4208d02c(3,0,0x4206c046);
  FUN_ram_4208cf3a(3,1,0x4206d5a8);
  FUN_ram_4208cf3a(3,0,0x4206d5a8);
  FUN_ram_4208d02c(3,1,0x4206b70e);
  FUN_ram_4208cf3a(3,2,0x4206d4c2);
  FUN_ram_4208d02c(4,0,0x4206cce2);
  return;
}

