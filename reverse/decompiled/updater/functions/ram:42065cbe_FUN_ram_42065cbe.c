
undefined4 FUN_ram_42065cbe(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iStack_34;
  
  iVar13 = *(int *)(param_1 + 0x7c);
  if (iVar13 != 0) {
    (*(code *)&SUB_ram_40010488)(iVar13 + 0xec,0,0x40);
    *(undefined4 *)(iVar13 + 0x130) = 0;
    *(undefined4 *)(iVar13 + 300) = 0;
    uVar2 = (*(code *)&SUB_ram_400104a8)(param_2);
    if (((uVar2 != 0) && (iVar3 = FUN_ram_42065a22(param_2), iVar3 != 0)) &&
       (pbVar4 = (byte *)FUN_ram_42065b18(param_2,uVar2,&iStack_34), pbVar4 != (byte *)0x0)) {
      uVar12 = 0;
      uVar11 = 0;
      uVar9 = ~(int)(char)*pbVar4 >> 0x1f & 2;
      iVar10 = uVar9 + 3;
      *(int *)(iVar13 + 0x138) = iVar10;
      iVar3 = uVar2 - uVar2 / 5;
      *(int *)(iVar13 + 0x134) = iVar3;
      iVar3 = ((uint)(iVar3 * 0x13) >> 2) - 5;
      *(int *)(iVar13 + 0x130) = iVar10 * 8 + iVar3;
      puVar1 = (undefined1 *)(iVar13 + uVar9 + 0xef);
      do {
        iVar10 = iStack_34;
        puVar8 = puVar1;
        if (iVar3 < 1) {
LAB_ram_42065d8a:
          *(int *)(iVar13 + 300) = (int)puVar8 - (iVar13 + 0xec);
          FUN_ram_42022954(pbVar4,iVar10);
          return 0;
        }
        if (uVar12 < 8) {
          pbVar5 = pbVar4;
          while( true ) {
            pbVar6 = pbVar5 + 1;
            if (pbVar4 + iStack_34 <= pbVar6) break;
            *pbVar5 = *pbVar5 << 1 | *pbVar6 >> 7;
            pbVar5 = pbVar6;
          }
          iVar7 = 0;
          if (pbVar4 + 1 <= pbVar4 + iStack_34) {
            iVar7 = iStack_34 + -1;
          }
          pbVar4[iVar7] = *pbVar5 << 1;
          uVar2 = FUN_ram_42065c62(pbVar4);
          FUN_ram_42065c7a(pbVar4,iVar10);
          uVar11 = uVar11 << 0x13 | uVar2;
          uVar12 = uVar12 + 0x13;
        }
        puVar8 = puVar1 + 1;
        if (iVar3 < 8) {
          *puVar1 = (char)((uVar11 >> (uVar12 - iVar3 & 0x1f)) << (8U - iVar3 & 0x1f));
          goto LAB_ram_42065d8a;
        }
        uVar12 = uVar12 - 8;
        *puVar1 = (char)(uVar11 >> (uVar12 & 0x1f));
        iVar3 = iVar3 + -8;
        puVar1 = puVar8;
      } while( true );
    }
  }
  return 0xffffffff;
}

