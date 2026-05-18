
void FUN_ram_4204622a(char *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  undefined4 uStack_574;
  undefined4 uStack_570;
  int aiStack_56c [3];
  undefined1 uStack_560;
  undefined1 uStack_55f;
  undefined2 uStack_55e;
  undefined4 auStack_55c [3];
  undefined1 auStack_550 [4];
  undefined1 auStack_54c [12];
  undefined1 auStack_540 [128];
  undefined1 auStack_4c0 [640];
  undefined1 auStack_240 [2];
  undefined2 uStack_23e;
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  byte abStack_238 [516];
  
  while (*param_1 != '\0') {
    uStack_55e = 0x3500;
    auStack_55c[0] = 0;
    uStack_55f = 2;
    FUN_ram_4205bffe(auStack_55c,auStack_540,0x7f);
    iVar5 = FUN_ram_42051600(2,2,0);
    if (iVar5 < 0) break;
    uStack_574 = 1;
    FUN_ram_42051b14(iVar5,0xfff,4,&uStack_574);
    iVar6 = FUN_ram_4205109a(iVar5,&uStack_560,0x10);
    if (iVar6 < 0) {
      FUN_ram_420b1020(iVar5);
      FUN_ram_40398498(100);
    }
    else {
LAB_ram_420463b4:
      if (*param_1 != '\0') {
        uStack_570 = 0x10;
        uVar8 = FUN_ram_4205132e(iVar5,auStack_4c0 + 0x80,0x1ff,0,auStack_550,&uStack_570);
        if ((int)uVar8 < 0) {
          FUN_ram_420b1020(iVar5);
          goto LAB_ram_420463da;
        }
        FUN_ram_4205bffe(auStack_54c,auStack_540,0x7f);
        auStack_4c0[uVar8 + 0x80] = 0;
        if (uVar8 < 0x201) {
          (*(code *)&SUB_ram_40010488)(auStack_240,0,0x200);
          FUN_ram_4039c11e(auStack_240,auStack_4c0 + 0x80,uVar8);
          if ((uStack_23e >> 0xb & 0xf) == 0) {
            uStack_23e = uStack_23e | 0x80;
            uVar13 = (uStack_23c & 0xff) << 8 | (uint)(uStack_23c >> 8);
            uStack_23a = uStack_23c;
            uVar14 = uVar13 * 0x10 + uVar8;
            if (uVar14 < 0x201) {
              for (iVar6 = 0; iVar6 < (int)uVar13; iVar6 = iVar6 + 1) {
                iVar7 = 0;
                puVar11 = auStack_4c0;
                pbVar16 = abStack_238 + 4;
                do {
                  uVar17 = (uint)*pbVar16;
                  iVar15 = uVar17 + 1;
                  iVar7 = iVar7 + iVar15;
                  if (0x80 < iVar7) goto LAB_ram_420463b4;
                  iVar9 = FUN_ram_4039c11e(puVar11,pbVar16 + 1,uVar17);
                  pbVar16 = pbVar16 + iVar15;
                  bVar1 = *pbVar16;
                  *(undefined1 *)(uVar17 + iVar9) = 0x2e;
                  puVar11 = (undefined1 *)(iVar9 + iVar15);
                } while (bVar1 != 0);
                sVar2 = *(short *)(pbVar16 + 1);
                auStack_4c0[iVar7 + -1] = 0;
                if (sVar2 == 0x100) {
                  uVar3 = *(undefined2 *)(pbVar16 + 3);
                  iVar15 = *(int *)(param_1 + 8);
                  pcVar4 = param_1;
                  for (iVar7 = 0; iVar7 < iVar15; iVar7 = iVar7 + 1) {
                    uVar12 = *(undefined4 *)(pcVar4 + 0xc);
                    iVar9 = FUN_ram_4039c438(uVar12,&DAT_ram_3c0c381c);
                    if ((iVar9 == 0) || (iVar9 = FUN_ram_4039c438(uVar12,auStack_4c0), iVar9 == 0))
                    {
                      if (*(int *)(pcVar4 + 0x10) == 0) {
                        iVar9 = *(int *)(pcVar4 + 0x14);
                        if (iVar9 == 0) goto LAB_ram_42046494;
                      }
                      else {
                        uVar12 = FUN_ram_4205f5b4();
                        FUN_ram_4205f8ee(uVar12,aiStack_56c);
                        iVar9 = aiStack_56c[0];
                        if (aiStack_56c[0] == 0) break;
                      }
                      auStack_240[uVar8] = 0xc0;
                      auStack_240[uVar8 + 1] = 0xc;
                      *(undefined1 *)((int)&uStack_23e + uVar8 + 1) = 1;
                      abStack_238[uVar8 + 3] = 4;
                      *(char *)((int)&uStack_23c + uVar8) = (char)uVar3;
                      abStack_238[uVar8 + 4] = (byte)iVar9;
                      abStack_238[uVar8 + 5] = (byte)((uint)iVar9 >> 8);
                      *(undefined1 *)((int)&uStack_23e + uVar8) = 0;
                      *(char *)((int)&uStack_23c + uVar8 + 1) = (char)((ushort)uVar3 >> 8);
                      abStack_238[uVar8 - 2] = 0;
                      abStack_238[uVar8 - 1] = 0;
                      abStack_238[uVar8] = 0;
                      abStack_238[uVar8 + 1] = 0;
                      abStack_238[uVar8 + 2] = 0;
                      abStack_238[uVar8 + 6] = (byte)((uint)iVar9 >> 0x10);
                      abStack_238[uVar8 + 7] = (byte)((uint)iVar9 >> 0x18);
                      break;
                    }
LAB_ram_42046494:
                    pcVar4 = pcVar4 + 0xc;
                  }
                }
              }
              if (uVar14 != 0) {
                iVar6 = 3;
                while (iVar7 = FUN_ram_42051418(iVar5,auStack_240,uVar14,0,auStack_550,uStack_570),
                      iVar7 < 0) {
                  piVar10 = (int *)(*(code *)&SUB_ram_40010670)();
                  if (*piVar10 != 0xc) goto LAB_ram_420463da;
                  iVar6 = iVar6 + -1;
                  if (iVar6 == 0) break;
                  FUN_ram_40398498(2);
                }
              }
            }
          }
        }
        goto LAB_ram_420463b4;
      }
LAB_ram_420463da:
      FUN_ram_420519a8(iVar5,0);
      FUN_ram_420b1020(iVar5);
    }
  }
  FUN_ram_40397f1c(0);
  return;
}

