
void FUN_ram_40399b58(void)

{
  int unaff_retaddr;
  int iVar1;
  undefined2 **ppuVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined4 *extraout_a2;
  int extraout_a3;
  int iVar7;
  uint uVar8;
  undefined4 **ppuVar9;
  undefined8 uVar10;
  undefined1 auStack_190 [8];
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined2 uStack_180;
  undefined1 uStack_17e;
  undefined4 *local_17c [3];
  int iStack_170;
  undefined4 uStack_16c;
  undefined1 *puStack_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 *apuStack_158 [52];
  undefined2 auStack_64 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined2 *local_54 [4];
  undefined2 *apuStack_44 [13];
  
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  auStack_64[0] = 0;
  (*(code *)&SUB_ram_40010488)(apuStack_44,0,0x32);
  (*(code *)&SUB_ram_4001057c)(unaff_retaddr + -3,&uStack_60,0x10);
  (*(code *)&SUB_ram_4001057c)(0,auStack_64,10);
  local_54[0] = (undefined2 *)0x3fcb1050;
  local_54[3] = auStack_64;
  local_54[1] = (undefined2 *)&uStack_60;
  local_54[2] = (undefined2 *)0x3fcb106c;
  ppuVar2 = local_54;
  do {
    puVar5 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    (*(code *)&SUB_ram_4001050c)(apuStack_44,puVar5);
  } while (apuStack_44 != ppuVar2);
  iVar1 = 0x40399bd8;
  uVar10 = FUN_ram_40394adc(apuStack_44);
  iVar7 = (int)uVar10;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17e = 0;
  (*(code *)&SUB_ram_4001057c)((int)((ulonglong)uVar10 >> 0x20),auStack_190,10);
  iVar3 = FUN_ram_403917a6();
  local_17c[1] = extraout_a2;
  iStack_160 = extraout_a3;
  if (iVar3 == 0) {
    if (iVar7 + 0xc4000000U < 0x400000) {
      iVar7 = 0x3fcb1078;
    }
    if (extraout_a2 + -0xf000000 < (undefined4 *)0x400000) {
      uStack_188 = CONCAT22(uStack_188._2_2_,0x7830);
      local_17c[1] = &uStack_188;
      (*(code *)&SUB_ram_4001057c)(iVar1 + -4,(int)&uStack_188 + 2,0x10);
    }
    if (extraout_a3 + 0xc4000000U < 0x400000) {
      iStack_160 = 0x3fcb1078;
    }
  }
  local_17c[0] = (undefined4 *)0x3fcb1090;
  if (local_17c[1] == (undefined4 *)0x0) {
    local_17c[1] = (undefined4 *)0x3fcb108c;
  }
  local_17c[2] = (undefined4 *)0x3fcb1194;
  uStack_16c = 0x3fcb10a0;
  uStack_164 = 0x3fcb10a4;
  iStack_170 = iVar7;
  puStack_168 = auStack_190;
  uStack_15c = 0x3fcb10a8;
  ppuVar9 = local_17c;
  iVar1 = 0;
  uVar8 = 199;
  do {
    puVar6 = *ppuVar9;
    uVar4 = (*(code *)&SUB_ram_400104a8)(puVar6);
    if (uVar8 < uVar4) {
      uVar4 = uVar8;
    }
    uVar8 = uVar8 - uVar4;
    FUN_ram_40399daa((int)apuStack_158 + iVar1,puVar6,uVar4);
    iVar1 = iVar1 + uVar4;
  } while ((uVar8 != 0) && (ppuVar9 = ppuVar9 + 1, ppuVar9 != apuStack_158));
  *(undefined1 *)((int)apuStack_158 + iVar1) = 0;
  FUN_ram_40394adc(apuStack_158);
  return;
}

