
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420108e6(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  puVar1 = (uint *)&DAT_ram_3c074654;
  do {
    if (*puVar1 == (_DAT_ram_600c408c & 0x3f & *puVar1)) {
      uVar2 = puVar1[1];
      goto LAB_ram_4201090c;
    }
    puVar1 = puVar1 + 2;
  } while (puVar1 != (uint *)&DAT_ram_3c074684);
  uVar2 = 0;
LAB_ram_4201090c:
  *param_1 = uVar2;
  if (uVar2 != 0) {
    return;
  }
  if ((_DAT_ram_600c4080 & 0x20) == 0) {
    if ((_DAT_ram_600c4080 & 2) == 0) {
      uVar2 = 0;
      if ((_DAT_ram_600c4080 & 1) == 0) goto LAB_ram_42010932;
      iVar3 = 0x3c07464c;
    }
    else {
      iVar3 = 0x3c074644;
    }
  }
  else {
    iVar3 = 0x3c07463c;
  }
  uVar2 = *(uint *)(iVar3 + 4);
LAB_ram_42010932:
  *param_1 = uVar2;
  return;
}

