
int FUN_ram_42013b2c(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  if (param_3 == (uint *)0x0) {
    return 0x102;
  }
  if ((*param_3 & 8) != 0) {
    return 0x102;
  }
  if (param_2 == -1) {
    param_1 = 0;
  }
  else {
    if (param_1 == 0) {
      return 0x102;
    }
    iVar1 = (*(code *)&SUB_ram_400104a8)();
    if (param_2 != iVar1) {
      return 0x102;
    }
  }
  if ((((param_3[0xc] == 0) && (param_3[0xd] == 0)) && (param_3[0xe] == 0)) &&
     (((param_3[0xf] == 0 && (param_3[0x10] == 0)) && (param_3[0x11] == 0)))) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_ram_40390474(0x18,0x1000);
    if (iVar1 == 0) goto LAB_ram_42013c34;
    local_50 = param_3[0xc];
    uStack_4c = param_3[0xd];
    uStack_48 = param_3[0xe];
    uStack_44 = param_3[0xf];
    uStack_40 = param_3[0x10];
    uStack_3c = param_3[0x11];
    FUN_ram_4039c11e(iVar1,&local_50,0x18);
  }
  local_50 = param_3[1];
  uStack_4c = param_3[2];
  uStack_48 = param_3[3];
  uStack_44 = param_3[4];
  uStack_40 = param_3[5];
  uStack_3c = param_3[6];
  uStack_38 = param_3[7];
  uStack_34 = param_3[8];
  uStack_30 = param_3[9];
  uStack_2c = param_3[10];
  uStack_28 = param_3[0xb];
  iStack_24 = iVar1;
  iVar2 = FUN_ram_40390474(0x30,0x1000);
  if (iVar2 != 0) {
    FUN_ram_4039c11e(iVar2,&local_50,0x30);
    iVar1 = FUN_ram_42013926(param_1,iVar2,*param_3,param_4,param_5);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_ram_42013904(iVar2);
    return iVar1;
  }
LAB_ram_42013c34:
  thunk_FUN_ram_40390634(iVar1);
  return 0x101;
}

