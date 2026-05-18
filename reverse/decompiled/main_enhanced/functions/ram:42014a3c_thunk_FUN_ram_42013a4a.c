
int thunk_FUN_ram_42013a4a(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    return 0x102;
  }
  if ((param_3 & 8) != 0) {
    iVar1 = FUN_ram_42013926();
    return iVar1;
  }
  iVar1 = 0;
  if (param_2[0xb] != 0) {
    iVar1 = FUN_ram_40390474(0x18,0x1000);
    if (iVar1 == 0) goto LAB_ram_42013b04;
    FUN_ram_4039c11e(iVar1,param_2[0xb],0x18);
  }
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  uStack_40 = param_2[4];
  uStack_3c = param_2[5];
  uStack_38 = param_2[6];
  uStack_34 = param_2[7];
  uStack_30 = param_2[8];
  uStack_2c = param_2[9];
  uStack_28 = param_2[10];
  iStack_24 = iVar1;
  iVar2 = FUN_ram_40390474(0x30,0x1000);
  if (iVar2 != 0) {
    FUN_ram_4039c11e(iVar2,&uStack_50,0x30);
    iVar1 = FUN_ram_42013926(param_1,iVar2,param_3,param_4,0);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_ram_42013904(iVar2);
    return iVar1;
  }
LAB_ram_42013b04:
  thunk_FUN_ram_40390634(iVar1);
  return 0x101;
}

