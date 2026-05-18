
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42074a1e(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_f8 [12];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0 [12];
  uint local_70 [6];
  undefined4 local_58 [7];
  uint local_3c [7];
  
  local_a0[0] = 0x481ff;
  local_a0[1] = (uint)DAT_ram_3fcb0aa0 << 9 | 0x801ff;
  local_a0[2] = 0x1713ff;
  local_a0[3] = 0x4801ff;
  local_a0[4] = 0xf50000;
  local_a0[5] = 0xf60000;
  FUN_ram_40399daa(auStack_e0,0x3fcb11dc,0x10);
  FUN_ram_40399daa(local_58,0x3fcb11ec,0x1c);
  FUN_ram_40399daa(auStack_d0,0x3fcb1208,0x10);
  FUN_ram_40399daa(auStack_f8,0x3fcb1218,0xc);
  iVar6 = 0;
  do {
    *(undefined4 *)((int)local_a0 + iVar6 + 0x18) = *(undefined4 *)((int)local_a0 + iVar6);
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x18);
  uStack_c0 = 0x401ff;
  uStack_bc = 0x801ff;
  uStack_b8 = 0x1401ff;
  uStack_b4 = 0x4807ff;
  iVar6 = 0;
  do {
    *(undefined4 *)((int)local_3c + iVar6) = *(undefined4 *)((int)local_58 + iVar6);
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x1c);
  uStack_b0 = 0x401ff;
  uStack_a8 = 0x1401ff;
  uStack_a4 = 0x4401ff;
  uStack_e8 = 0x5781ff;
  uStack_e4 = 0xf30000;
  local_a0[8] = 0x1717ff;
  uStack_ec = 0x14fdff;
  local_3c[2] = (uint)DAT_ram_3fcb0ab2 << 0xc | 0x4801ff;
  uStack_ac = 0x4807ff;
  local_a0[9] = 0x4807ff;
  iVar6 = 0;
  do {
    *(undefined4 *)((int)local_70 + iVar6) = *(undefined4 *)((int)local_a0 + iVar6 + 0x18);
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x18);
  local_70[3] = 0x4801ff;
  puVar4 = local_a0;
  uVar1 = 0;
  puVar5 = (uint *)&DAT_ram_600440e0;
  uVar7 = 0;
  while( true ) {
    *puVar5 = *puVar5 & 0xffff0000 | ((uVar1 + 5) * 0x100 | uVar1) & 0xffff;
    uVar2 = (uVar1 + 0x200) * 0x200;
    iVar6 = 0;
    do {
      _DAT_ram_600440cc = puVar4[iVar6];
      uVar3 = uVar2 & 0x7fe00;
      iVar6 = iVar6 + 1;
      uVar2 = uVar2 + 0x200;
      _DAT_ram_600440c8 = _DAT_ram_600440c8 & 0xfff801ff | uVar3;
    } while (iVar6 != 6);
    if (uVar7 + 1 == 0xd) break;
    if (uVar7 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x42074c76 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar7 * 4 + 0x3fcb11b0))();
      return;
    }
    puVar4 = local_70;
    uVar1 = uVar1 + 6;
    puVar5 = (uint *)&DAT_ram_600440ec;
    uVar7 = uVar7 + 1;
  }
  (*(code *)&LAB_ram_40393426)(1);
  return;
}

