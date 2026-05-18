
void FUN_ram_420468fe(byte *param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  if (((uVar3 - 0x15 < 0x9d) && (param_2 < uVar3)) && (param_3 < uVar3)) {
    param_2 = param_2 + uVar3 * param_3;
    bVar2 = param_1[((int)param_2 >> 3) + 1];
    bVar1 = (byte)(1 << (param_2 & 7));
    if (param_4 == 0) {
      bVar2 = bVar2 & ~bVar1;
    }
    else {
      bVar2 = bVar2 | bVar1;
    }
    param_1[((int)param_2 >> 3) + 1] = bVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

