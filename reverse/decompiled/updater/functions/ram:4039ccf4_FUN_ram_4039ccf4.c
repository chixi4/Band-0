
undefined4 FUN_ram_4039ccf4(int param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  pbVar4 = *(byte **)(*(int *)(param_1 + 4) + 4);
  bVar1 = *pbVar4;
  uVar3 = *param_2 & 0x20000000;
  if ((*param_2 & 0x10000000) == 0) {
    cVar2 = (uVar3 == 0) + '\x01';
  }
  else {
    cVar2 = (uVar3 != 0) << 1;
  }
  if ((bVar1 & 0xc) == 8) {
    (*(code *)&SUB_ram_40011ba4)(pbVar4 + 10,cVar2,pbVar4 + 4,pbVar4[1]);
  }
  else if (((bVar1 & 0xc) == 0) && ((bVar1 & 0xf0) == 0x80)) {
    if ((**(uint **)(param_1 + 0x24) & 0x10) != 0) {
      return 0;
    }
    uVar3 = (*(code *)&SUB_ram_40011c58)(pbVar4);
    uVar6 = 0;
    if ((uVar3 & 0xffff) + 3 < (param_2[0xb] & 0xfff)) {
      uVar6 = ((param_2[0xb] & 0xfff) - 4) - uVar3 & 0xffff;
    }
    iVar5 = (*(code *)&SUB_ram_40011bc0)(pbVar4 + 10);
    if ((iVar5 != 0) && (*(short *)(param_1 + 0xc) == 1)) {
      uVar3 = 1;
      if ((*param_2 & 0x1f00) == 0xb00) {
        uVar3 = 6;
      }
      FUN_ram_4039c942((((param_2[0xb] & 0xffffff) >> 0xc) << 3) / uVar3);
      FUN_ram_4039c81e(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4),pbVar4 + 0x18,
                       pbVar4 + 0x18 + uVar6,0);
    }
  }
  if (cVar2 != '\x02') {
    iVar5 = (*(code *)&SUB_ram_40011c6c)(cVar2,pbVar4 + 10);
    *(int *)(param_1 + 0x1c) = iVar5;
    if (iVar5 != 0) {
      (*(code *)&SUB_ram_40011c68)(iVar5,param_2);
    }
  }
  return 0;
}

