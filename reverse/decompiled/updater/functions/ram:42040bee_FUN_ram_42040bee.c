
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42040bee(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if (*(char *)(gp + -0x1ce) != 0) {
    param_1 = (int)(char)((*(char *)(gp + -0x1ce) * 4 + param_1) / 5);
  }
  *(char *)(gp + -0x1ce) = (char)param_1;
  if (_DAT_ram_6004d000 < *(uint *)(gp + -0x1cc)) {
    *(uint *)(gp + -0x1cc) = _DAT_ram_6004d000;
  }
  else if (999999 < _DAT_ram_6004d000 - *(uint *)(gp + -0x1cc)) {
    *(uint *)(gp + -0x1cc) = _DAT_ram_6004d000;
    iVar1 = (param_1 - (uint)*(byte *)(gp + -0x1cd)) * 0x1000000;
    cVar3 = *(char *)(gp + -0x1d0);
    iVar2 = iVar1 >> 0x18;
    *(char *)(gp + -0x1c8) = (char)((uint)iVar1 >> 0x18);
    if ((iVar2 < cVar3) || (cVar3 = *(char *)(gp + -0x1cf), cVar3 < iVar2)) {
      *(char *)(gp + -0x1c8) = cVar3;
    }
    (*(code *)&LAB_ram_40012284)((int)*(char *)(gp + -0x1c8));
    return;
  }
  return;
}

