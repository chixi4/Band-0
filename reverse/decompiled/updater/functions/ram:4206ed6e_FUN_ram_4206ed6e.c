
void FUN_ram_4206ed6e(int param_1,undefined1 param_2,int param_3,undefined4 param_4,
                     undefined4 param_5)

{
  code *pcVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  
  uStack_13 = (undefined1)((uint)param_3 >> 0x10);
  uStack_12 = (ushort)((uint)param_3 >> 8) & 0xff | (ushort)(param_3 << 8);
  pcVar1 = *(code **)(*(int *)(param_1 + 0x38) + 0x10);
  uStack_14 = param_2;
  (*pcVar1)(param_1,&uStack_14,4,param_4,param_5,pcVar1);
  return;
}

