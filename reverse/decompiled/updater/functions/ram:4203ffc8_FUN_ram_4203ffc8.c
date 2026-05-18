
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203ffc8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [32];
  undefined1 uStack_54;
  undefined1 auStack_50 [32];
  undefined1 uStack_30;
  undefined1 auStack_2f [6];
  undefined1 uStack_29;
  undefined4 uStack_28;
  
  iVar2 = _DAT_ram_3fcb4f84;
  iVar1 = _DAT_ram_3fcb4ee8;
  iVar10 = *(int *)(gp + -0x2b8);
  puVar3 = (undefined4 *)FUN_ram_42040f3a();
  iVar12 = *(int *)(iVar2 + 0xe4);
  puVar11 = (undefined4 *)(iVar10 + 4);
  if (((*(char *)(*(int *)(gp + -0x2b8) + 0x415) != '\0') &&
      (*(char *)(*(int *)(gp + -0x2b8) + 0x35f) == '\0')) &&
     (iVar10 = FUN_ram_40399d6c(puVar3 + 9,iVar12 + 4,6), iVar10 == 0)) {
    puVar11 = puVar3;
  }
  if (iVar12 == 0) {
    FUN_ram_42033fd8(1,4,2,0x3c07feb0);
    uVar4 = 0;
  }
  else {
    if ((*(uint *)(iVar12 + 0xc) & 1) == 0) {
      FUN_ram_4204478c(iVar12,auStack_7c);
      puVar3 = puVar11 + 1;
      uStack_54 = 0;
      FUN_ram_40399daa(auStack_74,puVar3,0x20);
      iVar10 = *(int *)(iVar2 + 0xe4);
      if (*(char *)(iVar10 + 0xac) == '\0') {
        uVar4 = 0x3c072d30;
      }
      else if (*(char *)(iVar10 + 0xac) == '\x01') {
        uVar4 = 0x3c072d2c;
      }
      else {
        uVar4 = 0x3c072d24;
      }
      uVar5 = (uint)*(byte *)(iVar10 + 9);
      uVar6 = (uint)*(byte *)(iVar10 + 8);
      uVar7 = (uint)*(byte *)(iVar10 + 7);
      FUN_ram_42033fd8(1,4,3,0x3c07e450,auStack_74,*(ushort *)(iVar10 + 0x26) & 0x3fff,
                       *(undefined1 *)(iVar10 + 0xab),uVar4,*(undefined1 *)(iVar10 + 4),
                       *(undefined1 *)(iVar10 + 5),*(undefined1 *)(iVar10 + 6),uVar7,uVar6,uVar5);
      if ((byte)(DAT_ram_3fcb512e - 6) < 3) {
        uVar4 = *(undefined4 *)((uint)(byte)(DAT_ram_3fcb512e - 6) * 4 + 0x3c078f7c);
      }
      else {
        uVar9 = DAT_ram_3fcb512d - 1 & 0xff;
        if (uVar9 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x420402a0 */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(uVar9 * 4 + 0x3c078f38))();
          return uVar4;
        }
        uVar4 = 0x3c07029c;
      }
      if (DAT_ram_3fcb512c == '\x06') {
        if (DAT_ram_3fcb51c0 == '\0') {
          uVar8 = 0x3c072e10;
        }
        else {
          uVar8 = 0x3c072e20;
        }
      }
      else {
        uVar8 = 0x3c071e68;
      }
      FUN_ram_42033fd8(1,4,3,0x3c07e4a4,uVar4,uVar8,auStack_7c,(int)*(char *)(iVar1 + 0xa4),
                       DAT_ram_3fcb512e,DAT_ram_3fcb5130,_DAT_ram_3fcb5134,uVar7,uVar6,uVar5);
      FUN_ram_4203f0cc(iVar1);
      FUN_ram_4203e602();
      if ((*(int *)(_DAT_ram_3fcdfaf0 + 4) == 0) || (*(int *)(_DAT_ram_3fcdfaf0 + 8) != 2)) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar2 + 4);
        FUN_ram_42048fbe(0);
        iVar10 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
        if (iVar10 != 0) {
          (*(code *)&SUB_ram_40011ee4)();
        }
      }
      if (*(char *)(*(int *)(gp + -0x2b8) + 0x92) == '\0') {
        FUN_ram_40399daa(*(int *)(gp + -0x2b8) + 0x93,*(int *)(iVar2 + 0xe4) + 4,6);
      }
      FUN_ram_42039cea(*(undefined1 *)(*(int *)(iVar2 + 0xe4) + 0xab));
      *(uint *)(*(int *)(iVar2 + 0xe4) + 0xc) = *(uint *)(*(int *)(iVar2 + 0xe4) + 0xc) | 1;
      DAT_ram_3fcdfad4 = 1;
      FUN_ram_42033fd8(1,0xc,4,0x3c07b510,7);
      FUN_ram_420392fa(7);
      *(undefined1 *)(*(int *)(iVar2 + 0xe4) + 0x24) = 0;
      FUN_ram_4203dc14(iVar1);
      (*(code *)&SUB_ram_40011d48)();
      FUN_ram_40399daa(auStack_50,puVar3,0x20);
      uStack_30 = (undefined1)*puVar11;
      FUN_ram_40399daa(auStack_2f,iVar2 + 0x9c,6);
      uStack_29 = *(undefined1 *)(*(int *)(iVar2 + 0xe4) + 0xab);
      uStack_28 = 1;
      if (2 < DAT_ram_3fcb512e - 6) {
        uVar5 = DAT_ram_3fcb512d - 1 & 0xff;
        if (uVar5 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x4204026c */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(uVar5 * 4 + 0x3c078ef4))();
          return uVar4;
        }
        uStack_28 = 0x11;
      }
      FUN_ram_40399daa(*(int *)(iVar2 + 0xe4) + 0x380,puVar3,0x20);
      (**(code **)(_DAT_ram_3fcb50e8 + 0xc))(iVar1 + 4);
      FUN_ram_42033fd8(1,4,4,0x3c07b52c);
      FUN_ram_4203bea0(4,auStack_50,0x30);
      FUN_ram_42033fd8(1,4,4,0x3c07b548,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),5);
      *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 5;
      DAT_ram_3fcb514b = 0;
      *(undefined1 *)(iVar1 + 0x33c) = 0;
    }
    FUN_ram_4203fda2();
    uVar4 = 1;
  }
  return uVar4;
}

