
int FUN_ram_4202641a(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_a4;
  uint uVar5;
  uint in_a7;
  
  uVar5 = 0;
  iVar3 = in_a4;
  do {
    if (in_a7 <= (uVar5 & 0xff)) {
      return 0;
    }
    iVar2 = iVar3;
    for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(iVar3 + 0x53c); iVar4 = iVar4 + 1) {
      puVar1 = (ushort *)(iVar2 + 0x122);
      iVar2 = iVar2 + 0x106;
      if (*puVar1 == param_1) {
        return in_a4 + uVar5 * 0x750 + 0x1e + iVar4 * 0x106;
      }
    }
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 0x750;
  } while( true );
}

