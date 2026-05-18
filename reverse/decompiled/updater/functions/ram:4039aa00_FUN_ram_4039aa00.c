
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039aa00(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = **(uint **)(param_1 + 0x24);
  if ((uVar3 & 0x400000) == 0) {
    iVar4 = *(int *)(gp + 0x5b8);
  }
  else {
    iVar4 = *(int *)(gp + 0x5b0);
  }
  iVar4 = iVar4 << 10;
  if ((uVar3 & 0x10020) != 0) {
    pbVar2 = *(byte **)(*(int *)(param_1 + 4) + 4);
    if ((uVar3 & 0x40000) != 0) {
      pbVar2 = pbVar2 + 8;
    }
    bVar1 = *pbVar2;
    if ((bVar1 & 0xc) == 0) {
      if ((bVar1 & 0xf0) == 0x40) {
        iVar4 = 0x1e000;
      }
      else {
        if ((bVar1 & 0xf0) != 0xd0) goto LAB_ram_4039aa8a;
        if (_DAT_ram_3fcb3944 != 0) {
          iVar4 = _DAT_ram_3fcb3944 << 10;
        }
      }
    }
    else {
      if ((bVar1 & 0xc) != 8) {
LAB_ram_4039aa8a:
        FUN_ram_42033fd8(6,0x800,1,0x3c07de34,0x3c072f44,0x1244);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar4 = FUN_ram_40392e5a(pbVar2[1] >> 4 & 1,(*(uint **)(param_1 + 0x24))[6]);
    }
  }
  *param_3 = iVar4;
  return;
}

