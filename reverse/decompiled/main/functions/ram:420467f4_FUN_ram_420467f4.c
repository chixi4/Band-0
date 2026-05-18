
void FUN_ram_420467f4(uint param_1,uint param_2,int param_3,uint *param_4)

{
  byte *pbVar1;
  
  if (param_2 < 0x11) {
    if (param_1 >> (param_2 & 0x1f) == 0) {
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        pbVar1 = (byte *)(((int)*param_4 >> 3) + param_3);
        *pbVar1 = (byte)((param_1 >> (param_2 & 0x1f) & 1) << (~*param_4 & 7)) | *pbVar1;
        *param_4 = *param_4 + 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

