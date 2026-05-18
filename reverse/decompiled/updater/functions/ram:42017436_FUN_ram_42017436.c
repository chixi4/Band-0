
void FUN_ram_42017436(uint param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((param_1 < 200) && (param_2 < 200)) {
    pbVar2 = (byte *)(param_2 * 0x19 + ((int)param_1 >> 3) + 0x3fcb20a0);
    bVar1 = (byte)(0x80 >> (param_1 & 7));
    if (param_3 != 0) {
      *pbVar2 = bVar1 | *pbVar2;
      return;
    }
    *pbVar2 = *pbVar2 & ~bVar1;
  }
  return;
}

