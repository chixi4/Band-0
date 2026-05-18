
void FUN_ram_420526da(int param_1)

{
  char cVar1;
  short sVar2;
  byte extraout_a4;
  byte bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  int extraout_a5;
  undefined8 uVar9;
  
  iVar5 = param_1 * 0x114;
  piVar6 = (int *)(iVar5 + 0x3fcc207c);
  bVar3 = (&DAT_ram_3fcc2088)[iVar5];
  if (bVar3 == 2) {
    cVar1 = *(char *)(iVar5 + 0x3fcc208a);
    *(char *)(iVar5 + 0x3fcc208a) = cVar1 + -1;
    if (cVar1 == '\x01') {
      cVar1 = *(char *)(iVar5 + 0x3fcc208b);
      cVar4 = cVar1 + '\x01';
      *(char *)(iVar5 + 0x3fcc208b) = cVar4;
      if (cVar1 == '\x03') {
        while( true ) {
          bVar3 = *(byte *)(iVar5 + 0x3fcc2089);
          if ((1 < bVar3) || (iVar8 = bVar3 + 1, *(int *)(&DAT_ram_3fcc2040 + iVar8 * 4) != 0))
          break;
          *(char *)(iVar5 + 0x3fcc2089) = (char)iVar8;
        }
        iVar8 = param_1 * 0x114;
        iVar5 = FUN_ram_4205241e(iVar8 + 0x3fcc207c);
        if ((iVar5 == 0) || (*(char *)(iVar8 + 0x3fcc218e) != '\0')) {
          FUN_ram_42052446(param_1,0);
          (&DAT_ram_3fcc2088)[param_1 * 0x114] = 0;
          return;
        }
        *(byte *)(iVar8 + 0x3fcc2089) = bVar3 + 1;
        *(undefined2 *)(iVar8 + 0x3fcc208a) = 1;
      }
      else {
        *(char *)(iVar5 + 0x3fcc208a) = cVar4;
      }
LAB_ram_4205276c:
      FUN_ram_42052522(param_1);
      return;
    }
  }
  else if (bVar3 < 3) {
    if (bVar3 != 0) {
      do {
        sVar2 = FUN_ram_403926c4();
        puVar7 = (undefined1 *)0x3fcc207c;
        while ((puVar7[0xc] != '\x02' || (*(short *)(puVar7 + 10) != sVar2))) {
          puVar7 = puVar7 + 0x114;
          if (puVar7 == &DAT_ram_3fcc24cc) {
            iVar8 = param_1 * 0x114;
            iVar5 = iVar8 + 0x3fcc207c;
            *(short *)(&DAT_ram_3fcc2086 + iVar8) = sVar2;
            *(undefined4 *)(&DAT_ram_3fcc2088 + iVar8) = 0x10002;
            uVar9 = 0x3fcc200000000001;
            while( true ) {
              bVar3 = *(byte *)(iVar5 + 0xd);
              if (((uint)uVar9 < (uint)bVar3) ||
                 (*(int *)((int)((ulonglong)uVar9 >> 0x20) + 0x40 + (uint)bVar3 * 4) != 0)) break;
LAB_ram_4205278c:
              *(byte *)(iVar5 + 0xd) = bVar3 + 1;
            }
            goto LAB_ram_4205276c;
          }
        }
      } while( true );
    }
  }
  else {
    if (bVar3 != 3) {
      uVar9 = FUN_ram_4039bf1e();
      iVar5 = extraout_a5;
      bVar3 = extraout_a4;
      goto LAB_ram_4205278c;
    }
    cVar1 = *(char *)(iVar5 + 0x3fcc2084);
    for (cVar4 = '\0'; cVar4 != cVar1; cVar4 = cVar4 + '\x01') {
      if ((*piVar6 == 0) || (iVar5 = *piVar6 + -1, *piVar6 = iVar5, iVar5 == 0)) {
        piVar6[1] = 0;
        *(char *)(param_1 * 0x114 + 0x3fcc2084) = *(char *)(param_1 * 0x114 + 0x3fcc2084) + -1;
      }
      piVar6 = piVar6 + 1;
    }
    if (*(char *)(param_1 * 0x114 + 0x3fcc2084) == '\0') {
      (&DAT_ram_3fcc2088)[param_1 * 0x114] = 0;
    }
  }
  return;
}

