
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201097e(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  puVar1 = &DAT_ram_3c0c55bc;
  do {
    if (*puVar1 == (_DAT_ram_600c408c & 0x3f & *puVar1)) {
      uVar2 = puVar1[1];
      goto LAB_ram_420109a4;
    }
    puVar1 = puVar1 + 2;
  } while (puVar1 != &DAT_ram_3c0c55ec);
  uVar2 = 0;
LAB_ram_420109a4:
  *param_1 = uVar2;
  if (uVar2 != 0) {
    return;
  }
  if ((_DAT_ram_600c4080 & 0x20) == 0) {
    if ((_DAT_ram_600c4080 & 2) == 0) {
      uVar2 = 0;
      if ((_DAT_ram_600c4080 & 1) == 0) goto LAB_ram_420109ca;
      pcVar3 = &UNK_ram_3c0c55b4;
    }
    else {
      pcVar3 = "";
    }
  }
  else {
    pcVar3 = "r ideas.";
  }
  uVar2 = *(uint *)(pcVar3 + 4);
LAB_ram_420109ca:
  *param_1 = uVar2;
  return;
}

