
void FUN_ram_420526da(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  
  iVar6 = param_1 * 0x114;
  piVar7 = (int *)(iVar6 + 0x3fcc207c);
  bVar1 = (&DAT_ram_3fcc2088)[iVar6];
  if (bVar1 == 2) {
    cVar2 = *(char *)(iVar6 + 0x3fcc208a);
    *(char *)(iVar6 + 0x3fcc208a) = cVar2 + -1;
    if (cVar2 == '\x01') {
      cVar2 = *(char *)(iVar6 + 0x3fcc208b);
      cVar5 = cVar2 + '\x01';
      *(char *)(iVar6 + 0x3fcc208b) = cVar5;
      if (cVar2 == '\x03') {
        while( true ) {
          bVar1 = *(byte *)(iVar6 + 0x3fcc2089);
          if ((1 < bVar1) || (iVar4 = bVar1 + 1, *(int *)(&DAT_ram_3fcc2040 + iVar4 * 4) != 0))
          break;
          *(char *)(iVar6 + 0x3fcc2089) = (char)iVar4;
        }
        iVar4 = param_1 * 0x114;
        iVar6 = FUN_ram_4205241e(iVar4 + 0x3fcc207c);
        if ((iVar6 == 0) || (*(char *)(iVar4 + 0x3fcc218e) != '\0')) {
          FUN_ram_42052446(param_1,0);
          (&DAT_ram_3fcc2088)[param_1 * 0x114] = 0;
          return;
        }
        *(byte *)(iVar4 + 0x3fcc2089) = bVar1 + 1;
        *(undefined2 *)(iVar4 + 0x3fcc208a) = 1;
      }
      else {
        *(char *)(iVar6 + 0x3fcc208a) = cVar5;
      }
LAB_ram_4205276c:
      FUN_ram_42052522(param_1);
      return;
    }
  }
  else if (bVar1 < 3) {
    if (bVar1 != 0) {
      do {
        sVar3 = FUN_ram_403926c4();
        puVar8 = (undefined1 *)0x3fcc207c;
        while ((puVar8[0xc] != '\x02' || (*(short *)(puVar8 + 10) != sVar3))) {
          puVar8 = puVar8 + 0x114;
          if (puVar8 == &DAT_ram_3fcc24cc) {
            iVar6 = param_1 * 0x114;
            *(short *)(&DAT_ram_3fcc2086 + iVar6) = sVar3;
            *(undefined4 *)(&DAT_ram_3fcc2088 + iVar6) = 0x10002;
            while( true ) {
              bVar1 = *(byte *)(iVar6 + 0x3fcc2089);
              if ((1 < bVar1) || (*(int *)(&DAT_ram_3fcc2040 + (uint)bVar1 * 4) != 0)) break;
              *(byte *)(iVar6 + 0x3fcc2089) = bVar1 + 1;
            }
            goto LAB_ram_4205276c;
          }
        }
      } while( true );
    }
  }
  else {
    if (bVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    cVar2 = *(char *)(iVar6 + 0x3fcc2084);
    for (cVar5 = '\0'; cVar5 != cVar2; cVar5 = cVar5 + '\x01') {
      if ((*piVar7 == 0) || (iVar6 = *piVar7 + -1, *piVar7 = iVar6, iVar6 == 0)) {
        piVar7[1] = 0;
        *(char *)(param_1 * 0x114 + 0x3fcc2084) = *(char *)(param_1 * 0x114 + 0x3fcc2084) + -1;
      }
      piVar7 = piVar7 + 1;
    }
    if (*(char *)(param_1 * 0x114 + 0x3fcc2084) == '\0') {
      (&DAT_ram_3fcc2088)[param_1 * 0x114] = 0;
    }
  }
  return;
}

