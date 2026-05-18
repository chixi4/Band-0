
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033bea(undefined4 param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 uStack_44;
  
  puVar1 = _DAT_ram_3fcdfb1c;
  pcVar2 = *(char **)(gp + -0x2b8);
  iVar6 = *(int *)(pcVar2 + 0x518);
  DAT_ram_3fcb51d1 = (undefined1)iVar6;
  *(undefined1 *)((int)_DAT_ram_3fcdfb1c + 0x4f) = 0xe;
  uStack_44 = 0;
  pcVar3 = (char *)(puVar1 + 0x15);
  iVar5 = 0;
  do {
    pcVar3[8] = -0x7d;
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    *(short *)(pcVar3 + 2) = (short)iVar5 * 5 + 0x96c;
    if (iVar5 == 0xd) {
      *(undefined2 *)((int)puVar1 + 0xf2) = 0x9b4;
    }
    if (*pcVar3 == '\0') {
      cVar4 = FUN_ram_42033734(*(undefined2 *)(pcVar3 + 2),0x83);
      *pcVar3 = cVar4;
    }
    iVar5 = iVar5 + 1;
    pcVar3 = pcVar3 + 0xc;
  } while (iVar5 != 0xe);
  if (*pcVar2 == '\x02') {
    if ((iVar6 == 2) || (((iVar6 != 1 && (pcVar2[0x504] == '\0')) && (pcVar2[0x509] != '\0')))) {
      uStack_44._0_1_ = pcVar2[0x508];
      iVar5 = 2;
    }
    else {
      uStack_44._0_1_ = pcVar2[0x3f3];
      iVar5 = 1;
    }
    if (iVar5 == 1) {
      uStack_44._1_1_ = pcVar2[0x3fc];
    }
    else {
      uStack_44._1_1_ = pcVar2[0x507];
    }
  }
  else {
    uStack_44._0_1_ = '\x01';
    if (iVar6 == 1) {
      uStack_44._0_1_ = FUN_ram_42043404(1);
    }
  }
  puVar1 = _DAT_ram_3fcdfb1c;
  *(undefined1 *)(_DAT_ram_3fcdfb1c + 1) = 0xff;
  *puVar1 = param_1;
  FUN_ram_42033a0a(&uStack_44);
  FUN_ram_42033b00(&uStack_44);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcdfb1c + 9,0x4202372a,0);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcdfb1c + 0xe,0x4202372a,1);
  return;
}

