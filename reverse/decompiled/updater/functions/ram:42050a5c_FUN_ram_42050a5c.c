
void FUN_ram_42050a5c(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  
  iVar6 = param_1 * 0x114;
  piVar7 = (int *)(iVar6 + 0x3fcb5828);
  cVar1 = (&DAT_ram_3fcb5834)[iVar6];
  if (cVar1 == '\x02') {
    cVar1 = *(char *)(iVar6 + 0x3fcb5836);
    *(char *)(iVar6 + 0x3fcb5836) = cVar1 + -1;
    if (cVar1 == '\x01') {
      cVar1 = *(char *)(iVar6 + 0x3fcb5837);
      cVar5 = cVar1 + '\x01';
      *(char *)(iVar6 + 0x3fcb5837) = cVar5;
      if (cVar1 == '\x03') {
        while( true ) {
          bVar2 = *(byte *)(iVar6 + 0x3fcb5835);
          if ((1 < bVar2) || (iVar4 = bVar2 + 1, *(int *)(&DAT_ram_3fcb57ec + iVar4 * 4) != 0))
          break;
          *(char *)(iVar6 + 0x3fcb5835) = (char)iVar4;
        }
        iVar4 = param_1 * 0x114;
        iVar6 = FUN_ram_420507b2(iVar4 + 0x3fcb5828);
        if ((iVar6 == 0) || (*(char *)(iVar4 + 0x3fcb593a) != '\0')) {
          FUN_ram_420507da(param_1,0);
          (&DAT_ram_3fcb5834)[param_1 * 0x114] = 0;
          return;
        }
        *(byte *)(iVar4 + 0x3fcb5835) = bVar2 + 1;
        *(undefined2 *)(iVar4 + 0x3fcb5836) = 1;
      }
      else {
        *(char *)(iVar6 + 0x3fcb5836) = cVar5;
      }
LAB_ram_42050af2:
      FUN_ram_420508b6(param_1);
      return;
    }
  }
  else if (cVar1 == '\x03') {
    cVar1 = *(char *)(iVar6 + 0x3fcb5830);
    for (cVar5 = '\0'; cVar5 != cVar1; cVar5 = cVar5 + '\x01') {
      if ((*piVar7 == 0) || (iVar6 = *piVar7 + -1, *piVar7 = iVar6, iVar6 == 0)) {
        piVar7[1] = 0;
        *(char *)(param_1 * 0x114 + 0x3fcb5830) = *(char *)(param_1 * 0x114 + 0x3fcb5830) + -1;
      }
      piVar7 = piVar7 + 1;
    }
    if (*(char *)(param_1 * 0x114 + 0x3fcb5830) == '\0') {
      (&DAT_ram_3fcb5834)[param_1 * 0x114] = 0;
    }
  }
  else if (cVar1 == '\x01') {
    do {
      sVar3 = FUN_ram_40391b64();
      puVar8 = (undefined1 *)0x3fcb5828;
      while ((puVar8[0xc] != '\x02' || (*(short *)(puVar8 + 10) != sVar3))) {
        puVar8 = puVar8 + 0x114;
        if (puVar8 == &DAT_ram_3fcb5c78) {
          iVar6 = param_1 * 0x114;
          *(short *)(&DAT_ram_3fcb5832 + iVar6) = sVar3;
          *(undefined4 *)(&DAT_ram_3fcb5834 + iVar6) = 0x10002;
          while( true ) {
            bVar2 = *(byte *)(iVar6 + 0x3fcb5835);
            if ((1 < bVar2) || (*(int *)(&DAT_ram_3fcb57ec + (uint)bVar2 * 4) != 0)) break;
            *(byte *)(iVar6 + 0x3fcb5835) = bVar2 + 1;
          }
          goto LAB_ram_42050af2;
        }
      }
    } while( true );
  }
  return;
}

