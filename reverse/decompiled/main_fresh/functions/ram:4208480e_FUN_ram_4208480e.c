
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208480e(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = FUN_ram_4208b9d4();
  cVar1 = DAT_ram_3fcc4261;
  iVar3 = FUN_ram_4208b9b0(DAT_ram_3fcc4261);
  if (cVar1 == '\x01') {
    iVar9 = 0xb;
    iVar4 = 3;
  }
  else if (cVar1 == '\x02') {
    iVar9 = 0xc;
    iVar4 = 0x10;
  }
  else {
    iVar9 = 0x17;
    iVar4 = 0x13;
  }
  if (param_1 == 0) {
    uVar6 = 0x168;
    uVar5 = 0x78;
LAB_ram_42084908:
    if (iVar2 == 0) {
      iVar8 = iVar9 * uVar5 + iVar4 * uVar6;
    }
    else {
      iVar8 = iVar3 * uVar5;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x14);
    uVar5 = 0x78;
    if ((uVar6 != 0) && (uVar5 = uVar6, 0x5dc < uVar6)) {
      uVar5 = 0x5dc;
    }
    uVar7 = *(uint *)(param_1 + 0x18);
    uVar6 = 0x168;
    if ((uVar7 != 0) && (uVar6 = uVar7, 0x5dc < uVar7)) {
      uVar6 = 0x5dc;
    }
    iVar8 = uVar6 * iVar3;
    if (*(int *)(param_1 + 0xc) != 1) goto LAB_ram_42084908;
  }
  if ((_DAT_ram_3fcc4018 == 0) &&
     ((_DAT_ram_3fcc4014 == 0 || (*(int *)(_DAT_ram_3fcc4014 + 0xe4) == 0)))) goto LAB_ram_420848ca;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      if ((int)uVar5 <= (int)(uint)*(byte *)(_DAT_ram_3fcc4008 + 0x118)) goto LAB_ram_420848ca;
    }
    else if ((*(int *)(param_1 + 0xc) != 1) ||
            ((int)uVar6 <= (int)(uint)*(byte *)(_DAT_ram_3fcc4008 + 0x118))) goto LAB_ram_420848ca;
  }
  iVar8 = iVar8 + (uint)*(byte *)(_DAT_ram_3fcc4008 + 0x118) * iVar3;
LAB_ram_420848ca:
  return (iVar3 * 500 + iVar8 + 200) / 100;
}

