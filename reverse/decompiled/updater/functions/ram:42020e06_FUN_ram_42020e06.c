
undefined4
FUN_ram_42020e06(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uStack_18;
  undefined1 uStack_16;
  byte bStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uStack_18 = 1;
  uStack_16 = 0x5e;
  uVar2 = *param_2;
  bStack_15 = (byte)((uint)uVar2 >> 8) & 0x7f;
  uStack_13 = (undefined1)((uint)uVar2 >> 0x18);
  uStack_14 = (undefined1)((uint)uVar2 >> 0x10);
  iVar1 = (**(code **)(param_5 + 0x34))
                    (*(undefined4 *)(param_5 + 0x24),&uStack_18,6,param_3 == 1,param_5,
                     *(code **)(param_5 + 0x34));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

