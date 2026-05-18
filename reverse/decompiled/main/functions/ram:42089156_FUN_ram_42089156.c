
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42089156(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if (*(char *)(gp + 0x3a) != 0) {
    param_1 = (int)(char)((*(char *)(gp + 0x3a) * 4 + param_1) / 5);
  }
  *(char *)(gp + 0x3a) = (char)param_1;
  if (_DAT_ram_6004d000 < *(uint *)(gp + 0x3c)) {
    *(uint *)(gp + 0x3c) = _DAT_ram_6004d000;
  }
  else if (999999 < _DAT_ram_6004d000 - *(uint *)(gp + 0x3c)) {
    *(uint *)(gp + 0x3c) = _DAT_ram_6004d000;
    iVar1 = (param_1 - (uint)*(byte *)(gp + 0x3b)) * 0x1000000;
    cVar3 = *(char *)(gp + 0x38);
    iVar2 = iVar1 >> 0x18;
    *(char *)(gp + 0x40) = (char)((uint)iVar1 >> 0x18);
    if ((iVar2 < cVar3) || (cVar3 = *(char *)(gp + 0x39), cVar3 < iVar2)) {
      *(char *)(gp + 0x40) = cVar3;
    }
    (*(code *)&LAB_ram_40012284)((int)*(char *)(gp + 0x40));
    return;
  }
  return;
}

