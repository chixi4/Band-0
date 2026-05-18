
byte FUN_ram_4202d598(int *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  
  if (0 < (int)param_2) {
    bVar2 = 10;
    if ((int)param_2 <= (int)(uint)*(ushort *)(*param_1 + 0x10)) {
      iVar1 = (*(code *)&SUB_ram_40011a30)(*param_1,param_2 & 0xffff);
      *param_1 = iVar1;
      bVar2 = -(iVar1 == 0) & 6;
    }
    return bVar2;
  }
  return 3;
}

