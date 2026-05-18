
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420214a0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if ((param_2 == 0x18ff1f) && (param_3 == 0)) {
    _DAT_ram_3fcc5158 = 0;
    _DAT_ram_3fcc5154 = *(undefined4 *)(param_4 + 4);
    FUN_ram_42021346(4);
    FUN_ram_403979ba(_DAT_ram_3fcc5164,1);
    FUN_ram_42021358(6,&DAT_ram_3fcc5154);
    return;
  }
  return;
}

