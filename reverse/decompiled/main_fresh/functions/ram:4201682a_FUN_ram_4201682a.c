
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201682a(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 auStack_14 [2];
  
  iVar1 = 0x103;
  if (DAT_ram_3fcc4f98 != '\0') {
    iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,auStack_14);
    if (iVar1 == 0x1102) {
      iVar1 = 0;
    }
    else if (iVar1 == 0) {
      pcVar2 = "ect option.";
      do {
        uVar3 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        FUN_ram_4204bf00(auStack_14[0],uVar3);
      } while (pcVar2 != "he clearly weak options first.");
      iVar1 = FUN_ram_4204c0c8(auStack_14[0]);
      FUN_ram_4204c3d0(auStack_14[0]);
      DAT_ram_3fcc4f96 = 0;
      DAT_ram_3fcc4f97 = 0;
      DAT_ram_3fcc4f94 = 0;
      *(undefined1 *)(gp + -0x7b2) = 0xff;
      DAT_ram_3fcc4f95 = 0;
      *(undefined2 *)(gp + -0x7b0) = 0xb4;
      DAT_ram_3fcc4f8c = 0;
      _DAT_ram_3fcc4f90 = 0;
    }
  }
  return iVar1;
}

