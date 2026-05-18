
undefined4
FUN_ram_4204e24a(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_44;
  undefined1 auStack_40 [24];
  uint uStack_28;
  
  if (*(int *)(param_1 + 100) == 1) {
    uStack_44 = 0;
    if ((param_3 != 0x41) ||
       (iVar1 = FUN_ram_4204d8d8(param_1,param_2,0x48,param_4,&uStack_44,auStack_40,0xff,0xff,0),
       iVar1 != 0)) {
      iVar1 = FUN_ram_4204d8d8(param_1,param_2,param_3,param_4,&uStack_44,auStack_40,0xff,0xff,0);
      if (iVar1 != 0) {
        return 0x1102;
      }
      uStack_28 = uStack_28 & 0xffff;
    }
    *param_5 = uStack_28;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x1101;
  }
  return uVar2;
}

