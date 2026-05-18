
undefined1 * FUN_ram_42065b18(int param_1,uint param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte abStack_120 [61];
  undefined1 uStack_e3;
  
  (*(code *)&SUB_ram_40010488)(abStack_120,0x80,0x100);
  for (iVar7 = 0; *(byte *)(iVar7 + 0x3c0733c4) != 0; iVar7 = iVar7 + 1) {
    abStack_120[*(byte *)(iVar7 + 0x3c0733c4)] = (byte)iVar7;
  }
  uStack_e3 = 0;
  iVar7 = 0;
  for (uVar3 = 0; uVar3 != param_2; uVar3 = uVar3 + 1) {
    iVar7 = iVar7 + (uint)(abStack_120[*(byte *)(param_1 + uVar3)] != 0x80);
  }
  if (iVar7 != 0) {
    puVar1 = (undefined1 *)thunk_FUN_ram_4039047a((iVar7 + (-iVar7 & 7U) >> 3) * 5);
    if (puVar1 != (undefined1 *)0x0) {
      iVar11 = 0;
      iVar2 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar3 = 0;
      puVar6 = puVar1;
      do {
        if ((-iVar7 & 7U) + param_2 <= uVar10) {
LAB_ram_42065c50:
          *param_3 = (int)puVar6 - (int)puVar1;
          return puVar1;
        }
        uVar4 = 0x3d;
        if (uVar10 < param_2) {
          uVar4 = (uint)*(byte *)(param_1 + uVar10);
        }
        if (abStack_120[uVar4] != 0x80) {
          iVar11 = iVar11 + (uint)(uVar4 == 0x3d);
          uVar5 = uVar8 >> 0x1b;
          iVar2 = iVar2 + 1;
          uVar9 = uVar8 << 5;
          uVar8 = abStack_120[uVar4] | uVar9;
          uVar3 = uVar3 << 5 | uVar5;
          if (iVar2 == 8) {
            puVar6[1] = (char)(uVar9 >> 0x18);
            puVar6[2] = (char)(uVar9 >> 0x10);
            puVar6[3] = (char)(uVar9 >> 8);
            *puVar6 = (char)uVar3;
            puVar6[4] = (char)uVar8;
            puVar6 = puVar6 + 5;
            if (iVar11 != 0) {
              puVar6 = puVar6 + -(iVar11 * 5 >> 3);
              goto LAB_ram_42065c50;
            }
            iVar2 = 0;
            uVar8 = 0;
            uVar3 = 0;
          }
        }
        uVar10 = uVar10 + 1;
      } while( true );
    }
  }
  return (undefined1 *)0x0;
}

